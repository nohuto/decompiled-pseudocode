/*
 * XREFs of rimExtractGeometryPoints @ 0x1C01124C0
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C011294C (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     <none>
 */

char __fastcall rimExtractGeometryPoints(__int16 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _UNKNOWN **v5; // rax
  unsigned int v6; // r11d
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned int v9; // ebp
  unsigned __int8 v10; // di
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // r8
  _BYTE *v14; // rbx
  int v15; // edx
  unsigned __int8 v16; // al
  unsigned int v17; // ecx
  _UNKNOWN *retaddr; // [rsp+10h] [rbp+0h] BYREF

  v5 = &retaddr;
  v6 = a5;
  v7 = 0LL;
  v8 = 0LL;
  v9 = a5;
  v10 = 0;
  v11 = a5 & 7;
  if ( (a5 & 7) != 0 )
    v10 = (1 << v11) - 1;
  if ( a5 >= 8 )
  {
    do
    {
      if ( (unsigned int)v7 >= 4 )
        break;
      LOBYTE(v5) = *(_BYTE *)(v8 + a4);
      v9 -= 8;
      *(_BYTE *)(v7 + a3) = (_BYTE)v5;
      v8 = (unsigned int)(v8 + 1);
      v7 = (unsigned int)(v7 + 1);
    }
    while ( v9 >= 8 );
  }
  if ( v9 && (unsigned int)v7 < 4 )
    *(_BYTE *)(v7 + a3) = v10 & *(_BYTE *)(v8 + a4);
  v12 = 12LL;
  if ( a1 == 49 )
    v12 = 16LL;
  v13 = 0LL;
  v14 = (_BYTE *)(a2 + v12);
  if ( v9 )
  {
    v15 = *(unsigned __int8 *)(v8 + a4);
    v8 = (unsigned int)(v8 + 1);
    LODWORD(v5) = ~v10;
    *v14 = (int)((unsigned int)v5 & v15) >> v11;
    v6 = v11 + a5 - 8;
  }
  for ( ; v6; v8 = (unsigned int)(v8 + 1) )
  {
    if ( (unsigned int)v13 >= 4 || (unsigned int)v8 >= 8 )
      break;
    v16 = *(_BYTE *)(v8 + a4);
    if ( (a5 & 7) != 0 )
    {
      v14[v13] |= (v10 & v16) << (8 - v11);
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 < 4 )
        v14[v13] = (*(unsigned __int8 *)(v8 + a4) & ~v10) >> v11;
    }
    else
    {
      v14[v13] = v16;
      v13 = (unsigned int)(v13 + 1);
    }
    LODWORD(v5) = v6;
    v17 = v6 - 8;
    v6 = 0;
    if ( (unsigned int)v5 > 8 )
      v6 = v17;
  }
  return (char)v5;
}
