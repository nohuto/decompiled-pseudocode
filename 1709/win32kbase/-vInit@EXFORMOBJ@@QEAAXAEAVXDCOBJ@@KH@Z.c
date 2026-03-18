/*
 * XREFs of ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00548A0
 * Callers:
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEAAHXZ @ 0x1C0051E88 (-bDpiScaleTransform@DC@@QEAAHXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0052810 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C00529A0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C00541A0 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00ED900 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C00EDF40 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 */

void __fastcall EXFORMOBJ::vInit(EXFORMOBJ *this, DC **a2, int a3, int a4)
{
  DC *v8; // rcx
  int v9; // eax
  DC *v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  int v13; // esi
  __int64 v14; // rax
  DC *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  DC *v19; // rcx
  char *v20; // [rsp+20h] [rbp-18h] BYREF
  int v21; // [rsp+2Ch] [rbp-Ch]

  if ( a4 )
  {
    v8 = *a2;
    v9 = *((_DWORD *)*a2 + 134);
    if ( (v9 & 1) != 0 && (v9 & 2) == 0 )
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
      v21 = 0;
      v20 = (char *)v10 + 372;
      if ( v10 != (DC *)-372LL )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v20, (struct _POINTFIX *)(v11 + 84), (struct _POINTL *)(v11 + 76), 1uLL);
      *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform(*a2);
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) |= 0x200u;
    v19 = *a2;
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) & 0x80u) != 0 )
    {
      v21 = 0;
      v20 = (char *)v19 + 336;
      if ( v19 != (DC *)-336LL )
        DC::vRealizeLineAttrs(v19, (struct EXFORMOBJ *)&v20);
      *((_DWORD *)*a2 + 66) |= 1u;
      *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) &= ~0x80u;
    }
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) |= 0x10u;
  }
  v12 = a3 - 515;
  if ( !v12 )
  {
    v14 = (__int64)*a2 + 408;
    goto LABEL_7;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v14 = (__int64)*a2 + 336;
LABEL_7:
    *(_QWORD *)this = v14;
    goto LABEL_8;
  }
  if ( v13 != 510 )
    goto LABEL_23;
  *(_QWORD *)this = (char *)*a2 + 372;
  if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) & 0x10) == 0 )
    goto LABEL_8;
  if ( (unsigned int)EXFORMOBJ::bInverse(this, (DC *)((char *)*a2 + 336)) )
  {
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) &= ~0x10u;
    if ( !(unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v17 = *(_QWORD *)this;
      v18 = *(_QWORD *)(v16 + 80);
      *(_OWORD *)(v18 + 220) = *(_OWORD *)*(_QWORD *)this;
      *(_OWORD *)(v18 + 236) = *(_OWORD *)(v17 + 16);
      *(_DWORD *)(v18 + 252) = *(_DWORD *)(v17 + 32);
    }
  }
  else
  {
LABEL_23:
    *(_QWORD *)this = 0LL;
  }
LABEL_8:
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
