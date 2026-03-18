/*
 * XREFs of InvokeGetSfntFragmentPtr @ 0x1C02C8E60
 * Callers:
 *     sfac_DoOffsetTableMap @ 0x1C02C989C (sfac_DoOffsetTableMap.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokeGetSfntFragmentPtr(int a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( a1 != 1 )
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v5 = 0LL;
  if ( a3 )
  {
    if ( a3 <= 0 || a4 < 0 || a3 > 0x7FFFFFFF - a4 || a3 + a4 > *(_DWORD *)(a2 + 72) )
      return v5;
    v6 = a3;
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 272);
  }
  return *(_QWORD *)(a2 + 64) + v6;
}
