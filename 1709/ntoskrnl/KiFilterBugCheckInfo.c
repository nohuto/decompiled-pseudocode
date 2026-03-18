/*
 * XREFs of KiFilterBugCheckInfo @ 0x14016875C
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140359D20 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140359EF0 = *(_OWORD *)(a2 + 16);
    qword_140359F00 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_1403566D0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140359D28;
    *(_QWORD *)(a2 + 32) = qword_140359D30;
    result = &KiBugCheckOriginalData;
    qword_140359D00 = (__int64)&KiBugCheckOriginalData;
    dword_140359D10 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
