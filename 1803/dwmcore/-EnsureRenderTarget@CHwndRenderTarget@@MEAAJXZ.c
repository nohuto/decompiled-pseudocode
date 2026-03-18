/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180060830 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x18001F0B8 (-IsStereoEnabled@CDisplayManager@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002148C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18005FC6C (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x1800602B8 (-IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800627C0 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180062964 (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180062988 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180079B3C (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007B564 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800C8F28 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180148718 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureRenderTarget(CHwndRenderTarget *this)
{
  __int64 *v1; // r15
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  unsigned int v9; // ebx
  const struct tagRECT *v10; // rsi
  unsigned int *v11; // rdi
  enum DXGI_MODE_ROTATION v12; // eax
  CDisplayManager *v13; // rcx
  int v14; // eax
  CoRenderHost *v15; // rdi
  int updated; // eax
  int v17; // eax
  char v18; // al
  __int64 v19; // rcx
  const struct tagRECT *DisplayRect; // rdi
  unsigned int *ClipBox; // rbx
  enum DXGI_MODE_ROTATION Rotation; // eax
  struct CD3DSurface *v23; // rax
  int v24; // eax
  _BYTE v25[4]; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+34h] [rbp-34h]
  int v27; // [rsp+38h] [rbp-30h]

  v1 = (__int64 *)((char *)this + 176);
  v3 = *((_QWORD *)this + 22);
  v4 = 0;
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) )
  {
    if ( !*((_BYTE *)this + 858) )
      goto LABEL_4;
    DisplayRect = (const struct tagRECT *)CHwndRenderTarget::GetDisplayRect(this);
    ClipBox = (unsigned int *)CHwndRenderTarget::GetClipBox(this);
    Rotation = CHwndRenderTarget::GetRotation(this);
    CHwndRenderTarget::CalculateMonitorTransform(this, Rotation, ClipBox, DisplayRect);
    *((_BYTE *)this + 858) = 0;
  }
  else
  {
    v9 = *((_DWORD *)this + 112);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, "4", 0LL);
    if ( (v9 & 0x10) != 0 )
    {
      v10 = (const struct tagRECT *)CHwndRenderTarget::GetDisplayRect(this);
      v11 = (unsigned int *)CHwndRenderTarget::GetClipBox(this);
      v12 = CHwndRenderTarget::GetRotation(this);
      CHwndRenderTarget::CalculateMonitorTransform(this, v12, v11, v10);
      if ( *(_BYTE *)(*((_QWORD *)this + 21) + 326LL) )
        v9 |= 0x20000000u;
      if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 216LL))(this) )
      {
        v9 |= 0x4000u;
      }
      else if ( CDisplayManager::IsStereoEnabled(v13)
             && CHwndRenderTarget::IsStereoSupported(this)
             && *(_DWORD *)(*((_QWORD *)this + 2) + 284LL) )
      {
        v9 |= 0x2000u;
      }
    }
    v14 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, _QWORD))(*(_QWORD *)this + 224LL))(this, v9);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v14, 0x8EFu);
LABEL_40:
      if ( v4 < 0 )
      {
        ReleaseInterface<IRenderTargetBitmap>(v1);
        ReleaseInterface<ID2D1Geometry>((__int64 *)this + 23);
        (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 248LL))(this);
      }
      return (unsigned int)v4;
    }
    v15 = *(CoRenderHost **)(*((_QWORD *)this + 2) + 560LL);
    if ( v15 )
    {
      v23 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 112LL))(*v1);
      v24 = CoRenderHost::SetDeviceFromSurface(v15, v23);
      v4 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v24, 0x8F8u);
        goto LABEL_40;
      }
    }
    if ( (v9 & 0x2000) != 0 )
      (**(void (__fastcall ***)(__int64, GUID *, char *))*v1)(
        *v1,
        &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
        (char *)this + 184);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Stop, 0LL);
    *((_BYTE *)this + 849) = 1;
  }
  *((_BYTE *)this + 161) = 1;
LABEL_4:
  v5 = *((_QWORD *)this + 105);
  if ( !v5 )
    goto LABEL_40;
  v6 = *v1;
  v7 = (_QWORD *)(v5 + 16);
  v4 = 0;
  if ( *(_QWORD *)(v5 + 16) != *v1 )
  {
    if ( *v7 )
      COverlayContext::Reset(*((COverlayContext **)this + 105));
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(v7, v6);
    if ( *v7 )
    {
      updated = COverlayContext::UpdateMPOCaps((COverlayContext *)v5, 1, 0LL);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x8Fu);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v7 + 328LL))(*v7, v5 + 40);
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v7 + 136LL))(*v7, v5 + 80, 0LL);
        v4 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x95u);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 440LL))(*v7);
          v19 = *v7;
          *(_BYTE *)(v5 + 1185) = v18;
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 24LL))(v19, v25);
          *(_DWORD *)(v5 + 100) = v27;
          *(_DWORD *)(v5 + 104) = v26;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v4, 0x932u);
    goto LABEL_40;
  }
  return (unsigned int)v4;
}
