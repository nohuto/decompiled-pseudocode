/*
 * XREFs of HvpViewMapFindViewForFileOffset @ 0x1404E366C
 * Callers:
 *     HvpMapHiveImageFromViewMap @ 0x1404E35C4 (HvpMapHiveImageFromViewMap.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x140513B34 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapSealRange @ 0x1405140C0 (HvpViewMapSealRange.c)
 *     HvpViewMapUnCOWAndSealRange @ 0x14055916C (HvpViewMapUnCOWAndSealRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x140566FA8 (HvpViewMapExtendStorage.c)
 *     HvpViewMapAdjustFlag @ 0x140636A68 (HvpViewMapAdjustFlag.c)
 *     HvpViewMapShrinkStorage @ 0x140706E50 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpViewMapFindViewForFileOffset(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // r8
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // edx
  unsigned __int64 v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 48);
  result = *v2;
  if ( (v4 & 1) != 0 && result )
    result ^= (unsigned __int64)v2;
  v6 = v4 & 1;
  while ( result )
  {
    if ( a2 < *(_QWORD *)(result + 40) )
    {
      v7 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 < *(_QWORD *)(result + 48) )
        return result;
      v7 = *(_QWORD *)(result + 8);
    }
    if ( v6 && v7 )
      result ^= v7;
    else
      result = v7;
  }
  return 0LL;
}
