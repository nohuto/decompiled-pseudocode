/*
 * XREFs of KiSetSystemTimeDpc @ 0x140143A60
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 *     KeAdjustInterruptTime @ 0x14013DE70 (KeAdjustInterruptTime.c)
 *     KiSelectActiveTimerTable @ 0x140143C08 (KiSelectActiveTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x140143C38 (KiAdjustTimerDueTimes.c)
 *     KiUpdateSystemTime @ 0x140144050 (KiUpdateSystemTime.c)
 */

void __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 active; // r14
  LARGE_INTEGER *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // r9
  signed __int32 v16; // eax
  unsigned int v17; // ebx
  signed __int32 v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  _DWORD v21[4]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+78h] [rbp+10h] BYREF
  int v23; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v22);
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
    v11 = *(LARGE_INTEGER **)(v6 + 16);
    *v11 = RtlGetSystemTimePrecise();
    v12 = *(_DWORD *)(v6 + 4);
    v13 = **(_QWORD **)(v6 + 8);
    v14 = *(_QWORD **)(v6 + 16);
    *(_QWORD *)(v6 + 24) = v13;
    v15 = v13 - *v14;
    *(_QWORD *)(v6 + 24) = v15;
    if ( (v12 & 1) != 0 )
    {
      if ( KeAdjustInterruptTime(v15, (v12 & 2) != 0) )
      {
        v20 = -*(_QWORD *)(v6 + 24);
        *(_BYTE *)v6 = 1;
        *(_QWORD *)(v6 + 24) = v20;
      }
    }
    else
    {
      KiUpdateSystemTime(v15, 0LL, v12);
    }
  }
  v16 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v17 = ~v16 & 0x80000000;
  if ( (v16 & 0x7FFFFFFF) != 0 )
  {
    v23 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v17 )
      KeYieldProcessorEx(&v23);
  }
  else
  {
    *(_DWORD *)a4 = v17 | *(_DWORD *)(a4 + 4);
  }
  if ( *(_QWORD *)(v6 + 24) )
  {
    if ( active )
      KiAdjustTimerDueTimes(CurrentPrcb, active, v6);
    v18 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v19 = ~v18 & 0x80000000;
    if ( (v18 & 0x7FFFFFFF) != 0 )
    {
      v21[0] = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v19 )
        KeYieldProcessorEx(v21);
    }
    else
    {
      *(_DWORD *)a4 = v19 | *(_DWORD *)(a4 + 4);
    }
  }
  _InterlockedDecrement(a3);
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1LL, 0LL, 2u);
}
