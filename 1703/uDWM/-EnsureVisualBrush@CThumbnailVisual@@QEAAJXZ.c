/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180038EF0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180039390 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180015B10 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A44C (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001A700 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18001A770 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18001ADA8 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180038570 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180038590 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180038DC0 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x1800399AC (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18007FDC0 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180081C2C (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x18009EA50 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CThumbnailVisual *this)
{
  CBaseObject *v2; // rsi
  CBaseObject *v3; // r15
  CBaseObject *v4; // r14
  bool v5; // zf
  CBaseObject *v6; // r13
  HDC CompatibleDC; // r12
  int v8; // eax
  __int64 v9; // rdx
  signed int v10; // ebx
  CRenderDataVisual *v11; // rcx
  _QWORD *v12; // r10
  __int64 v13; // rcx
  struct CResource **v14; // rsi
  CThumbnailVisual *v15; // rcx
  int v16; // eax
  int v17; // eax
  CBaseObject *v18; // rsi
  CBaseObject *v19; // rsi
  HBITMAP v20; // r13
  struct CBitmapSource *v21; // rsi
  __int64 v23; // rcx
  int Brush; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  char IsImmersiveIconic; // bl
  COLORREF v29; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  int v32; // r9d
  HBRUSH SolidBrush; // rax
  int v34; // eax
  const struct _MARGINS *v35; // rdx
  int v36; // eax
  struct CResource **v37; // rsi
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  struct CResource **v45; // rsi
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  CThumbnailAnimatedVisual *v55; // rcx
  int v56; // eax
  int v57; // eax
  CBaseObject *v58; // rcx
  unsigned int lpBits_8; // [rsp+28h] [rbp-59h]
  char *v60; // [rsp+30h] [rbp-51h]
  char *v61; // [rsp+38h] [rbp-49h]
  char *v62; // [rsp+40h] [rbp-41h]
  struct CBitmapSource *v63; // [rsp+48h] [rbp-39h] BYREF
  HBITMAP v64; // [rsp+50h] [rbp-31h] BYREF
  struct CPopInstruction *v65; // [rsp+58h] [rbp-29h] BYREF
  struct CPopInstruction *v66; // [rsp+60h] [rbp-21h] BYREF
  struct CRenderDataInstruction *v67; // [rsp+68h] [rbp-19h] BYREF
  struct CRenderDataInstruction *v68; // [rsp+70h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v69; // [rsp+78h] [rbp-9h] BYREF
  struct IWICBitmap *v70; // [rsp+80h] [rbp-1h] BYREF
  struct CRenderDataInstruction *v71; // [rsp+88h] [rbp+7h] BYREF
  HBRUSH v72; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v2 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v3 = 0LL;
  v69 = 0LL;
  v4 = 0LL;
  v68 = 0LL;
  v5 = *((_BYTE *)this + 472) == 0;
  v6 = 0LL;
  v66 = 0LL;
  CompatibleDC = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  v72 = 0LL;
  v64 = 0LL;
  h = 0LL;
  v70 = 0LL;
  v63 = 0LL;
  v71 = 0LL;
  if ( v5 )
  {
    v57 = CRenderDataVisual::ClearInstructions(this);
    v10 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x2E7u);
      goto LABEL_30;
    }
    v58 = (CBaseObject *)*((_QWORD *)this + 47);
    if ( !v58 )
      goto LABEL_30;
    CBaseObject::Release(v58);
    *((_QWORD *)this + 47) = 0LL;
LABEL_16:
    if ( v2 )
    {
      CBaseObject::Release(v2);
      goto LABEL_18;
    }
LABEL_30:
    v20 = v64;
LABEL_31:
    v21 = v63;
    goto LABEL_32;
  }
  v8 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x258u);
    goto LABEL_30;
  }
  if ( *((_QWORD *)this + 48) )
  {
    if ( !(unsigned __int8)CThumbnailVisual::_HasBorder(this) )
      goto LABEL_5;
    v27 = CRenderDataVisual::ClearInstructions(v11);
    v10 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x277u);
      goto LABEL_30;
    }
  }
  else
  {
    v62 = (char *)this + 384;
    v61 = (char *)this + 432;
    v60 = (char *)this + 408;
    v23 = *((_QWORD *)this + 47);
    *((_BYTE *)this + 474) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(v23, v9, (char *)this + 392, (char *)this + 400);
    v10 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Brush, 0x267u);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x4000);
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    CThumbnailVisual::SetDirtyFlags(this, 0x40000);
    v25 = CRenderDataVisual::ClearInstructions(this);
    v10 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x271u);
      goto LABEL_30;
    }
  }
  v12 = (_QWORD *)((char *)this + 384);
