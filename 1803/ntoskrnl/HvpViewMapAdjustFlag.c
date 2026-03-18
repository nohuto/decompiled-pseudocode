/*
 * XREFs of HvpViewMapAdjustFlag @ 0x140636A68
 * Callers:
 *     HvUnlockHiveFilePages @ 0x140495980 (HvUnlockHiveFilePages.c)
 * Callees:
 *     HvpViewMapFindViewForFileOffset @ 0x1404E366C (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140636AD4 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 */

__int64 __fastcall HvpViewMapAdjustFlag(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  unsigned __int64 ViewForFileOffset; // rbx

  v1 = *(_DWORD *)(a1 + 32);
  if ( (v1 & 2) == 0 )
    __fastfail(5u);
  v3 = 4096LL;
  if ( *(__int64 *)(a1 + 8) > 4096 )
  {
    do
    {
      ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v3);
      HvpViewMapMakeViewRangeUnCOWByPolicy(
        a1,
        ViewForFileOffset,
        *(_QWORD *)(ViewForFileOffset + 40),
        *(_QWORD *)(ViewForFileOffset + 48));
      v3 = *(_QWORD *)(ViewForFileOffset + 48);
    }
    while ( v3 < *(_QWORD *)(a1 + 8) );
    v1 = *(_DWORD *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 32) = v1 & 0xFFFFFFFD;
  return 0LL;
}
