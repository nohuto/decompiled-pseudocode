/*
 * XREFs of KiCancelTimer @ 0x14005B820
 * Callers:
 *     KiSuspendThread @ 0x140044BA8 (KiSuspendThread.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     ExpCancelTimer @ 0x14005AA70 (ExpCancelTimer.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x14005AD00 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     KeCancelTimerInternal @ 0x1400C94CC (KeCancelTimerInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  unsigned __int8 v4; // di
  __int64 v5; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v7; // rax
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // r15
  volatile signed __int32 *v10; // rsi
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+34h] [rbp-54h] BYREF
  int v25; // [rsp+38h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v23 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v5 = *(unsigned __int8 *)(a1 + 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *(unsigned int *)(a1 + 56);
    v24 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v9 = KiProcessorBlock[v7] + 13952;
    v10 = (volatile signed __int32 *)(v9 + 32 * (v5 + 16));
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = SchedulerAssist[5];
        SchedulerAssist[5] = v21 + 1;
        if ( v21 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)v10 );
      LOBYTE(v20) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v20);
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v11 = *(_QWORD **)(a1 + 32);
      v12 = *(_QWORD **)(a1 + 40);
      if ( v11[1] != a1 + 32 || *v12 != a1 + 32 )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      if ( v12 == v11 )
      {
        *(_DWORD *)(32 * (v5 + 16) + v9 + 28) = -1;
        if ( KiSerializeTimerExpiration )
        {
          v13 = v5 & 0x3F;
          v14 = 8LL * ((unsigned int)v5 >> 6);
        }
        else
        {
          v13 = *(unsigned __int8 *)(v9 - 13743);
          v14 = v5 << 6;
        }
        _interlockedbittestandreset64(
          (volatile signed __int32 *)(qword_14044D448[2 * *(unsigned __int8 *)(v9 - 13744)] + v14),
          v13);
      }
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v22 = v16[5] - 1;
          v16[5] = v22;
          if ( !v22 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
            KiPerformUnboostKick(v15);
        }
      }
      v17 = -1073741953;
      v18 = -1073741825;
      goto LABEL_15;
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v9 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v17 = 16777087;
      v18 = 0xFFFFFF;
LABEL_15:
      if ( !a2 )
        v17 = v18;
      _InterlockedAnd((volatile signed __int32 *)a1, v17);
      v4 = 1;
      goto LABEL_18;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v25 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v25);
  }
  if ( a2 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_18:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v26 = a1;
    v27[0] = &v26;
    v27[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v27, 1, 1073872896, 3925, 1538);
  }
  return v4;
}
