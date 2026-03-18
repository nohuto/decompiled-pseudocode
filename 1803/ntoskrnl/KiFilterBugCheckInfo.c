/*
 * XREFs of KiFilterBugCheckInfo @ 0x14019283C
 * Callers:
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_14039D360 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_14039D530 = *(_OWORD *)(a2 + 16);
    qword_14039D540 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140399D00;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_14039D368;
    *(_QWORD *)(a2 + 32) = qword_14039D370;
    result = &KiBugCheckOriginalData;
    qword_14039D340 = (__int64)&KiBugCheckOriginalData;
    dword_14039D350 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
