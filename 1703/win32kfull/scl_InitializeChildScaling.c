/*
 * XREFs of scl_InitializeChildScaling @ 0x1C02BE890
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02C694C (fsg_CompositeInnerGridFit.c)
 *     fsg_MergeGlyphData @ 0x1C02C7F5C (fsg_MergeGlyphData.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02C86C8 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_ComputeScaling @ 0x1C02BE5D4 (scl_ComputeScaling.c)
 */

__int64 __fastcall scl_InitializeChildScaling(_DWORD *a1, int *a2, unsigned __int16 a3)
{
  int v4; // edi
  int v6; // edx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 result; // rax

  v4 = a3 << 16;
  if ( a1[118] )
  {
    v6 = a3 << 16;
    v7 = v6;
  }
  else
  {
    v8 = *a2;
    v6 = a2[1];
    if ( v8 < 0 )
      v8 = -v8;
    if ( v6 < 0 )
      v6 = -v6;
    v7 = a2[4];
    if ( v8 > v6 )
      v6 = v8;
    v9 = a2[3];
    if ( v9 < 0 )
      v9 = -v9;
    if ( v7 < 0 )
      v7 = -v7;
    if ( v9 > v7 )
      v7 = v9;
  }
  a1[44] = scl_ComputeScaling(a1 + 58, v6, v4);
  result = scl_ComputeScaling(a1 + 62, v7, v4);
  a1[45] = result;
  return result;
}
