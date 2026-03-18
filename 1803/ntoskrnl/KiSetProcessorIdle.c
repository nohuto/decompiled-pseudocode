/*
 * XREFs of KiSetProcessorIdle @ 0x1400A9678
 * Callers:
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
 *     KiSearchForNewThread @ 0x1400F7480 (KiSearchForNewThread.c)
 *     KeTransitionProcessorParkState @ 0x14024BF2C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x14047AF10 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rdx

  v3 = *(_QWORD *)(a1 + 192);
  result = *(unsigned __int8 *)(a1 + 35);
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 25016);
    if ( v6 )
      *(_BYTE *)(v6 + 24) = 1;
    *(_BYTE *)(a1 + 11883) = a3;
    if ( (result & 1) != 0 )
    {
      v7 = result - 1;
      *(_BYTE *)(a1 + 35) = v7;
      if ( !v7 )
        _interlockedbittestandset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 209));
      _interlockedbittestandset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 209));
      v8 = *(_QWORD *)(a1 + 24920);
      result = v8 & *(_QWORD *)(v3 + 16);
      if ( result == v8 )
        _InterlockedOr64((volatile signed __int64 *)(v3 + 8), v8);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 11883) = 0;
    if ( (result & 1) != 0 )
      __fastfail(0x21u);
    v5 = result + 1;
    *(_BYTE *)(a1 + 35) = v5;
    if ( v5 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 209));
    result = ~*(_QWORD *)(a1 + 24920);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), result);
  }
  return result;
}
