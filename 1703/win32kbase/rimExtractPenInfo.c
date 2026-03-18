/*
 * XREFs of rimExtractPenInfo @ 0x1C0112870
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C011294C (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     rimExtractData @ 0x1C01121CC (rimExtractData.c)
 */

__int64 __fastcall rimExtractPenInfo(__int64 a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax

  v3 = a3 + 41;
  a3[43] = rimExtractData(a1, 13, 65, 2, a3 + 41);
  a3[44] = rimExtractData(a1, 13, 61, 4, v3);
  result = rimExtractData(a1, 13, 62, 8, v3);
  a3[45] = result;
  if ( (*(_DWORD *)(a1 + 260) & 0x40000) != 0 )
  {
    result = rimExtractData(a1, 13, 48, 1, v3);
    a3[42] = result;
  }
  else if ( a2 )
  {
    *v3 |= 4u;
    a3[42] = 512;
  }
  return result;
}
