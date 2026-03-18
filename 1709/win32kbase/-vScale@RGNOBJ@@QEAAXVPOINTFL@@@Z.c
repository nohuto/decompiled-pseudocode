/*
 * XREFs of ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C00EF430
 * Callers:
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00F09F0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C0070F2C (bFToL.c)
 *     ?vScale@ERECTL@@QEAAXVPOINTFL@@@Z @ 0x1C00EF364 (-vScale@ERECTL@@QEAAXVPOINTFL@@@Z.c)
 */

_UNKNOWN **__fastcall RGNOBJ::vScale(__int64 *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // esi
  _DWORD *v6; // rbx
  char v7; // r8
  __int64 i; // rdi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v13[8]; // [rsp+28h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *(_DWORD *)(*a1 + 84);
  if ( v5 > 1 )
  {
    v6 = (_DWORD *)(*a1 + 104);
    v7 = 6;
    do
    {
      for ( i = 0LL; (unsigned int)i < *v6; i = (unsigned int)(i + 1) )
        bFToL((float)(int)v6[i + 3] * *(float *)&a2, &v6[i + 3], v7);
      v9 = v6[1];
      if ( v9 != 0x80000000 )
        bFToL((float)v9 * *((float *)&a2 + 1), v6 + 1, v7);
      v10 = v6[2];
      if ( v10 != 0x7FFFFFFF )
        bFToL((float)v10 * *((float *)&a2 + 1), v6 + 2, v7);
      v6 = (_DWORD *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
      --v5;
    }
    while ( v5 );
    v11 = *a1;
    *(_OWORD *)v13 = *(_OWORD *)(*a1 + 88);
    result = (_UNKNOWN **)ERECTL::vScale(v13, a2);
    *(_OWORD *)(v11 + 88) = *(_OWORD *)v13;
  }
  return result;
}
