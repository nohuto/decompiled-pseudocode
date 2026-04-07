/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180026760
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x18000D690 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180014E70 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180070920 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x180087CA0 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x1800883D0 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x1800146B0 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180018280 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18001A5C0 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180024000 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180026110 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180026AE0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180026B30 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180082B48 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 (__fastcall *v4)(CVisual *, _QWORD); // rax
  int updated; // eax
  __int64 (__fastcall *v7)(CVisual *__hidden); // rax
  int v8; // eax
  __int64 (__fastcall *v9)(CVisual *__hidden); // rax
  int v10; // eax
  int v11; // eax

  v1 = *((_DWORD *)this + 20);
  v2 = 0;
  if ( (v1 & 2) != 0 )
  {
    v4 = *(__int64 (__fastcall **)(CVisual *, _QWORD))(*(_QWORD *)this + 72LL);
    if ( (char *)v4 == (char *)CAtlasedRectsVisual::UpdateLayout )
    {
      updated = CAtlasedRectsVisual::UpdateLayout(this);
    }
    else if ( (char *)v4 == (char *)CVisual::UpdateLayout )
    {
      updated = CVisual::UpdateLayout(this, 0);
    }
    else if ( (char *)v4 == (char *)CText::UpdateLayout )
    {
      updated = CText::UpdateLayout(this, 0);
    }
    else if ( (char *)v4 == (char *)CRenderDataVisual::UpdateLayout )
    {
      updated = CRenderDataVisual::UpdateLayout(this, 0);
    }
    else if ( (char *)v4 == (char *)CTopLevelWindow::UpdateLayout )
    {
      updated = CTopLevelWindow::UpdateLayout(this, 0);
    }
    else
    {
      updated = v4(this, 0LL);
    }
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x83u);
      return v2;
    }
    *((_DWORD *)this + 20) &= ~2u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 8) != 0 )
  {
    v9 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 160LL);
    if ( v9 == CVisual::UpdateOffset )
      v10 = CVisual::UpdateOffset(this);
    else
      v10 = v9(this);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8Au);
      return v2;
    }
    *((_DWORD *)this + 20) &= ~8u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x10) != 0 )
  {
    v2 = CVisual::UpdateTransform(this);
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x91u);
      return v2;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v7 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 144LL);
    if ( v7 == CVisual::UpdateOpacity )
      v8 = CVisual::UpdateOpacity(this);
    else
      v8 = v7(this);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x98u);
      return v2;
    }
    *((_DWORD *)this + 20) &= ~0x20u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x40) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 408LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            (char *)this + 196);
    v2 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3D9u);
    if ( (v2 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x9Fu);
    else
      *((_DWORD *)this + 20) &= ~0x40u;
  }
  return v2;
}
