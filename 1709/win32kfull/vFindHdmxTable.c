/*
 * XREFs of vFindHdmxTable @ 0x1C0232EDC
 * Callers:
 *     bComputeMaxGlyph @ 0x1C023168C (bComputeMaxGlyph.c)
 * Callees:
 *     bValidRangeHDMX @ 0x1C0229E6C (bValidRangeHDMX.c)
 */

void __fastcall vFindHdmxTable(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // ecx
  __int64 v4; // rbx
  int v5; // edi
  __int64 v6; // r11
  _BYTE *i; // rcx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 192);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) + v3;
  else
    v4 = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  v5 = *(_DWORD *)(a1 + 124);
  if ( v4 && bValidRangeHDMX(v4, *(_QWORD *)(a1 + 8), *(_DWORD *)(v1 + 76), &v9, &v8) && v5 <= 255 )
  {
    for ( i = (_BYTE *)(v4 + 8); (unsigned __int64)i < v4 + 8 + (unsigned __int64)(v8 * v9); i += v8 )
    {
      if ( (unsigned __int8)v5 <= *i )
      {
        if ( (_BYTE)v5 == *i )
          *(_QWORD *)(v6 + 136) = i;
        return;
      }
    }
  }
}
