/*
 * XREFs of ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DF690
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009668 (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000C360 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00F1A40 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMT_DISPLAYMODE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  D3DDDI_ROTATION v15; // r12d
  unsigned int v16; // r14d
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF
  __int64 v27; // [rsp+70h] [rbp+18h] BYREF

  v5 = *((_QWORD *)this + 11);
  v7 = *(_QWORD *)(v5 + 104);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
    v8 = *(_QWORD *)(v5 + 104);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(_QWORD *)(v8 + 144);
  v27 = v8;
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 72);
    if ( v10 == 2 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
      WdLogEvent5_WdAssertion(v24);
    }
    v11 = *((_QWORD *)this + 12);
    v12 = *(_QWORD *)(v11 + 104);
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
      v13 = *(_QWORD *)(v11 + 104);
    }
    else
    {
      v13 = 0LL;
    }
    v14 = *(_QWORD *)(v13 + 144);
    v26 = v13;
    if ( v14
      && (v15 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29)),
          DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v15))
      && (v16 = *((_DWORD *)this + 28), DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, v16)) )
    {
      v17 = 16;
      v18 = *((_DWORD *)&a2->Flags + 1);
      a2->Width = *(_DWORD *)(v9 + 76);
      a2->Height = *(_DWORD *)(v9 + 80);
      a2->Format = *(_DWORD *)(v9 + 96);
      v19 = 0;
      if ( (unsigned int)(v10 - 3) > 1 )
        v17 = 0;
      v20 = v17 & 0xFFFFFFDF | v18 & 0xFFFFFFCF;
      if ( v10 == 4 )
        v19 = 32;
      *((_DWORD *)&a2->Flags + 1) = v19 | v20;
      a2->IntegerRefreshRate = DmmMapVSyncFromRationalToInteger(
                                 (const struct _D3DDDI_RATIONAL *)(v14 + 92),
                                 (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v14 + 120) << 29) >> 29),
                                 0LL);
      a2->RefreshRate = *(D3DDDI_RATIONAL *)(v14 + 92);
      a2->ScanLineOrdering = (int)(*(_DWORD *)(v14 + 120) << 29) >> 29;
      a2->DisplayOrientation = v15;
      ConvertDMMScalingToGdiScaling(v16, &a2->DisplayFixedOutput);
      v21 = 0;
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v11, a2);
      *(_QWORD *)(v25 + 24) = this;
      v21 = 1075708679;
      *(_QWORD *)(v25 + 32) = 1075708679LL;
      WdLogEvent5_WdError(v25);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v26, 0LL);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v5, a2);
    *(_QWORD *)(v23 + 24) = this;
    v21 = 1075708679;
    *(_QWORD *)(v23 + 32) = 1075708679LL;
    WdLogEvent5_WdError(v23);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v27, 0LL);
  return v21;
}
