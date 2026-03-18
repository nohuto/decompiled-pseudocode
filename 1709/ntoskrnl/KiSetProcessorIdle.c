/*
 * XREFs of KiSetProcessorIdle @ 0x140128644
 * Callers:
 *     KiSearchForNewThread @ 0x14006EA10 (KiSearchForNewThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14008AEE4 (KiGroupSchedulingGenerationEnd.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     KeTransitionProcessorParkState @ 0x14020DD2C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x14042615C (KiCompleteKernelInit.c)
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
      *(_BYTE *)(v6 + 8) = 1;
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
