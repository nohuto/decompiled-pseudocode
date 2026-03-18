/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C017F700
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000F5AC (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00239D8 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C019E190 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rsi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r8
  DXGADAPTER *v24; // rcx
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rax
  DXGDEVICE *v29; // r12
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v31; // xmm7_4
  __int64 v32; // rax
  float v33; // xmm6_4
  __int64 v34; // rax
  float *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  DXGADAPTER *v40; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v41[4]; // [rsp+30h] [rbp-A8h]
  __int128 v42; // [rsp+40h] [rbp-98h]
  _QWORD v43[14]; // [rsp+50h] [rbp-88h] BYREF
  struct DXGADAPTER *v44; // [rsp+E8h] [rbp+10h] BYREF

  v3 = (_OWORD *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 8230LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v7, &EventProfilerExit, v8, 2127);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v41 = *v3;
  v42 = v3[1];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v40, v41[0], Current, &v44);
  v13 = v44;
  if ( !v44 )
  {
    v14 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v14 + 24) = Current;
    *(_QWORD *)(v14 + 32) = v41[0];
    WdLogEvent5_WdError(v14);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)v44 + 288) )
  {
    v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v15 + 24) = v13;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v44, 0LL);
  v17 = COREADAPTERACCESS::AcquireExclusive(v43, v16 + 1);
  v21 = v17;
  if ( v17 >= 0 )
  {
    v26 = *((_QWORD *)v13 + 288);
    v27 = v41[1];
    if ( v41[1] >= *(_DWORD *)(v26 + 80) )
    {
LABEL_27:
      v28 = WdLogNewEntry5_WdWarning(v26, v18, v20);
      *(_QWORD *)(v28 + 24) = v27;
      *(_QWORD *)(v28 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
LABEL_14:
      v7 = v40;
      if ( v40 )
        DXGADAPTER::ReleaseReferenceNoTracking(v40);
      goto LABEL_6;
    }
    v29 = 0LL;
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v26, v41[1]) == 2
      || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v13 + 288), v27) == 3 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((DXGADAPTER ***)v13 + 288), v27);
    }
    else
    {
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v13 + 288), v27) )
        goto LABEL_34;
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v13 + 288), v27);
    }
    v29 = VidPnSourceOwner;
LABEL_34:
    if ( !v29 )
      goto LABEL_27;
    LODWORD(v21) = 0;
    v31 = *(float *)&v41[2];
    if ( *(float *)&v41[2] > 4.0
      || *(float *)&v41[2] < 0.2
      || *(float *)&v41[3] > 4.0
      || *(float *)&v41[3] < 0.2
      || *(float *)&v42 > 4.0
      || *(float *)&v42 < 0.2 )
    {
      v32 = WdLogNewEntry5_WdWarning(v26, v18, v20);
      *(_QWORD *)(v32 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      LODWORD(v21) = -1073741811;
    }
    v33 = *((float *)&v42 + 1);
    if ( *((float *)&v42 + 1) > 0.6
      || *((float *)&v42 + 1) < -0.6
      || *((float *)&v42 + 2) > 0.6
      || *((float *)&v42 + 2) < -0.6
      || *((float *)&v42 + 3) > 0.6
      || *((float *)&v42 + 3) < -0.6 )
    {
      v34 = WdLogNewEntry5_WdWarning(v26, v18, v20);
      *(_QWORD *)(v34 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
      LODWORD(v21) = -1073741811;
    }
    v35 = 0LL;
    if ( (int)v21 >= 0 )
    {
      if ( v31 != 1.0
        || *(float *)&v41[3] != 1.0
        || *(float *)&v42 != 1.0
        || v33 != 0.0
        || *((float *)&v42 + 2) != 0.0
        || *((float *)&v42 + 3) != 0.0 )
      {
        v35 = (float *)operator new(0x18uLL, 0x4B677844u, PagedPool);
        if ( !v35 )
        {
          v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
          *(_QWORD *)(v39 + 24) = v29;
          LODWORD(v21) = -1073741801;
          *(_QWORD *)(v39 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v39);
          goto LABEL_60;
        }
        *v35 = v31;
        v35[1] = *(float *)&v41[3];
        *((_DWORD *)v35 + 2) = v42;
        v35[3] = v33;
        *((_QWORD *)v35 + 2) = *((_QWORD *)&v42 + 1);
      }
      DXGDEVICE::SetFullscreenGammaRampAdjustment(v29, v27, (struct DXGK_GAMMA_ADJUSTMENT *)v35);
      LODWORD(v21) = ADAPTER_DISPLAY::UpdateGammaRamp(*((DXGADAPTER ***)v13 + 288), v27);
    }
LABEL_60:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    if ( v40 )
      DXGADAPTER::ReleaseReferenceNoTracking(v40);
    v24 = (DXGADAPTER *)qword_1C005F010;
    v25 = (qword_1C005F010 & 2) == 0;
    goto LABEL_22;
  }
  v22 = WdLogNewEntry5_WdError(v19);
  *(_QWORD *)(v22 + 24) = v21;
  WdLogEvent5_WdError(v22);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
  v24 = v40;
  if ( v40 )
    DXGADAPTER::ReleaseReferenceNoTracking(v40);
  v25 = (qword_1C005F010 & 2) == 0;
LABEL_22:
  if ( !v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v24, &EventProfilerExit, v23, 2127);
  return (unsigned int)v21;
}
