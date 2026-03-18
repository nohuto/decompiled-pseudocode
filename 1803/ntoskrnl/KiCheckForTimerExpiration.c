/*
 * XREFs of KiCheckForTimerExpiration @ 0x14010D920
 * Callers:
 *     KeAccumulateTicks @ 0x14010D530 (KeAccumulateTicks.c)
 * Callees:
 *     KiSetClockInterval @ 0x140005980 (KiSetClockInterval.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140005A68 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140005B80 (KiSetClockIntervalToMinimumRequested.c)
 *     KiGetClockIntervalOneShot @ 0x140005E0C (KiGetClockIntervalOneShot.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KiResetClockInterval @ 0x140184708 (KiResetClockInterval.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int16 __fastcall KiCheckForTimerExpiration(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  char v6; // r10
  __int64 v7; // r9
  __int64 v8; // r9
  int v9; // r8d
  int v10; // r8d
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // r14
  __int64 v14; // rcx
  __int16 v15; // tt
  int ClockIntervalOneShot; // eax
  char v17; // dl
  unsigned __int8 CurrentIrql; // bp
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int16 v22; // cx
  unsigned __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int16 v25; // [rsp+38h] [rbp-40h]
  _QWORD v26[2]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v4 = MEMORY[0xFFFFF78000000008];
  LOWORD(v5) = *(unsigned __int8 *)(a1 + 11884);
  if ( (v5 & 8) != 0 )
    goto LABEL_6;
  LOWORD(v5) = KiLastNonHrTimerExpiration;
  if ( *(_QWORD *)(a1 + 11688) == KiLastNonHrTimerExpiration )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    a2 = MEMORY[0xFFFFF78000000008] >> 18;
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(a1 + 33) )
      {
LABEL_5:
        *(_DWORD *)(a1 + 11888) = a2;
        goto LABEL_6;
      }
      v7 = KiProcessorBlock[0];
    }
    else
    {
      v7 = a1;
    }
    v8 = v7 + 13952;
    if ( !v8 )
      goto LABEL_5;
    v9 = *(_DWORD *)(a1 + 11888);
    if ( (unsigned int)(a2 - v9) >= 0x100 )
      a2 = (unsigned int)(v9 + 255);
    v10 = v9 - 1;
    while ( 1 )
    {
      LOWORD(v5) = (unsigned __int8)++v10;
      if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(32LL * (unsigned __int8)v10 + v8 + 536) )
        break;
      if ( v10 == (_DWORD)a2 )
        goto LABEL_17;
    }
    v2 = 1;
LABEL_17:
    *(_DWORD *)(a1 + 11888) = v10;
    if ( v2 )
      goto LABEL_6;
  }
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_6;
  if ( v6 )
  {
    LOWORD(v5) = KiNextTimer2DueTime;
    if ( KiNextTimer2DueTime > v4 )
      goto LABEL_6;
    goto LABEL_21;
  }
  LOWORD(v5) = qword_1403B44C8;
  if ( qword_1403B44C8 <= v4 )
LABEL_21:
    v2 = 1;
LABEL_6:
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_7;
  v11 = qword_1403B44C8;
  v12 = v4 + KeMaximumIncrement;
  LOWORD(v5) = KiVelocityFlags;
  if ( (KiVelocityFlags & 0x100) == 0 )
  {
    v17 = KiHRTimerClockActive;
    if ( KiHRTimerClockActive )
    {
      if ( v12 > qword_1403B44C8 )
        goto LABEL_7;
    }
    else if ( v12 <= qword_1403B44C8 )
    {
      goto LABEL_7;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( v17 == KiHRTimerClockActive )
    {
      if ( v17 )
      {
        KiResetClockInterval(&KiHRTimerClockRequest);
        v19 = 0;
      }
      else
      {
        KiSetClockInterval(KiHrIncrement, 0, (__int64)&KiHRTimerClockRequest);
        v19 = 1;
      }
      KiHRTimerClockActive = v19;
    }
    v5 = CurrentIrql;
    goto LABEL_31;
  }
  if ( qword_1403B44C8 > v4 )
  {
    v5 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v5 = -1LL;
    if ( v5 != qword_1403B44C8 )
    {
      v13 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( v12 > v11 )
      {
        KiClockOwnerOneShotRequest = v11;
        KiSetClockIntervalToMinimumRequested(v12, a2);
        ClockIntervalOneShot = KiGetClockIntervalOneShot(v11, v4);
        PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336);
      }
      else if ( KiClockOwnerOneShotRequest )
      {
        PoTraceSystemTimerResolutionKernel(0, 1397707336);
        KiClockOwnerOneShotRequest = 0LL;
        KiSetClockIntervalToMinimumRequested(v21, v20);
      }
      v5 = v13;
LABEL_31:
      __writecr8(v5);
    }
LABEL_7:
    if ( !v2 )
      goto LABEL_8;
  }
  _m_prefetchw((const void *)(a1 + 11884));
  LOWORD(v5) = *(_WORD *)(a1 + 11884);
  do
  {
    v14 = (unsigned __int16)v5;
    BYTE1(v14) = BYTE1(v5);
    v15 = v5;
    LOWORD(v5) = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), v5 | 8, v5);
  }
  while ( v15 != (_WORD)v5 );
  if ( (v5 & 0x29) == 0 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      LOBYTE(v14) = 2;
      LOWORD(v5) = HalRequestSoftwareInterrupt(v14);
    }
  }
LABEL_8:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 )
  {
    LOWORD(v5) = KeGetCurrentIrql();
    if ( (_BYTE)v5 == 13 )
    {
      v22 = 0;
      v24 = v4;
      v25 = 0;
      if ( *(_BYTE *)(a1 + 33) )
      {
        v22 = 1;
        v25 = 1;
      }
      if ( (*(_BYTE *)(a1 + 11884) & 8) != 0 )
        v25 = v22 | 8;
      v26[1] = 16LL;
      v26[0] = &v24;
      LOWORD(v5) = EtwTraceKernelEvent((int)v26, 1, 0x40040000u, 3919, 4196866);
    }
  }
  return v5;
}
