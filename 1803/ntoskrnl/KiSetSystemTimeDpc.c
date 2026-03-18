/*
 * XREFs of KiSetSystemTimeDpc @ 0x140167EE0
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x1400FB8E0 (KiReadyThread.c)
 *     KeAdjustInterruptTime @ 0x140156098 (KeAdjustInterruptTime.c)
 *     KiUpdateSystemTime @ 0x140162978 (KiUpdateSystemTime.c)
 *     KiSelectActiveTimerTable @ 0x140168150 (KiSelectActiveTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x140168180 (KiAdjustTimerDueTimes.c)
 *     EtwTraceReadyThread @ 0x1402AF168 (EtwTraceReadyThread.c)
 */

char __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v6; // r14
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 i; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 active; // rbp
  __int64 v14; // r8
  _QWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  signed __int32 v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // eax
  signed __int32 v23; // eax
  unsigned int v24; // esi
  struct _SINGLE_LIST_ENTRY *Next; // r14
  __int64 v26; // rsi
  __int64 *v27; // rbx
  __int64 *v28; // rbp
  volatile signed __int32 *v29; // r15
  __int64 *v30; // rcx
  __int64 **v31; // rax
  _DWORD v33[14]; // [rsp+20h] [rbp-38h] BYREF
  int v34; // [rsp+68h] [rbp+10h] BYREF
  int j; // [rsp+78h] [rbp+20h] BYREF

  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v34 = 0;
    for ( i = *(_DWORD *)a4; (i & 0x80000000) != v8; i = *(_DWORD *)a4 )
      KeYieldProcessorEx(&v34);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(a2) = 1;
  active = KiSelectActiveTimerTable(CurrentPrcb, a2);
  if ( CurrentPrcb->ClockOwner )
  {
    **(_QWORD **)(v6 + 16) = MEMORY[0xFFFFF78000000014];
    v15 = *(_QWORD **)(v6 + 16);
    v16 = *(_DWORD *)(v6 + 4);
    v17 = **(_QWORD **)(v6 + 8);
    *(_QWORD *)(v6 + 24) = v17;
    v18 = v17 - *v15;
    *(_QWORD *)(v6 + 24) = v18;
    if ( (v16 & 1) != 0 )
    {
      if ( KeAdjustInterruptTime(v18, (v16 & 2) != 0) )
      {
        v19 = -*(_QWORD *)(v6 + 24);
        *(_BYTE *)v6 = 1;
        *(_QWORD *)(v6 + 24) = v19;
      }
    }
    else
    {
      KiUpdateSystemTime(v18, 0LL, v16);
    }
  }
  v20 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v21 = ~v20 & 0x80000000;
  if ( (v20 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      v22 = *(_DWORD *)a4 & 0x80000000;
      if ( v22 == v21 )
        break;
    }
  }
  else
  {
    v22 = v21 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = v22;
  }
  if ( *(_QWORD *)(v6 + 24) )
  {
    if ( active )
      KiAdjustTimerDueTimes(CurrentPrcb, active, v6);
    v23 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v24 = ~v23 & 0x80000000;
    if ( (v23 & 0x7FFFFFFF) != 0 )
    {
      v33[0] = 0;
      while ( 1 )
      {
        v22 = *(_DWORD *)a4 & 0x80000000;
        if ( v22 == v24 )
          break;
        KeYieldProcessorEx(v33);
      }
    }
    else
    {
      v22 = v24 | *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = v22;
    }
  }
  _InterlockedDecrement(a3);
  Next = CurrentPrcb->DeferredReadyListHead.Next;
  if ( Next )
  {
    CurrentPrcb->DeferredReadyListHead.Next = 0LL;
    do
    {
      v26 = (__int64)&Next[-27];
      Next = Next->Next;
      v27 = *(__int64 **)(v26 + 208);
      v28 = &v27[6 * *(unsigned __int8 *)(v26 + 587)];
      do
      {
        if ( *((_BYTE *)v27 + 17) < 5u )
        {
          v29 = (volatile signed __int32 *)v27[4];
          KiAcquireKobjectLockSafe(v29);
          if ( *((_BYTE *)v27 + 17) == 4 )
          {
            v30 = (__int64 *)*v27;
            v31 = (__int64 **)v27[1];
            if ( *(__int64 **)(*v27 + 8) != v27 || *v31 != v27 )
              __fastfail(3u);
            *v31 = v30;
            v30[1] = (__int64)v31;
          }
          _InterlockedAnd(v29, 0xFFFFFF7F);
        }
        v27 += 6;
      }
      while ( v27 != v28 );
      *(_WORD *)(v26 + 566) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(v11) = 1;
        EtwTraceReadyThread(v26, v11, 0LL);
      }
      LOBYTE(v22) = KiReadyThread((__int64)CurrentPrcb, v26, v14);
    }
    while ( Next );
  }
  if ( CurrentPrcb->NextThread )
  {
    LOBYTE(v22) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)v22 )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        LOBYTE(v12) = 2;
        LOBYTE(v22) = HalRequestSoftwareInterrupt(v12);
      }
    }
  }
  return v22;
}
