/*
 * XREFs of fsg_UpdateWorkSpaceElement @ 0x1C02C2890
 * Callers:
 *     fs_ContourScan @ 0x1C02B4134 (fs_ContourScan.c)
 *     fs_FindBitMapSize @ 0x1C02B4CD4 (fs_FindBitMapSize.c)
 *     fs__Contour @ 0x1C02B60DC (fs__Contour.c)
 *     fs__NewTransformation @ 0x1C02B684C (fs__NewTransformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsg_UpdateWorkSpaceElement(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r9
  __int64 i; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD **)(a2 + 16);
  for ( i = 0LL; i < 6; ++i )
    v3[i] = v2 + a1[i + 5];
  v3[7] = v2 + a1[12];
  v3[8] = v2 + a1[13];
  v3[6] = v2 + a1[11];
  v3[9] = v2 + a1[14];
  v3[11] = v2 + a1[15];
  result = v2 + a1[16];
  v3[13] = result;
  return result;
}
