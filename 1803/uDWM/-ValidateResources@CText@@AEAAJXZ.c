/*
 * XREFs of ?ValidateResources@CText@@AEAAJXZ @ 0x1800148B0
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x1800146B0 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180014E70 (-ValidateVisual@CText@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x180014608 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800339AC (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180033C78 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x1800355B0 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800372B8 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x180037BC0 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180038328 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateResources(CText *this)
{
  int v1; // eax
  CBaseObject *v2; // rsi
  HBITMAP v3; // rbx
  signed int v5; // r14d
  CBaseObject *v6; // r13
  struct CBitmapSource *v7; // r12
  CBaseObject *v8; // r15
  HDC v9; // rax
  CBaseObject *v11; // rcx
  CTextCache *v12; // rax
  HDC v13; // rcx
  __int64 v14; // rbx
  COLORREF v15; // edx
  int v16; // eax
  char v17; // al
  int bottom; // ecx
  int right; // eax
  int v20; // edx
  int v21; // ecx
  HBITMAP Bitmap; // rax
  HBRUSH SolidBrush; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  const struct _MARGINS *v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  void (__fastcall *v34)(CVisual *__hidden, unsigned int); // rax
  int updated; // eax
  UINT TextAlign; // eax
  signed int LastError; // eax
  signed int v38; // eax
  signed int v39; // eax
  int v40; // r9d
  signed int v41; // eax
  signed int v42; // eax
  unsigned int format; // [rsp+20h] [rbp-59h]
  unsigned int formata; // [rsp+20h] [rbp-59h]
  HBITMAP v45; // [rsp+30h] [rbp-49h] BYREF
  HDC hdc; // [rsp+38h] [rbp-41h]
  CTextCache *v47; // [rsp+40h] [rbp-39h]
  UINT align; // [rsp+48h] [rbp-31h]
  struct CRenderDataInstruction *v49; // [rsp+50h] [rbp-29h] BYREF
  struct CBitmapSource *v50; // [rsp+58h] [rbp-21h] BYREF
  struct CRenderDataInstruction *v51; // [rsp+60h] [rbp-19h] BYREF
  struct CPopInstruction *v52; // [rsp+68h] [rbp-11h] BYREF
  HBRUSH v53; // [rsp+70h] [rbp-9h] BYREF
  struct IWICBitmap *v54; // [rsp+78h] [rbp-1h] BYREF
  __int64 v55; // [rsp+80h] [rbp+7h]
  HGDIOBJ h; // [rsp+88h] [rbp+Fh]
  struct tagRECT rc; // [rsp+90h] [rbp+17h] BYREF

  v1 = *((_DWORD *)this + 20);
  v2 = 0LL;
  v49 = 0LL;
  v3 = 0LL;
  v45 = 0LL;
  v52 = 0LL;
  v5 = 0;
  h = 0LL;
  v6 = 0LL;
  v53 = 0LL;
  v7 = 0LL;
  v54 = 0LL;
  v8 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  hdc = 0LL;
  align = 0;
  if ( (v1 & 0x1000) == 0 )
    goto LABEL_2;
  CRenderDataVisual::ClearInstructions(this);
  v11 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 49) = 0LL;
  }
  if ( !*((_QWORD *)this + 36)
    || (v12 = (CTextCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31), (v47 = v12) == 0LL)
    || (v13 = (HDC)*((_QWORD *)v12 + 13), (hdc = v13) == 0LL) )
  {
LABEL_60:
    *((_DWORD *)this + 20) &= ~0x1000u;
    v1 = *((_DWORD *)this + 20);
LABEL_2:
    if ( (v1 & 0x8000) == 0 )
      goto LABEL_3;
    updated = CText::UpdateAlignmentTransform(this);
    v5 = updated;
    if ( updated >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x8000u;
LABEL_3:
      if ( (*((_BYTE *)this + 84) & 1) != 0 )
        (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
      goto LABEL_5;
    }
    formata = 381;
    v40 = updated;
LABEL_88:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, formata);
    goto LABEL_5;
  }
  v14 = *((_QWORD *)this + 15);
  v15 = *((_DWORD *)this + 103);
  v55 = v14;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = v14;
  SetBkColor(v13, v15);
  SetTextColor(hdc, *((_DWORD *)this + 102));
  if ( (*((_BYTE *)this + 280) & 2) != 0 )
  {
    TextAlign = GetTextAlign(hdc);
    align = SetTextAlign(hdc, TextAlign | 0x100);
  }
  v16 = CTextCache::SetFont(v47, (const struct tagLOGFONTW *)((char *)this + 296));
  v5 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x123u);
    v3 = v45;
    goto LABEL_5;
  }
  v17 = *((_BYTE *)this + 280);
  LODWORD(v47) = v17 & 2 | 0x820;
  if ( (v17 & 1) != 0 )
  {
    bottom = *((_DWORD *)this + 101);
    right = *((_DWORD *)this + 100);
    rc.bottom = bottom;
  }
  else
  {
    SetLastError(0);
    if ( !DrawTextW(hdc, *((LPCWSTR *)this + 36), -1, &rc, (unsigned int)v47 | 0x400) )
    {
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
      format = 308;
      goto LABEL_75;
    }
    right = rc.right;
    bottom = rc.bottom;
    *((_BYTE *)this + 280) |= 1u;
    *((_DWORD *)this + 100) = right;
    *((_DWORD *)this + 101) = bottom;
  }
  if ( right >= (int)v14 )
    right = v14;
  rc.right = right;
  if ( bottom >= SHIDWORD(v55) )
  {
    bottom = HIDWORD(v55);
    rc.bottom = HIDWORD(v55);
  }
  if ( right <= 0 || bottom <= 0 )
  {
    v3 = v45;
    goto LABEL_60;
  }
  SetLastError(0);
  if ( DrawTextW(hdc, *((LPCWSTR *)this + 36), -1, &rc, (unsigned int)v47 | 0x8404) )
  {
    if ( rc.right >= (int)v14 )
      rc.right = v14;
    if ( rc.bottom >= SHIDWORD(v55) )
      rc.bottom = HIDWORD(v55);
    SetLastError(0);
    v20 = rc.bottom - rc.top;
    if ( rc.bottom - rc.top < 0 )
      v20 = 0;
    v21 = rc.right - rc.left;
    if ( rc.right - rc.left < 0 )
      v21 = 0;
    Bitmap = CreateBitmap(v21, v20, 1u, 0x20u, 0LL);
    v45 = Bitmap;
    v3 = Bitmap;
    if ( Bitmap )
    {
      h = SelectObject(hdc, Bitmap);
      SetLastError(0);
      SolidBrush = CreateSolidBrush(*((_DWORD *)this + 103));
      v53 = SolidBrush;
      if ( SolidBrush )
      {
        FillRect(hdc, &rc, SolidBrush);
        SetLastError(0);
        if ( DrawTextW(hdc, *((LPCWSTR *)this + 36), -1, &rc, (unsigned int)v47 | 0x8004) )
        {
          GdiFlush();
          v24 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 34)
                                                                                                  + 168LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34),
                  v3,
                  0LL,
                  2LL,
                  &v54);
          v5 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x164u);
            goto LABEL_5;
          }
          v25 = CResource::Create(0x15u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 49);
          v5 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x168u);
            goto LABEL_5;
          }
          v26 = CPushTransformInstruction::Create(*((struct CResource **)this + 49), &v49);
          v5 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x169u);
            v2 = v49;
            goto LABEL_5;
          }
          v2 = v49;
          v27 = CRenderDataVisual::AddInstruction(this, v49);
          v5 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x16Au);
            goto LABEL_5;
          }
          v29 = CBitmapSource::Create(v54, v28, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v50);
          v5 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x16Cu);
            v7 = v50;
            goto LABEL_5;
          }
          v7 = v50;
          v30 = CDrawImageInstruction::Create(v50, &rc, &v51);
          v5 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x16Du);
            v8 = v51;
            goto LABEL_5;
          }
          v8 = v51;
          v31 = CRenderDataVisual::AddInstruction(this, v51);
          v5 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x16Eu);
            goto LABEL_5;
          }
          v32 = CPopInstruction::Create(&v52);
          v5 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x170u);
            v6 = v52;
            goto LABEL_5;
          }
          v6 = v52;
          v33 = CRenderDataVisual::AddInstruction(this, v52);
          v5 = v33;
          if ( v33 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x171u);
            goto LABEL_5;
          }
          v34 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
          if ( v34 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(this, 0x8000u);
          else
            v34(this, 0x8000u);
          goto LABEL_60;
        }
        v42 = GetLastError();
        v5 = v42;
        if ( v42 > 0 )
          v5 = (unsigned __int16)v42 | 0x80070000;
        formata = 352;
      }
      else
      {
        v41 = GetLastError();
        v5 = v41;
        if ( v41 > 0 )
          v5 = (unsigned __int16)v41 | 0x80070000;
        formata = 344;
      }
    }
    else
    {
      v39 = GetLastError();
      v5 = v39;
      if ( v39 > 0 )
        v5 = (unsigned __int16)v39 | 0x80070000;
      formata = 338;
    }
    if ( v5 >= 0 )
      v5 = -2003304445;
    v40 = v5;
    goto LABEL_88;
  }
  v38 = GetLastError();
  v5 = v38;
  if ( v38 > 0 )
    v5 = (unsigned __int16)v38 | 0x80070000;
  format = 330;
LABEL_75:
  if ( v5 >= 0 )
    v5 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, format);
  v3 = v45;
LABEL_5:
  v9 = hdc;
  if ( hdc )
  {
    if ( (*((_BYTE *)this + 280) & 2) != 0 )
    {
      SetTextAlign(hdc, align);
      v9 = hdc;
    }
    if ( h )
      SelectObject(v9, h);
  }
  if ( v3 )
    ReleaseGDIObject<HRGN__ *>(&v45);
  if ( v53 )
    ReleaseGDIObject<HRGN__ *>(&v53);
  if ( v2 )
    CBaseObject::Release(v2);
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v54 )
    ((void (__fastcall *)(struct IWICBitmap *))v54->lpVtbl->Release)(v54);
  if ( v8 )
    CBaseObject::Release(v8);
  return (unsigned int)v5;
}
