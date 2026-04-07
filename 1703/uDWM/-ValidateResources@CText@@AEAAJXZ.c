/*
 * XREFs of ?ValidateResources@CText@@AEAAJXZ @ 0x18001BCAC
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x18001BC10 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x18001C240 (-ValidateVisual@CText@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A44C (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18001A520 (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001A700 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18001A770 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x18001ACE8 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18001ADA8 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18001BB68 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateResources(CText *this)
{
  CBaseObject *v1; // rbx
  bool v3; // zf
  signed int v4; // edi
  struct CBitmapSource *v5; // r13
  HDC v6; // r14
  CBaseObject *v7; // r15
  CBaseObject *v8; // r12
  struct CResource **v10; // r12
  CBaseObject *v11; // rcx
  CTextCache *v12; // r15
  __int64 v13; // rbx
  COLORREF v14; // edx
  HDC v15; // rcx
  int v16; // eax
  int v17; // r15d
  int right; // ecx
  int bottom; // eax
  LONG v20; // eax
  LONG v21; // eax
  int v22; // edx
  int v23; // ecx
  HBITMAP Bitmap; // rax
  HBITMAP v25; // rbx
  HBRUSH SolidBrush; // rax
  int v27; // eax
  int v28; // eax
  const struct _MARGINS *v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  void (__fastcall *v35)(CVisual *__hidden, unsigned int); // rax
  int updated; // eax
  UINT TextAlign; // eax
  int v38; // r9d
  signed int LastError; // eax
  signed int v40; // eax
  signed int v41; // eax
  signed int v42; // eax
  signed int v43; // eax
  unsigned int format; // [rsp+28h] [rbp-49h]
  struct CPopInstruction *v45; // [rsp+38h] [rbp-39h] BYREF
  struct CRenderDataInstruction *v46; // [rsp+40h] [rbp-31h] BYREF
  struct CRenderDataInstruction *v47; // [rsp+48h] [rbp-29h] BYREF
  UINT align; // [rsp+50h] [rbp-21h]
  __int64 v49; // [rsp+58h] [rbp-19h]
  struct CBitmapSource *v50; // [rsp+60h] [rbp-11h] BYREF
  HBITMAP v51; // [rsp+68h] [rbp-9h] BYREF
  HBRUSH v52; // [rsp+70h] [rbp-1h] BYREF
  struct IWICBitmap *v53; // [rsp+78h] [rbp+7h] BYREF
  HGDIOBJ h; // [rsp+80h] [rbp+Fh]
  struct tagRECT rc; // [rsp+88h] [rbp+17h] BYREF

  v1 = 0LL;
  v3 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v4 = 0;
  v47 = 0LL;
  v5 = 0LL;
  v45 = 0LL;
  v6 = 0LL;
  v51 = 0LL;
  h = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v50 = 0LL;
  v46 = 0LL;
  align = 0;
  if ( v3 )
  {
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_3;
  }
  CRenderDataVisual::ClearInstructions(this);
  v10 = (struct CResource **)((char *)this + 392);
  v11 = (CBaseObject *)*((_QWORD *)this + 49);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *v10 = 0LL;
  }
  if ( *((_QWORD *)this + 36) )
  {
    v12 = (CTextCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
    if ( v12 )
    {
      v6 = (HDC)*((_QWORD *)v12 + 13);
      if ( v6 )
      {
        v13 = *((_QWORD *)this + 15);
        v14 = *((_DWORD *)this + 103);
        v15 = (HDC)*((_QWORD *)v12 + 13);
        *(_QWORD *)&rc.left = 0LL;
        v49 = v13;
        *(_QWORD *)&rc.right = v13;
        SetBkColor(v15, v14);
        SetTextColor(v6, *((_DWORD *)this + 102));
        if ( (*((_BYTE *)this + 280) & 2) != 0 )
        {
          TextAlign = GetTextAlign(v6);
          align = SetTextAlign(v6, TextAlign | 0x100);
        }
        v16 = CTextCache::SetFont(v12, (const struct tagLOGFONTW *)((char *)this + 296));
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x123u);
LABEL_77:
          v1 = v46;
          v7 = v45;
          v8 = v47;
          goto LABEL_6;
        }
        v17 = *((_BYTE *)this + 280) & 2 | 0x820;
        if ( (*((_BYTE *)this + 280) & 1) != 0 )
        {
          right = *((_DWORD *)this + 100);
          bottom = *((_DWORD *)this + 101);
        }
        else
        {
          SetLastError(0);
          if ( !DrawTextW(v6, *((LPCWSTR *)this + 36), -1, &rc, v17 | 0x400) )
          {
            LastError = GetLastError();
            v4 = LastError;
            if ( LastError > 0 )
              v4 = (unsigned __int16)LastError | 0x80070000;
            format = 308;
            goto LABEL_73;
          }
          right = rc.right;
          bottom = rc.bottom;
          *((_BYTE *)this + 280) |= 1u;
          *((_DWORD *)this + 100) = right;
          *((_DWORD *)this + 101) = bottom;
        }
        if ( right >= (int)v13 )
          right = v13;
        rc.right = right;
        if ( bottom >= SHIDWORD(v49) )
          bottom = HIDWORD(v49);
        rc.bottom = bottom;
        if ( right > 0 && bottom > 0 )
        {
          SetLastError(0);
          if ( DrawTextW(v6, *((LPCWSTR *)this + 36), -1, &rc, v17 | 0x8404) )
          {
            v20 = rc.right;
            if ( rc.right >= (int)v13 )
              v20 = v13;
            rc.right = v20;
            v21 = rc.bottom;
            if ( rc.bottom >= SHIDWORD(v49) )
              v21 = HIDWORD(v49);
            rc.bottom = v21;
            SetLastError(0);
            v22 = rc.bottom - rc.top;
            if ( rc.bottom - rc.top < 0 )
              v22 = 0;
            v23 = rc.right - rc.left;
            if ( rc.right - rc.left < 0 )
              v23 = 0;
            Bitmap = CreateBitmap(v23, v22, 1u, 0x20u, 0LL);
            v51 = Bitmap;
            v25 = Bitmap;
            if ( Bitmap )
            {
              h = SelectObject(v6, Bitmap);
              SetLastError(0);
              SolidBrush = CreateSolidBrush(*((_DWORD *)this + 103));
              v52 = SolidBrush;
              if ( SolidBrush )
              {
                FillRect(v6, &rc, SolidBrush);
                SetLastError(0);
                if ( DrawTextW(v6, *((LPCWSTR *)this + 36), -1, &rc, v17 | 0x8004) )
                {
                  GdiFlush();
                  v27 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 28) + 168LL))(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
                          v25,
                          0LL,
                          2LL,
                          &v53);
                  v4 = v27;
                  if ( v27 < 0 )
                  {
                    format = 356;
                  }
                  else
                  {
                    v27 = CResource::Create(21LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
                    v4 = v27;
                    if ( v27 < 0 )
                    {
                      format = 360;
                    }
                    else
                    {
                      v27 = CPushTransformInstruction::Create(*v10, &v47);
                      v4 = v27;
                      if ( v27 >= 0 )
                      {
                        v8 = v47;
                        v28 = CRenderDataVisual::AddInstruction(this, v47);
                        v4 = v28;
                        if ( v28 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x16Au);
                        }
                        else
                        {
                          v30 = CBitmapSource::Create(
                                  v53,
                                  v29,
                                  *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                                  &v50);
                          v4 = v30;
                          if ( v30 < 0 )
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x16Cu);
                            v5 = v50;
                          }
                          else
                          {
                            v5 = v50;
                            v31 = CDrawImageInstruction::Create(v50, &rc, &v46);
                            v4 = v31;
                            if ( v31 >= 0 )
                            {
                              v1 = v46;
                              v32 = CRenderDataVisual::AddInstruction(this, v46);
                              v4 = v32;
                              if ( v32 < 0 )
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x16Eu);
                              }
                              else
                              {
                                v33 = CPopInstruction::Create(&v45);
                                v4 = v33;
                                if ( v33 >= 0 )
                                {
                                  v7 = v45;
                                  v34 = CRenderDataVisual::AddInstruction(this, v45);
                                  v4 = v34;
                                  if ( v34 < 0 )
                                  {
                                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x171u);
                                    goto LABEL_6;
                                  }
                                  v35 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
                                  if ( v35 == CVisual::SetDirtyFlags )
                                    CVisual::SetDirtyFlags(this, 0x8000u);
                                  else
                                    v35(this, 0x8000u);
                                  goto LABEL_61;
                                }
                                MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x170u);
                              }
LABEL_101:
                              v7 = v45;
                              goto LABEL_6;
                            }
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x16Du);
                          }
                        }
                        v1 = v46;
                        goto LABEL_101;
                      }
                      format = 361;
                    }
                  }
                  v38 = v27;
                  goto LABEL_76;
                }
                v43 = GetLastError();
                v4 = v43;
                if ( v43 > 0 )
                  v4 = (unsigned __int16)v43 | 0x80070000;
                format = 352;
              }
              else
              {
                v42 = GetLastError();
                v4 = v42;
                if ( v42 > 0 )
                  v4 = (unsigned __int16)v42 | 0x80070000;
                format = 344;
              }
            }
            else
            {
              v41 = GetLastError();
              v4 = v41;
              if ( v41 > 0 )
                v4 = (unsigned __int16)v41 | 0x80070000;
              format = 338;
            }
          }
          else
          {
            v40 = GetLastError();
            v4 = v40;
            if ( v40 > 0 )
              v4 = (unsigned __int16)v40 | 0x80070000;
            format = 330;
          }
LABEL_73:
          if ( v4 >= 0 )
            v4 = -2003304445;
          v38 = v4;
LABEL_76:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, format);
          goto LABEL_77;
        }
      }
    }
  }
  v1 = v46;
  v7 = v45;
  v8 = v47;
LABEL_61:
  *((_DWORD *)this + 20) &= ~0x1000u;
LABEL_3:
  if ( (*((_DWORD *)this + 20) & 0x8000) != 0 )
  {
    updated = CText::UpdateAlignmentTransform(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x17Du);
      goto LABEL_6;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  if ( (*((_BYTE *)this + 84) & 1) != 0 )
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
LABEL_6:
  if ( v6 )
  {
    if ( (*((_BYTE *)this + 280) & 2) != 0 )
      SetTextAlign(v6, align);
    if ( h )
      SelectObject(v6, h);
  }
  if ( v51 )
    ReleaseGDIObject<HRGN__ *>((void **)&v51);
  if ( v52 )
    ReleaseGDIObject<HRGN__ *>((void **)&v52);
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v53 )
    ((void (__fastcall *)(struct IWICBitmap *))v53->lpVtbl->Release)(v53);
  if ( v1 )
    CBaseObject::Release(v1);
  return (unsigned int)v4;
}
