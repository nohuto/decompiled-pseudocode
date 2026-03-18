/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18006C500
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x18006E120 (-PreRender@CHwndRenderTarget@@QEAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004D094 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18006C0D4 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18006C1F0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@AEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18006EDD8 (-GetDisplayRect@CHwndRenderTarget@@AEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x18007EB54 (-IsStereoEnabled@CDisplayManager@@QEBA_NXZ.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C9EE4 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800CA158 (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800CD450 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x18013B408 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureRenderTarget(CHwndRenderTarget *this, __int64 a2, __int64 a3)
{
  int v3; // ebp
  CDisplaySet *v5; // r9
  __int64 v6; // r10
  unsigned int v7; // ecx
  __int64 v8; // rcx
  struct CDisplay *v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned int *v14; // rbp
  enum DXGI_MODE_ROTATION v15; // esi
  const struct tagRECT *v16; // rax
  CDisplayManager *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  CoRenderHost *v20; // rsi
  HMONITOR v21; // rdx
  struct CD3DSurface *v22; // rax
  int v23; // eax
  enum DXGI_MODE_ROTATION v24; // esi
  unsigned int *v25; // rbx
  const struct tagRECT *DisplayRect; // rax
  struct CDisplay *v27; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  *((_BYTE *)this + 796) = 0;
  if ( *((_BYTE *)this + 789) )
    return 0LL;
  v5 = qword_18023E528;
  v6 = *((_QWORD *)this + 17);
  if ( qword_18023E528 )
  {
    a2 = *((unsigned int *)qword_18023E528 + 18);
    v7 = 0;
    if ( (_DWORD)a2 )
    {
      do
      {
        a3 = *(_QWORD *)(*((_QWORD *)qword_18023E528 + 6) + 8LL * v7);
        if ( *(_BYTE *)(a3 + 212) || *(_DWORD *)(a3 + 208) )
          goto LABEL_41;
      }
      while ( ++v7 < (unsigned int)a2 );
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 1361LL) )
  {
LABEL_41:
    v21 = (HMONITOR)*((_QWORD *)this + 58);
    v27 = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v5, v21, &v27);
    v9 = v27;
    goto LABEL_11;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *, __int64, __int64, CDisplaySet *))(*(_QWORD *)this + 176LL))(
         this,
         a2,
         a3,
         qword_18023E528) )
  {
    v5 = qword_18023E528;
    goto LABEL_41;
  }
  v8 = (unsigned int)(*((_DWORD *)qword_18023E528 + 18) - 1);
  if ( (int)v8 < 0 )
  {
LABEL_49:
    v9 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v9 = *(struct CDisplay **)(*((_QWORD *)qword_18023E528 + 6) + 8 * v8);
      if ( *((_DWORD *)v9 + 60) == *((_DWORD *)this + 114) )
        break;
      v8 = (unsigned int)(v8 - 1);
      if ( (int)v8 < 0 )
        goto LABEL_49;
    }
  }
LABEL_11:
  if ( v9 != *((struct CDisplay **)this + 14) )
  {
    CHwndRenderTarget::ReleaseResources(this);
    ReplaceInterface<CRegionWrapper,CRegionWrapper>((char *)this + 112, v9);
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 392LL);
    if ( v8 )
      *(_BYTE *)(v8 + 28) = 1;
    if ( v9
      && !*(_BYTE *)(*((_QWORD *)this + 2) + 1361LL)
      && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 176LL))(this) )
    {
      *(_OWORD *)(*((_QWORD *)this + 14) + 96LL) = *(_OWORD *)((char *)this + 412);
      *(_OWORD *)(*((_QWORD *)this + 14) + 80LL) = *(_OWORD *)((char *)this + 428);
      v8 = *((_QWORD *)this + 14);
      *(_DWORD *)(v8 + 288) = *((_DWORD *)this + 113);
    }
  }
  v10 = *((_QWORD *)this + 14);
  if ( !v10 )
    return 0LL;
  if ( *((_QWORD *)this + 15) )
  {
    if ( *((_BYTE *)this + 802) )
    {
      v24 = *(_DWORD *)(v10 + 288);
      v25 = (unsigned int *)(v10 + 80);
      DisplayRect = (const struct tagRECT *)CHwndRenderTarget::GetDisplayRect(this);
      CHwndRenderTarget::CalculateMonitorTransform(this, v24, v25, DisplayRect);
      *((_BYTE *)this + 787) = 1;
    }
  }
  else
  {
    v12 = *((_DWORD *)this + 98);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(v8, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Start, 0LL);
    if ( (v12 & 0x10) != 0 )
    {
      v13 = *((_QWORD *)this + 14);
      if ( v13 )
        v14 = (unsigned int *)(v13 + 80);
      else
        v14 = (unsigned int *)((char *)this + 428);
      if ( v13 )
        v15 = *(_DWORD *)(v13 + 288);
      else
        v15 = *((_DWORD *)this + 113);
      v16 = (const struct tagRECT *)CHwndRenderTarget::GetDisplayRect(this);
      CHwndRenderTarget::CalculateMonitorTransform(this, v15, v14, v16);
      if ( *(_BYTE *)(*((_QWORD *)this + 14) + 296LL) )
        v12 |= 0x20000000u;
      if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 176LL))(this) )
      {
        v12 |= 0x4000u;
      }
      else if ( CDisplayManager::IsStereoEnabled(v17) && *(_DWORD *)(*((_QWORD *)this + 2) + 284LL) )
      {
        v12 |= 0x2000u;
      }
    }
    v18 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, _QWORD))(*(_QWORD *)this + 280LL))(this, v12);
    v3 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x9C9u);
      goto LABEL_17;
    }
    v19 = *((_QWORD *)this + 2);
    v20 = *(CoRenderHost **)(v19 + 568);
    if ( v20 )
    {
      v22 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 120LL))(*((_QWORD *)this + 15));
      v23 = CoRenderHost::SetDeviceFromSurface(v20, v22);
      v3 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x9D2u);
        goto LABEL_17;
      }
    }
    if ( (v12 & 0x2000) != 0 )
      (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 15))(
        *((_QWORD *)this + 15),
        &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
        (char *)this + 128);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(v19, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Stop, 0LL);
    *(_WORD *)((char *)this + 787) = 257;
  }
  *((_BYTE *)this + 802) = 0;
  if ( !*((_QWORD *)this + 97) )
  {
    result = COverlayContext::Create(
               *((struct IRenderTargetDisplay **)this + 15),
               *((struct CDisplay **)this + 14),
               *((struct CComposition **)this + 2),
               (struct COverlayContext **)this + 97);
    v3 = result;
    if ( (int)result >= 0 )
      return result;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0xA12u);
  }
LABEL_17:
  if ( v3 < 0 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 304LL))(this);
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 16);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 15);
  }
  return (unsigned int)v3;
}
