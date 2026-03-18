/*
 * XREFs of RIMSetContactEndState @ 0x1C010FA20
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMSetContactEndState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax

  *(_OWORD *)(a2 + 2328) = *(_OWORD *)(a2 + 2544);
  *(_OWORD *)(a2 + 2344) = *(_OWORD *)(a2 + 2560);
  *(_OWORD *)(a2 + 2360) = *(_OWORD *)(a2 + 2576);
  *(_OWORD *)(a2 + 2376) = *(_OWORD *)(a2 + 2592);
  *(_OWORD *)(a2 + 2392) = *(_OWORD *)(a2 + 2608);
  *(_OWORD *)(a2 + 2408) = *(_OWORD *)(a2 + 2624);
  *(_OWORD *)(a2 + 2424) = *(_OWORD *)(a2 + 2640);
  *(_OWORD *)(a2 + 2440) = *(_OWORD *)(a2 + 2656);
  *(_OWORD *)(a2 + 2456) = *(_OWORD *)(a2 + 2672);
  *(_OWORD *)(a2 + 2472) = *(_OWORD *)(a2 + 2688);
  *(_OWORD *)(a2 + 2488) = *(_OWORD *)(a2 + 2704);
  *(_OWORD *)(a2 + 2504) = *(_OWORD *)(a2 + 2720);
  *(_OWORD *)(a2 + 2520) = *(_OWORD *)(a2 + 2736);
  *(_QWORD *)(a2 + 2536) = *(_QWORD *)(a2 + 2752);
  result = 0LL;
  *(_DWORD *)(a2 + 2376) = 0;
  *(_WORD *)(a2 + 2386) = 0;
  if ( a5 )
    result = 0x8000LL;
  *(_DWORD *)(a2 + 2404) = result;
  *(_DWORD *)(a2 + 2456) = a4;
  *(_QWORD *)(a2 + 2472) = a3;
  *(_DWORD *)(a2 + 2492) = 0;
  return result;
}
