/*
 * XREFs of ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0021740
 * Callers:
 *     GreGetClipBox @ 0x1C0020E10 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0040CC0 (GreIntersectClipRect.c)
 *     GreDCSelectPen @ 0x1C0076FF0 (GreDCSelectPen.c)
 * Callees:
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0021040 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0039CFC (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0039E90 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00E8220 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C00E8DB0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 */

void __fastcall EXFORMOBJ::vInit(EXFORMOBJ *this, DC **a2, int a3, int a4)
{
  DC *v8; // rcx
  int v9; // edx
  DC *v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  int v13; // esi
  __int64 v14; // rax
  DC *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  DC *v18; // rcx
  char *v19; // [rsp+20h] [rbp-18h] BYREF
  int v20; // [rsp+2Ch] [rbp-Ch]

  if ( a4 )
  {
    v8 = *a2;
    v9 = *((_DWORD *)*a2 + 134);
    if ( (v9 & 3) == 1 )
    {
      *((_DWORD *)v8 + 134) = v9 | 2;
      DC::vMarkTransformDirty(v8);
    }
  }
  v10 = *a2;
  v11 = *((_QWORD *)*a2 + 10);
  if ( (*(_DWORD *)(v11 + 352) & 0x1E000) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 8) & 0x100) != 0 )
    {
      v20 = 0;
      v19 = (char *)v10 + 372;
      if ( v10 != (DC *)-372LL )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v19, (struct _POINTFIX *)(v11 + 84), (struct _POINTL *)(v11 + 76), 1uLL);
      *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform(*a2);
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) |= 0x200u;
    v18 = *a2;
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) & 0x80u) != 0 )
    {
      v20 = 0;
      v19 = (char *)v18 + 336;
      if ( v18 != (DC *)-336LL )
        DC::vRealizeLineAttrs(v18, (struct EXFORMOBJ *)&v19);
      *((_DWORD *)*a2 + 66) |= 1u;
      *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) &= ~0x80u;
    }
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) |= 0x10u;
  }
  v12 = a3 - 515;
  if ( !v12 )
  {
    v14 = (__int64)*a2 + 408;
    goto LABEL_8;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v14 = (__int64)*a2 + 336;
LABEL_8:
    *(_QWORD *)this = v14;
    goto LABEL_9;
  }
  if ( v13 != 510 )
    goto LABEL_24;
  *(_QWORD *)this = (char *)*a2 + 372;
  if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) & 0x10) == 0 )
    goto LABEL_9;
  if ( (unsigned int)EXFORMOBJ::bInverse(this, (DC *)((char *)*a2 + 336)) )
  {
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) &= ~0x10u;
    if ( (*((_DWORD *)*a2 + 134) & 3) != 1 )
    {
      v16 = *(_QWORD *)this;
      v17 = *((_QWORD *)*a2 + 10);
      *(_OWORD *)(v17 + 220) = *(_OWORD *)*(_QWORD *)this;
      *(_OWORD *)(v17 + 236) = *(_OWORD *)(v16 + 16);
      *(_DWORD *)(v17 + 252) = *(_DWORD *)(v16 + 32);
    }
  }
  else
  {
LABEL_24:
    *(_QWORD *)this = 0LL;
  }
LABEL_9:
  if ( a4 )
  {
    v15 = *a2;
    if ( (*((_BYTE *)*a2 + 536) & 3) == 3 )
    {
      *((_DWORD *)v15 + 134) = *((_DWORD *)*a2 + 134) & 0xFFFFFFFD;
      DC::vMarkTransformDirty(v15);
    }
  }
}
