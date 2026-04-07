/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180024270
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180019540 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x18001C240 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18001D5A0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002E2A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180075250 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x180087790 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x180087E70 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x18001BC10 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x18001F620 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180021670 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180023C30 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180024610 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180024660 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x180025A90 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180081EA8 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this)
{
  unsigned int v1; // edi
  __int64 (__fastcall *v3)(CTopLevelWindow *__hidden, bool); // rax
  int updated; // eax
  __int64 (__fastcall *v6)(CVisual *__hidden); // rax
  int v7; // eax
  __int64 (__fastcall *v8)(CVisual *__hidden); // rax
  int v9; // eax
  int v10; // eax

  v1 = 0;
  if ( (*((_BYTE *)this + 80) & 2) != 0 )
  {
    v3 = *(__int64 (__fastcall **)(CTopLevelWindow *__hidden, bool))(*(_QWORD *)this + 72LL);
    if ( (char *)v3 == (char *)CAtlasedRectsVisual::UpdateLayout )
    {
      updated = CAtlasedRectsVisual::UpdateLayout(this);
    }
    else if ( (char *)v3 == (char *)CVisual::UpdateLayout )
    {
      updated = CVisual::UpdateLayout(this, 0);
    }
    else if ( v3 == CText::UpdateLayout )
    {
      updated = CText::UpdateLayout(this, 0);
    }
    else if ( (char *)v3 == (char *)CRenderDataVisual::UpdateLayout )
    {
      updated = CRenderDataVisual::UpdateLayout(this, 0);
    }
    else if ( v3 == CTopLevelWindow::UpdateLayout )
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xB8u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBFu);
      return v1;
    }
    *((_DWORD *)this + 20) &= ~8u;
  }
  if ( (*((_BYTE *)this + 80) & 0x10) != 0 )
  {
    v1 = CVisual::UpdateTransform(this);
    if ( (v1 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xC6u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xCDu);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x53Fu);
    if ( (v1 & 0x80000000) != 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xD4u);
    else
      *((_DWORD *)this + 20) &= ~0x40u;
  }
  return v1;
}
