/*
 * XREFs of KiRequestProcessInSwap @ 0x1400AA620
 * Callers:
 *     KiInSwapSingleProcess @ 0x1400AA560 (KiInSwapSingleProcess.c)
 *     KiReadyThread @ 0x1400FB8E0 (KiReadyThread.c)
 * Callees:
 *     MmNotifyProcessInSwapTrigger @ 0x1400AA758 (MmNotifyProcessInSwapTrigger.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

int __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v6; // rcx
  _DWORD *v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  signed __int64 v10; // rax
  signed __int64 *v11; // rdi
  signed __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  int v17; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = SchedulerAssist[5];
      SchedulerAssist[5] = v13 + 1;
      if ( v13 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(a1 + 64) );
    LOBYTE(v14) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v14);
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = KeGetCurrentPrcb();
  v7 = v6->SchedulerAssist;
  if ( v7 )
  {
    if ( v6->NestingLevel <= 1u )
    {
      v15 = v7[5] - 1;
      v7[5] = v15;
      if ( !v15 && !*((_BYTE *)v7 + 25) && !*((_BYTE *)v7 + 27) )
        KiPerformUnboostKick(v6);
    }
  }
  v8 = (_QWORD *)(a1 + 216);
  v9 = *(_QWORD **)(a2 + 256);
  if ( *v9 != a2 + 248 )
    __fastfail(3u);
  *v8 = a2 + 248;
  v8[1] = v9;
  *v9 = v8;
  *(_QWORD *)(a2 + 256) = v8;
  LODWORD(v10) = *(_DWORD *)(a2 + 572) & 7;
  if ( (_DWORD)v10 == 1 )
    _InterlockedXor((volatile signed __int32 *)(a2 + 572), 3u);
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( (_DWORD)v10 == 1 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v11 = (signed __int64 *)(a2 + 264);
    _m_prefetchw(&KiProcessInSwapListHead);
    v10 = KiProcessInSwapListHead;
    do
    {
      *v11 = v10;
      v12 = v10;
      v10 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v11, v10);
    }
    while ( v10 != v12 );
    if ( !v10 )
      LODWORD(v10) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v10;
}
