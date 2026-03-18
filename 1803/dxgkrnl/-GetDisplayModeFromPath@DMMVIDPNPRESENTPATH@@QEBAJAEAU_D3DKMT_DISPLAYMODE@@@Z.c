/*
 * XREFs of ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0222EF0
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C021EED4 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000691C (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0007CDC (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0007D04 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00C3E6C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00C4198 (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMT_DISPLAYMODE *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v16; // r12d
  unsigned int v17; // r14d
  __int64 v18; // rax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v3 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(_QWORD *)(v6 + 144);
  v26 = v6;
  if ( v7 )
  {
    v10 = *(_DWORD *)(v7 + 72);
    if ( v10 == 2 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v3);
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = *((_QWORD *)this + 12);
    v13 = *(_QWORD *)(v12 + 104);
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 96));
      v14 = *(_QWORD *)(v12 + 104);
    }
    else
    {
      v14 = 0LL;
    }
    v15 = *(_QWORD *)(v14 + 144);
    v25 = v14;
    if ( v15
      && (v16 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
          DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v16))
      && (v17 = *((_DWORD *)this + 28), DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, v17)) )
    {
      v19 = 16;
      v20 = *((_DWORD *)&a2->Flags + 1);
      a2->Width = *(_DWORD *)(v7 + 76);
      a2->Height = *(_DWORD *)(v7 + 80);
      a2->Format = *(_DWORD *)(v7 + 96);
      v21 = 0;
      if ( (unsigned int)(v10 - 3) > 1 )
        v19 = 0;
      v22 = v19 & 0xFFFFFFDF | v20 & 0xFFFFFFCF;
      if ( v10 == 4 )
        v21 = 32;
      *((_DWORD *)&a2->Flags + 1) = v21 | v22;
      a2->IntegerRefreshRate = DmmMapVSyncFromRationalToInteger(
                                 (const struct _D3DDDI_RATIONAL *)(v15 + 92),
                                 (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v15 + 120) << 29) >> 29),
                                 0LL);
      a2->RefreshRate = *(D3DDDI_RATIONAL *)(v15 + 92);
      a2->ScanLineOrdering = (int)(*(_DWORD *)(v15 + 120) << 29) >> 29;
      a2->DisplayOrientation = v16;
      ConvertDMMScalingToGdiScaling(v17, &a2->DisplayFixedOutput, v23);
      v9 = 0;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v18 + 24) = this;
      v9 = 1075708679;
      *(_QWORD *)(v18 + 32) = 1075708679LL;
      WdLogEvent5_WdError(v18);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v25, 0LL);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v8 + 24) = this;
    v9 = 1075708679;
    *(_QWORD *)(v8 + 32) = 1075708679LL;
    WdLogEvent5_WdError(v8);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v26, 0LL);
  return v9;
}