LABEL_5:
  if ( *((_DWORD *)this + 68) )
    goto LABEL_30;
  if ( !*((_QWORD *)this + 54) || (v13 = *((_QWORD *)this + 46)) == 0 || (*(_DWORD *)(v13 + 36) & 0x4000000) == 0 )
  {
    if ( !*v12 )
      goto LABEL_30;
    v14 = (struct CResource **)((char *)this + 416);
    if ( !*((_QWORD *)this + 52) )
    {
      v26 = CResource::Create(0x19u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 52);
      v10 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x2CAu);
        goto LABEL_30;
      }
    }
    if ( (unsigned __int8)CThumbnailVisual::_HasBorder(this) )
    {
      v54 = CThumbnailVisual::_AddBorderInstructions(v15);
      v10 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x2CFu);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( !(unsigned __int8)CThumbnailVisual::_HasBorder(this) )
      {
        v56 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v55, *v14, 0, 1.0);
        v10 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x2D8u);
          goto LABEL_30;
        }
      }
    }
    v16 = CDrawGeometryInstruction::Create(
            *((struct CResource **)this + 48),
            *v14,
            (struct CDrawGeometryInstruction **)&rc);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2E0u);
      v2 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v2 = *(CBaseObject **)&rc.left;
      v17 = CRenderDataVisual::AddInstruction(this, *(struct CRenderDataInstruction **)&rc.left);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x2E2u);
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
    goto LABEL_100;
  v29 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 168LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v64 = Bitmap;
  v20 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    lpBits_8 = 658;
    if ( v10 >= 0 )
      v10 = -2003304445;
    goto LABEL_65;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v29);
  v72 = SolidBrush;
  if ( !SolidBrush )
  {
    v10 = -2147024890;
    lpBits_8 = 661;
LABEL_65:
    v32 = v10;
LABEL_68:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, lpBits_8);
    goto LABEL_31;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  v34 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **, char *, char *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 28) + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
          v20,
          0LL,
          2LL,
          &v70,
          v60,
          v61,
          v62);
  v10 = v34;
  if ( v34 < 0 )
  {
    lpBits_8 = 665;
LABEL_67:
    v32 = v34;
    goto LABEL_68;
  }
  v34 = CBitmapSource::Create(v70, v35, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v63);
  v10 = v34;
  if ( v34 < 0 )
  {
    lpBits_8 = 667;
    goto LABEL_67;
  }
  v21 = v63;
  v36 = CDrawBitmapInstruction::Create(*((struct CResource **)v63 + 2), &v71);
  v10 = v36;
  if ( v36 >= 0 )
  {
    v37 = (struct CResource **)((char *)this + 456);
    if ( !*((_QWORD *)this + 57) )
    {
      v38 = CResource::Create(0x1Fu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 57);
      v10 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x2A0u);
        goto LABEL_31;
      }
    }
    v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*v37 + 2) + 1136LL))(
            *((_QWORD *)*v37 + 2),
            *((unsigned int *)*v37 + 6));
    v10 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x2A7u);
      goto LABEL_31;
    }
    v40 = CPushTransformInstruction::Create(*v37, &v67);
    v10 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x2A8u);
      v6 = v67;
LABEL_25:
      v19 = v65;
LABEL_26:
      if ( v6 )
        CBaseObject::Release(v6);
      if ( v19 )
        CBaseObject::Release(v19);
      goto LABEL_30;
    }
    v6 = v67;
    v41 = CRenderDataVisual::AddInstruction(this, v67);
    v10 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x2A9u);
      goto LABEL_25;
    }
    v42 = CRenderDataVisual::AddInstruction(this, v71);
    v10 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x2AAu);
      goto LABEL_25;
    }
    v43 = CPopInstruction::Create(&v65);
    v10 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x2ABu);
      goto LABEL_25;
    }
    v19 = v65;
    v44 = CRenderDataVisual::AddInstruction(this, v65);
    v10 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x2ACu);
      goto LABEL_26;
    }
    v45 = (struct CResource **)((char *)this + 448);
    if ( !*((_QWORD *)this + 56) )
    {
      v46 = CResource::Create(0x24u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 56);
      v10 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x2B1u);
        goto LABEL_25;
      }
    }
    v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*v45 + 2) + 1128LL))(
            *((_QWORD *)*v45 + 2),
            *((unsigned int *)*v45 + 6));
    v10 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x2B6u);
      goto LABEL_25;
    }
    v48 = CPushTransformInstruction::Create(*v45, &v68);
    v10 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x2B7u);
      v4 = v68;
LABEL_98:
      v18 = v66;
LABEL_21:
      if ( v4 )
        CBaseObject::Release(v4);
      if ( v18 )
        CBaseObject::Release(v18);
      goto LABEL_25;
    }
    v4 = v68;
    v49 = CRenderDataVisual::AddInstruction(this, v68);
    v10 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x2B8u);
      goto LABEL_98;
    }
LABEL_100:
    v50 = CDrawBitmapInstruction::Create(*((struct CResource **)this + 54), &v69);
    v10 = v50;
    if ( v50 >= 0 )
    {
      v3 = v69;
      v51 = CRenderDataVisual::AddInstruction(this, v69);
      v10 = v51;
      if ( v51 >= 0 )
      {
        if ( v4 )
        {
          v52 = CPopInstruction::Create(&v66);
          v10 = v52;
          if ( v52 >= 0 )
          {
            v18 = v66;
            v53 = CRenderDataVisual::AddInstruction(this, v66);
            v10 = v53;
            if ( v53 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x2C1u);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x2C0u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x2BCu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x2BBu);
      v3 = v69;
    }
LABEL_18:
    v18 = v66;
LABEL_19:
    if ( v3 )
      CBaseObject::Release(v3);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x29Cu);
LABEL_32:
  if ( v70 )
    ((void (__fastcall *)(struct IWICBitmap *))v70->lpVtbl->Release)(v70);
  if ( v21 )
    CBaseObject::Release(v21);
  if ( v71 )
    CBaseObject::Release(v71);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v20 )
    ReleaseGDIObject<HRGN__ *>((void **)&v64);
  if ( v72 )
    ReleaseGDIObject<HRGN__ *>((void **)&v72);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v10;
}
