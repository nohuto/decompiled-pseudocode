/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574
 * Callers:
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00AD01C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00AD1DC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AD6AC (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00F65D0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C00F9E90 (DxgkSetMonitorColorSpaceTransform.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00FE870 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0102554 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0175E84 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C017F700 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C01A0AC0 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002850 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00154C8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0079008 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C007B228 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C0083CB8 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0083D60 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // r14
  DXGADAPTER *v8; // rax
  __int64 v9; // rsi
  struct DXGK_GAMMA_ADJUSTMENT *v10; // r15
  __int64 v11; // rbp
  volatile signed __int32 *v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rax
  int updated; // esi
  const void *v17; // r8
  unsigned int v18; // edx
  ADAPTER_DISPLAY *v19; // rcx
  PERESOURCE *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE v26[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 6409LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !*((_DWORD *)this[2] + 420) )
    return 0LL;
  v7 = 3760 * v3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (DXGADAPTER *)((char *)this[14] + 3760 * v3 + 864));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v8 = this[14];
  if ( *((_DWORD *)v8 + 940 * v3 + 174) != 1 || (v9 = *(_QWORD *)((char *)v8 + v7 + 704)) == 0 )
  {
    v9 = *(_QWORD *)((char *)v8 + v7 + 688);
    if ( !v9 )
      goto LABEL_26;
  }
  v10 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v9 + 8 * v3 + 1480);
  if ( !v10 )
  {
    v14 = *(volatile signed __int32 **)(v9 + 8 * v3 + 1352);
    if ( v14 )
    {
      _InterlockedIncrement(v14 + 2);
      goto LABEL_28;
    }
LABEL_26:
    v14 = *(volatile signed __int32 **)((char *)this[14] + v7 + 904);
    if ( v14 )
      _InterlockedIncrement(v14 + 2);
    goto LABEL_28;
  }
  v11 = *(_QWORD *)(v9 + 8 * v3 + 1352);
  if ( v11 && *(_DWORD *)(v11 + 16) == 1 )
    v11 = 0LL;
  v12 = (volatile signed __int32 *)operator new(0x28uLL, 0x4B677844u, PagedPool);
  v14 = v12;
  if ( v12 )
  {
    *((_QWORD *)v12 + 3) = 0LL;
    *(_QWORD *)v12 = &ReferenceCounted::`vftable';
    v13 = 1LL;
    *((_DWORD *)v12 + 2) = 1;
    *(_QWORD *)v12 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v12 + 4) = 1;
    *((_QWORD *)v12 + 4) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    if ( v11 )
    {
      v17 = *(const void **)(v11 + 32);
      v18 = *(_DWORD *)(v11 + 16);
    }
    else
    {
      v17 = 0LL;
      v18 = 2;
    }
    updated = DXGK_GAMMA_RAMP::Initialize((size_t *)v14, v18, v17);
    if ( updated < 0
      || (updated = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                      v19,
                      (const struct DXGK_GAMMA_RAMP *)v11,
                      (struct DXGK_GAMMA_RAMP *)v14,
                      v10),
          updated < 0) )
    {
LABEL_37:
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)v14);
      goto LABEL_39;
    }
LABEL_28:
    if ( !*((_BYTE *)this + 134) || !DXGADAPTER::IsFullWDDMAdapter(this[2]) )
      goto LABEL_34;
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v20) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v22 + 24) = 6537LL;
      WdLogEvent5_WdAssertion(v22);
    }
    updated = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 289), 0, 0);
    if ( updated < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v24 + 24) = this;
      WdLogEvent5_WdError(v24);
    }
    else
    {
LABEL_34:
      updated = DmmUpdateGammaRampOnVidPnSource(this[2], v3, (const struct DXGK_GAMMA_RAMP *)v14);
      if ( *((_BYTE *)this + 134) && DXGADAPTER::IsFullWDDMAdapter(this[2]) )
        ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v25 + 2312), 0, 0);
    }
    goto LABEL_37;
  }
  v15 = WdLogNewEntry5_WdLowResource(v13);
  *(_QWORD *)(v15 + 24) = v9;
  WdLogEvent5_WdLowResource(v15);
  updated = -1073741801;
LABEL_39:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
  return (unsigned int)updated;
}
