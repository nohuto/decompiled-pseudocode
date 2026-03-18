/*
 * XREFs of VmpProcessMemoryRangeCompareGpn @ 0x1402AC888
 * Callers:
 *     VmColdPagesHint @ 0x1402AB370 (VmColdPagesHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessMemoryRangeCompareGpn(_QWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_QWORD *)(a2 + 32) )
    return (unsigned int)-(*a1 < *(_QWORD *)(a2 + 24));
  else
    return 1LL;
}
