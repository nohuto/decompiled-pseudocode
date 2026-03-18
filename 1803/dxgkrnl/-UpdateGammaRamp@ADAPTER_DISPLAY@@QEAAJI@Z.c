/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1C6C
 * Callers:
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00DDD20 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C010CF28 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C010D30C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01564E8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01565C4 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01566FC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C0157CFC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C01581E0 (DxgkSetMonitorColorSpaceTransform.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0166D70 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C018E900 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000BB4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00253B0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00A63DC (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00A6484 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00DD764 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0150C20 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // r14
  DXGADAPTER *v6; // rax
  __int64 v7; // rbp
  struct DXGK_GAMMA_ADJUSTMENT *v8; // r15
  __int64 v9; // rsi
  volatile signed __int32 *v10; // rbx
  int updated; // ebp
  __int64 v13; // rax
  volatile signed __int32 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  enum _D3DDDI_GAMMARAMP_TYPE v17; // edx
  const void *v18; // r8
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
    v13 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v13 + 24) = 6423LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*((_DWORD *)this[2] + 454) )
    return 0LL;
  v5 = 3760 * v3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (DXGADAPTER *)((char *)this[14] + 3760 * v3 + 864), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v6 = this[14];
  if ( *((_DWORD *)v6 + 940 * v3 + 174) != 1 || (v7 = *(_QWORD *)((char *)v6 + v5 + 704)) == 0 )
  {
    v7 = *(_QWORD *)((char *)v6 + v5 + 688);
    if ( !v7 )
      goto LABEL_9;
  }
  v8 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v7 + 8 * v3 + 1496);
  v9 = *(_QWORD *)(v7 + 8 * v3 + 1368);
  if ( !v8 )
  {
    v10 = *(volatile signed __int32 **)(v7 + 8 * v3 + 1368);
    if ( !v9 )
      goto LABEL_9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
LABEL_34:
    if ( v10 )
    {
LABEL_11:
      if ( !*((_BYTE *)this + 134) || !DXGADAPTER::IsFullWDDMAdapter(this[2]) )
        goto LABEL_12;
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v20) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v22 + 24) = 6551LL;
        WdLogEvent5_WdAssertion(v22);
      }
      updated = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 308), 0, 0LL);
      if ( updated < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v24 + 24) = this;
        WdLogEvent5_WdError(v24);
      }
      else
      {
LABEL_12:
        updated = DmmUpdateGammaRampOnVidPnSource(this[2], v3, (const struct DXGK_GAMMA_RAMP *)v10);
        if ( *((_BYTE *)this + 134) && DXGADAPTER::IsFullWDDMAdapter(this[2]) )
          ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v25 + 2464), 0LL, 0);
      }
      goto LABEL_13;
    }
LABEL_9:
    v10 = *(volatile signed __int32 **)((char *)this[14] + v5 + 904);
    if ( v10 )
      _InterlockedIncrement(v10 + 2);
    goto LABEL_11;
  }
  if ( v9 && *(_DWORD *)(v9 + 16) == 1 )
    v9 = 0LL;
  v14 = (volatile signed __int32 *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
  v10 = v14;
  if ( v14 )
  {
    *((_QWORD *)v14 + 3) = 0LL;
    *(_QWORD *)v14 = &ReferenceCounted::`vftable';
    v15 = 1LL;
    *((_DWORD *)v14 + 2) = 1;
    *(_QWORD *)v14 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v14 + 4) = 1;
    *((_QWORD *)v14 + 4) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( v9 )
    {
      v17 = *(_DWORD *)(v9 + 16);
      v18 = *(const void **)(v9 + 32);
    }
    else
    {
      v17 = D3DDDI_GAMMARAMP_RGB256x3x16;
      v18 = 0LL;
    }
    updated = DXGK_GAMMA_RAMP::Initialize((size_t *)v10, v17, v18);
    if ( updated < 0
      || (updated = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                      v19,
                      (const struct DXGK_GAMMA_RAMP *)v9,
                      (struct DXGK_GAMMA_RAMP *)v10,
                      v8),
          updated < 0) )
    {
LABEL_13:
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)v10);
      goto LABEL_15;
    }
    goto LABEL_34;
  }
  v16 = WdLogNewEntry5_WdLowResource(v15);
  *(_QWORD *)(v16 + 24) = v7;
  WdLogEvent5_WdLowResource(v16);
  updated = -1073741801;
LABEL_15:
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return (unsigned int)updated;
}
