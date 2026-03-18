/*
 * XREFs of hfontCreate @ 0x1C002B4D0
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C002B45C (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00DBD90 (NtGdiHfontCreate.c)
 *     bInitStockFontsInternal @ 0x1C038801C (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C0388494 (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C038873C (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C038A16C (bInitSystemFont.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C002B5F8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     cCapString @ 0x1C002CDA8 (cCapString.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

struct HOBJ__ *__fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4)
{
  unsigned int v8; // eax
  unsigned int v9; // esi
  _DWORD *Object; // rax
  struct OBJECT *v11; // rbx
  int v12; // eax
  struct HOBJ__ *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( !Src )
    return 0LL;
  v8 = Src[88];
  if ( v8 > 0x10 )
    return 0LL;
  v9 = 4 * v8 + 356;
  Object = (_DWORD *)AllocateObject(4 * v8 + 632, 10LL, 0LL);
  v11 = (struct OBJECT *)Object;
  if ( !Object )
    return 0LL;
  Object[6] = a2;
  Object[7] = a3;
  Object[68] = v9;
  memmove(Object + 69, Src, v9);
  *((_DWORD *)v11 + 8) = 0;
  *((_DWORD *)v11 + 9) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  cCapString((char *)v11 + 208, Src + 7, 32LL);
  v12 = lNormAngle((unsigned int)Src[3]);
  v17 = 0LL;
  Src[3] = v12;
  v13 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v17, v11, 0, 0, 10);
  if ( !v13 )
  {
    FreeObject(v11, 10LL);
    if ( v17 )
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
    return 0LL;
  }
  v14 = HmgPentryFromPobj(v11);
  v15 = v17;
  *(_QWORD *)(v14 + 16) = a4;
  if ( v15 )
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
  return v13;
}
