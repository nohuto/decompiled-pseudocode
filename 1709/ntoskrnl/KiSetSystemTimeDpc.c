/*
 * XREFs of KiSetSystemTimeDpc @ 0x140149AE0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x1400932D0 (KiReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiAdjustTimerDueTimes @ 0x140149D6C (KiAdjustTimerDueTimes.c)
 *     KiUpdateSystemTime @ 0x14014A00C (KiUpdateSystemTime.c)
 *     KeAdjustInterruptTime @ 0x14020358C (KeAdjustInterruptTime.c)
 *     EtwTraceReadyThread @ 0x14027B7EC (EtwTraceReadyThread.c)
 */

char __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v6; // r14
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 i; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 p_TimerTable; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  signed __int32 v17; // eax
  unsigned int v18; // esi
  unsigned int v19; // eax
  signed __int32 v20; // eax
  unsigned int v21; // esi
  struct _SINGLE_LIST_ENTRY *Next; // r14
  __int64 v23; // rsi
  __int64 *v24; // rbx
  __int64 *v25; // rbp
  volatile signed __int32 *v26; // r15
  __int64 *v27; // rcx
  __int64 **v28; // rax
  _DWORD v30[14]; // [rsp+20h] [rbp-38h] BYREF
  int v31; // [rsp+68h] [rbp+10h] BYREF
  int j; // [rsp+78h] [rbp+20h] BYREF

  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v31 = 0;
    for ( i = *(_DWORD *)a4; (i & 0x80000000) != v8; i = *(_DWORD *)a4 )
      KeYieldProcessorEx(&v31);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KiSerializeTimerExpiration )
  {
    if ( CurrentPrcb->ClockOwner )
      p_TimerTable = KiProcessorBlock[0] + 13952;
    else
      p_TimerTable = 0LL;
  }
  else
  {
    p_TimerTable = (__int64)&CurrentPrcb->TimerTable;
  }
  if ( CurrentPrcb->ClockOwner )
  {
    **(_QWORD **)(v6 + 16) = MEMORY[0xFFFFF78000000014];
    v12 = **(_QWORD **)(v6 + 8);
    v13 = *(_QWORD **)(v6 + 16);
    *(_QWORD *)(v6 + 24) = v12;
    v14 = v12 - *v13;
    v15 = *(_DWORD *)(v6 + 4);
    *(_QWORD *)(v6 + 24) = v14;
    if ( (v15 & 1) != 0 )
    {
      LOBYTE(a2) = (v15 & 2) != 0;
      if ( (unsigned __int8)KeAdjustInterruptTime(v14, a2) )
      {
        v16 = -*(_QWORD *)(v6 + 24);
        *(_BYTE *)v6 = 1;
        *(_QWORD *)(v6 + 24) = v16;
      }
    }
    else
    {
      KiUpdateSystemTime(v14, 0LL, v15);
    }
  }
  v17 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v18 = ~v17 & 0x80000000;
  if ( (v17 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      v19 = *(_DWORD *)a4 & 0x80000000;
      if ( v19 == v18 )
        break;
    }
  }
  else
  {
    v19 = v18 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = v19;
  }
  if ( *(_QWORD *)(v6 + 24) )
  {
    if ( p_TimerTable )
      KiAdjustTimerDueTimes(CurrentPrcb, p_TimerTable, v6);
    v20 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v21 = ~v20 & 0x80000000;
    if ( (v20 & 0x7FFFFFFF) != 0 )
    {
      v30[0] = 0;
      while ( 1 )
      {
        v19 = *(_DWORD *)a4 & 0x80000000;
        if ( v19 == v21 )
          break;
        KeYieldProcessorEx(v30);
      }
    }
    else
    {
      v19 = v21 | *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = v19;
    }
  }
  _InterlockedDecrement(a3);
  Next = CurrentPrcb->DeferredReadyListHead.Next;
  if ( Next )
  {
    CurrentPrcb->DeferredReadyListHead.Next = 0LL;
    do
    {
      v23 = (__int64)&Next[-27];
      Next = Next->Next;
      v24 = *(__int64 **)(v23 + 208);
      v25 = &v24[6 * *(unsigned __int8 *)(v23 + 587)];
      do
      {
        if ( *((_BYTE *)v24 + 17) < 5u )
        {
          v26 = (volatile signed __int32 *)v24[4];
          KiAcquireKobjectLockSafe(v26);
          if ( *((_BYTE *)v24 + 17) == 4 )
          {
            v27 = (__int64 *)*v24;
            v28 = (__int64 **)v24[1];
            if ( *(__int64 **)(*v24 + 8) != v24 || *v28 != v24 )
              __fastfail(3u);
            *v28 = v27;
            v27[1] = (__int64)v28;
          }
          _InterlockedAnd(v26, 0xFFFFFF7F);
        }
        v24 += 6;
      }
      while ( v24 != v25 );
      *(_WORD *)(v23 + 566) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(a2) = 1;
        EtwTraceReadyThread(v23, a2, 0LL, 0LL);
      }
      LOBYTE(v19) = KiReadyThread((__int64)CurrentPrcb, v23, (__int64)a3);
    }
    while ( Next );
  }
  if ( CurrentPrcb->NextThread )
  {
    LOBYTE(v19) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)v19 )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        LOBYTE(a1) = 2;
        LOBYTE(v19) = HalRequestSoftwareInterrupt(a1);
      }
    }
  }
  return v19;
}
