/*
 * XREFs of VmpProcessMemoryRangeCompareGpn @ 0x14027969C
 * Callers:
 *     VmColdPagesHint @ 0x140278440 (VmColdPagesHint.c)
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
