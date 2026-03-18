/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180018130 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x1800108FC (-IsStereoEnabled@CDisplayManager@@QEBA_NXZ.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800176C8 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180019BF0 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180019C6C (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180019C90 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180067510 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800C0930 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x1800C4BA0 (-IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180125918 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureRenderTarget(COverlayContext **this)
{
  int v1; // esi
  _QWORD *v2; // r15
  unsigned int v4; // ebx
  const struct tagRECT *v5; // rsi
  unsigned int *v6; // rdi
  enum DXGI_MODE_ROTATION v7; // eax
  CDisplayManager *v8; // rcx
  int v9; // eax
  CoRenderHost *v10; // rdi
  struct CD3DSurface *v11; // rax
  int v12; // r9d
  const struct tagRECT *DisplayRect; // rdi
  unsigned int *ClipBox; // rbx
  enum DXGI_MODE_ROTATION Rotation; // eax
  COverlayContext *v16; // rbx
  __int64 v17; // rbp
  _QWORD *v18; // rdi
  int updated; // eax
  int v20; // eax
  char v21; // al
  __int64 v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-48h]
  _BYTE v25[16]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  v2 = this + 15;
  if ( this[15] )
  {
    if ( *((_BYTE *)this + 814) )
    {
      DisplayRect = (const struct tagRECT *)CHwndRenderTarget::GetDisplayRect(this);
      ClipBox = (unsigned int *)CHwndRenderTarget::GetClipBox(this);
      Rotation = CHwndRenderTarget::GetRotation((CHwndRenderTarget *)this);
      CHwndRenderTarget::CalculateMonitorTransform((CHwndRenderTarget *)this, Rotation, ClipBox, DisplayRect);
      *((_BYTE *)this + 802) = 1;
      *((_BYTE *)this + 814) = 0;
    }
  }
  else
  {
    v4 = *((_DWORD *)this + 98);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Start, 0LL);
    if ( (v4 & 0x10) != 0 )
    {
      v5 = (const struct tagRECT *)CHwndRenderTarget::GetDisplayRect(this);
      v6 = (unsigned int *)CHwndRenderTarget::GetClipBox(this);
      v7 = CHwndRenderTarget::GetRotation((CHwndRenderTarget *)this);
      CHwndRenderTarget::CalculateMonitorTransform((CHwndRenderTarget *)this, v7, v6, v5);
      if ( *((_BYTE *)this[14] + 306) )
        v4 |= 0x20000000u;
      if ( (*((unsigned __int8 (__fastcall **)(COverlayContext **))*this + 24))(this) )
      {
        v4 |= 0x4000u;
      }
      else if ( CDisplayManager::IsStereoEnabled(v8)
             && CHwndRenderTarget::IsStereoSupported((CHwndRenderTarget *)this)
             && *((_DWORD *)this[2] + 65) )
      {
        v4 |= 0x2000u;
      }
    }
    v9 = (*((__int64 (__fastcall **)(COverlayContext **, _QWORD))*this + 37))(this, v4);
    v1 = v9;
    if ( v9 < 0 )
    {
      v24 = 2363;
      goto LABEL_17;
    }
    v10 = (CoRenderHost *)*((_QWORD *)this[2] + 67);
    if ( v10 )
    {
      v11 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 104LL))(*v2);
      v9 = CoRenderHost::SetDeviceFromSurface(v10, v11);
      v1 = v9;
      if ( v9 < 0 )
      {
        v24 = 2372;
LABEL_17:
        v12 = v9;
LABEL_38:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v24);
LABEL_39:
        if ( v1 < 0 )
        {
          (*((void (__fastcall **)(COverlayContext **))*this + 40))(this);
          ReleaseInterface<ID2D1PrivateCompositorBuffer>(this + 16);
          ReleaseInterface<ID2D1Geometry>(v2);
        }
        return (unsigned int)v1;
      }
    }
    if ( (v4 & 0x2000) != 0 )
      (**(void (__fastcall ***)(_QWORD, GUID *, char *))*v2)(
        *v2,
        &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
        (char *)this + 128);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Stop, 0LL);
    *((_WORD *)this + 401) = 257;
  }
  v16 = this[99];
  if ( !v16 )
    goto LABEL_39;
  v17 = *v2;
  v18 = (_QWORD *)((char *)v16 + 16);
  v1 = 0;
  if ( *((_QWORD *)v16 + 2) != *v2 )
  {
    if ( *v18 )
      COverlayContext::Reset(this[99]);
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(v18, v17);
    if ( *v18 )
    {
      updated = COverlayContext::UpdateMPOCaps(v16, 1, 0LL);
      v1 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x8Eu);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 280LL))(*v18, (__int64)v16 + 40);
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v18 + 88LL))(
                *v18,
                (__int64)v16 + 80,
                0LL);
        v1 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x94u);
        }
        else
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 392LL))(*v18);
          v22 = *v18;
          *((_BYTE *)v16 + 1173) = v21;
          *((_DWORD *)v16 + 25) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 24LL))(
                                                v22,
                                                v25)
                                            + 4);
        }
      }
    }
  }
  if ( v1 < 0 )
  {
    v24 = 2430;
    v12 = v1;
    goto LABEL_38;
  }
  return (unsigned int)v1;
}
