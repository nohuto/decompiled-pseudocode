/*
 * XREFs of rimExtractGeometryPoints @ 0x1C0110FAC
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C0111434 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimExtractGeometryPoints(__int16 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r11d
  __int64 v6; // rbx
  __int64 v7; // r10
  unsigned int v9; // esi
  unsigned __int8 v10; // r9
  int v11; // edi
  __int64 result; // rax
  __int64 v13; // r8
  _BYTE *v14; // r14
  int v15; // edx
  unsigned __int8 v16; // al
  unsigned int v17; // ecx

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a5;
  v10 = 0;
  v11 = a5 & 7;
  if ( (a5 & 7) != 0 )
    v10 = (1 << v11) - 1;
  if ( a5 >= 8 )
  {
    do
    {
      if ( (unsigned int)v6 >= 4 )
        break;
      v9 -= 8;
      *(_BYTE *)(v6 + a3) = *(_BYTE *)(v7 + a4);
      v7 = (unsigned int)(v7 + 1);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v9 >= 8 );
  }
  if ( v9 && (unsigned int)v6 < 4 )
    *(_BYTE *)(v6 + a3) = v10 & *(_BYTE *)(v7 + a4);
  result = 16LL;
  if ( a1 != 49 )
    result = 12LL;
  v13 = 0LL;
  v14 = (_BYTE *)(result + a2);
  if ( v9 )
  {
    v15 = *(unsigned __int8 *)(v7 + a4);
    v7 = (unsigned int)(v7 + 1);
    result = ~v10;
    *v14 = (int)(result & v15) >> v11;
    v5 = v11 + a5 - 8;
  }
  for ( ; v5; v7 = (unsigned int)(v7 + 1) )
  {
    if ( (unsigned int)v13 >= 4 || (unsigned int)v7 >= 8 )
      break;
    v16 = *(_BYTE *)(v7 + a4);
    if ( (a5 & 7) != 0 )
    {
      v14[v13] |= (v10 & v16) << (8 - v11);
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 < 4 )
        v14[v13] = (*(unsigned __int8 *)(v7 + a4) & ~v10) >> v11;
    }
    else
    {
      v14[v13] = v16;
      v13 = (unsigned int)(v13 + 1);
    }
    result = v5;
    v17 = v5 - 8;
    v5 = 0;
    if ( (unsigned int)result > 8 )
      v5 = v17;
  }
  return result;
}
