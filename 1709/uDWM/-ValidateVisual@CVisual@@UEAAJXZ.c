/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180018C40
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x1800136A0 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180014920 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180069C00 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x18007EBA0 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x18007F2D0 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x180014320 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180015580 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800185E0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180018FF0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180019040 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18001A780 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180023C40 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180079978 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this)
{
  unsigned int v1; // edi
  __int64 (__fastcall *v3)(CRenderDataVisual *, char); // rax
  int updated; // eax
  __int64 (__fastcall *v6)(CVisual *__hidden); // rax
  int v7; // eax
  __int64 (__fastcall *v8)(CVisual *__hidden); // rax
  int v9; // eax
  int v10; // eax

  v1 = 0;
  if ( (*((_BYTE *)this + 80) & 2) != 0 )
  {
    v3 = *(__int64 (__fastcall **)(CRenderDataVisual *, char))(*(_QWORD *)this + 72LL);
    if ( (char *)v3 == (char *)CAtlasedRectsVisual::UpdateLayout )
    {
      updated = CAtlasedRectsVisual::UpdateLayout(this, 0);
    }
    else if ( v3 == CVisual::UpdateLayout )
    {
      updated = CVisual::UpdateLayout(this, 0);
    }
    else if ( (char *)v3 == (char *)CText::UpdateLayout )
    {
      updated = CText::UpdateLayout(this, 0);
    }
    else if ( v3 == CRenderDataVisual::UpdateLayout )
    {
      updated = CRenderDataVisual::UpdateLayout(this, 0);
    }
    else if ( (char *)v3 == (char *)CTopLevelWindow::UpdateLayout )
    {
      updated = CTopLevelWindow::UpdateLayout(this, 0);
    }
    else
    {
      updated = v3(this, 0);
    }
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xB8u);
      return v1;
    }
    *((_DWORD *)this + 20) &= ~2u;
  }
  if ( (*((_BYTE *)this + 80) & 8) != 0 )
  {
    v8 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 160LL);
    if ( v8 == CVisual::UpdateOffset )
      v9 = CVisual::UpdateOffset(this);
    else
      v9 = v8(this);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xBFu);
      return v1;
    }
    *((_DWORD *)this + 20) &= ~8u;
  }
  if ( (*((_BYTE *)this + 80) & 0x10) != 0 )
  {
    v1 = CVisual::UpdateTransform(this);
    if ( (v1 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xC6u);
      return v1;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
  }
  if ( (*((_BYTE *)this + 80) & 0x20) != 0 )
  {
    v6 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 144LL);
    if ( v6 == CVisual::UpdateOpacity )
      v7 = CVisual::UpdateOpacity(this);
    else
      v7 = v6(this);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xCDu);
      return v1;
    }
    *((_DWORD *)this + 20) &= ~0x20u;
  }
  if ( (*((_BYTE *)this + 80) & 0x40) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 392LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            (char *)this + 196);
    v1 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x553u);
    if ( (v1 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xD4u);
    else
      *((_DWORD *)this + 20) &= ~0x40u;
  }
  return v1;
}
