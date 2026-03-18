/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C0166D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019B84 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019CE0 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C002BC08 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1C6C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C018C148 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  DXGDEVICE *v29; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rax
  int updated; // r14d
  float v32; // xmm7_4
  __int64 v33; // rax
  float v34; // xmm6_4
  __int64 v35; // rax
  float *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C0h]
  unsigned int v45[4]; // [rsp+40h] [rbp-B8h]
  __int128 v46; // [rsp+50h] [rbp-A8h]
  DXGADAPTER *v47; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v48[14]; // [rsp+70h] [rbp-88h] BYREF
  struct DXGADAPTER *v49; // [rsp+108h] [rbp+10h] BYREF

  v3 = (_OWORD *)a1;
  v44 = 0LL;
  v43 = 2127;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2127);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 8974LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v43);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v45 = *v3;
  v46 = v3[1];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v47, v45[0], Current, &v49);
  v15 = v49;
  if ( !v49 )
  {
    v16 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v16 + 24) = Current;
    *(_QWORD *)(v16 + 32) = v45[0];
    WdLogEvent5_WdError(v16);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)v49 + 307) )
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v17 + 24) = v15;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v49, 0LL);
  v18 = COREADAPTERACCESS::AcquireExclusive(v48);
  v22 = v18;
  if ( v18 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v23 + 24) = v22;
    WdLogEvent5_WdError(v23);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
    if ( v47 )
      DXGADAPTER::ReleaseReferenceNoTracking(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v43);
    return (unsigned int)v22;
  }
  v26 = *((_QWORD *)v15 + 307);
  v27 = v45[1];
  if ( v45[1] >= *(_DWORD *)(v26 + 80) )
  {
LABEL_26:
    v28 = WdLogNewEntry5_WdWarning(v26, v19, v21);
    *(_QWORD *)(v28 + 24) = v27;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
LABEL_14:
    if ( v47 )
      DXGADAPTER::ReleaseReferenceNoTracking(v47);
    goto LABEL_6;
  }
  v29 = 0LL;
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v26, v45[1]) == 2
    || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v15 + 307), v27) == 3 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((DXGADAPTER ***)v15 + 307), v27);
  }
  else
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v15 + 307), v27) )
      goto LABEL_33;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v15 + 307), v27);
  }
  v29 = VidPnSourceOwner;
LABEL_33:
  if ( !v29 )
    goto LABEL_26;
  updated = 0;
  v32 = *(float *)&v45[2];
  if ( *(float *)&v45[2] > 4.0
    || *(float *)&v45[2] < 0.2
    || *(float *)&v45[3] > 4.0
    || *(float *)&v45[3] < 0.2
    || *(float *)&v46 > 4.0
    || *(float *)&v46 < 0.2 )
  {
    v33 = WdLogNewEntry5_WdWarning(v26, v19, v21);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    updated = -1073741811;
  }
  v34 = *((float *)&v46 + 1);
  if ( *((float *)&v46 + 1) > 0.6
    || *((float *)&v46 + 1) < -0.6
    || *((float *)&v46 + 2) > 0.6
    || *((float *)&v46 + 2) < -0.6
    || *((float *)&v46 + 3) > 0.6
    || *((float *)&v46 + 3) < -0.6 )
  {
    v35 = WdLogNewEntry5_WdWarning(v26, v19, v21);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v35);
    updated = -1073741811;
  }
  v36 = 0LL;
  if ( updated >= 0 )
  {
    if ( v32 != 1.0
      || *(float *)&v45[3] != 1.0
      || *(float *)&v46 != 1.0
      || v34 != 0.0
      || *((float *)&v46 + 2) != 0.0
      || *((float *)&v46 + 3) != 0.0 )
    {
      v36 = (float *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
      if ( !v36 )
      {
        v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        *(_QWORD *)(v40 + 24) = v29;
        updated = -1073741801;
        *(_QWORD *)(v40 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v40);
        goto LABEL_59;
      }
      *v36 = v32;
      v36[1] = *(float *)&v45[3];
      *((_DWORD *)v36 + 2) = v46;
      v36[3] = v34;
      *((_QWORD *)v36 + 2) = *((_QWORD *)&v46 + 1);
    }
    DXGDEVICE::SetFullscreenGammaRampAdjustment(v29, v27, (struct DXGK_GAMMA_ADJUSTMENT *)v36);
    updated = ADAPTER_DISPLAY::UpdateGammaRamp(*((DXGADAPTER ***)v15 + 307), v27);
  }
LABEL_59:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
  if ( v47 )
    DXGADAPTER::ReleaseReferenceNoTracking(v47);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v43);
  return (unsigned int)updated;
}
