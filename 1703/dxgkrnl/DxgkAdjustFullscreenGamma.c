/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C017B820
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B7E8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C00252F0 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0025348 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0188DF0 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  DXGADAPTER *v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r8
  DXGADAPTER *v27; // rcx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rax
  DXGDEVICE *v32; // r12
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v34; // xmm7_4
  __int64 v35; // rax
  float v36; // xmm6_4
  __int64 v37; // rax
  float *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  DXGADAPTER *v44; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v45[4]; // [rsp+30h] [rbp-A8h]
  __int128 v46; // [rsp+40h] [rbp-98h]
  _QWORD v47[14]; // [rsp+50h] [rbp-88h] BYREF
  struct DXGADAPTER *v48; // [rsp+E8h] [rbp+10h] BYREF

  v3 = (_OWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = 7918LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v8, &EventProfilerExit, v9, 2127);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v45 = *v3;
  v46 = v3[1];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v44, v45[0], Current, &v48);
  v15 = v48;
  if ( !v48 )
  {
    v16 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v16 + 24) = Current;
    *(_QWORD *)(v16 + 32) = v45[0];
    WdLogEvent5_WdError(v16);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)v48 + 285) )
  {
    v17 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = v15;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v48, 0LL);
  v19 = COREADAPTERACCESS::AcquireExclusive(v47, v18 + 1);
  v24 = v19;
  if ( v19 >= 0 )
  {
    v29 = *((_QWORD *)v15 + 285);
    v30 = v45[1];
    if ( v45[1] >= *(_DWORD *)(v29 + 80) )
    {
LABEL_27:
      v31 = WdLogNewEntry5_WdWarning(v29, v20, v22, v23);
      *(_QWORD *)(v31 + 24) = v30;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
LABEL_14:
      v8 = v44;
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      goto LABEL_6;
    }
    v32 = 0LL;
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v29, v45[1]) == 2
      || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((DXGADAPTER ***)v15 + 285), v30) == 3 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((DXGADAPTER ***)v15 + 285), v30);
    }
    else
    {
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v15 + 285), v30) )
        goto LABEL_34;
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v15 + 285), v30);
    }
    v32 = VidPnSourceOwner;
LABEL_34:
    if ( !v32 )
      goto LABEL_27;
    LODWORD(v24) = 0;
    v34 = *(float *)&v45[2];
    if ( *(float *)&v45[2] > 4.0
      || *(float *)&v45[2] < 0.2
      || *(float *)&v45[3] > 4.0
      || *(float *)&v45[3] < 0.2
      || *(float *)&v46 > 4.0
      || *(float *)&v46 < 0.2 )
    {
      v35 = WdLogNewEntry5_WdWarning(v29, v20, v22, v23);
      *(_QWORD *)(v35 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v35);
      LODWORD(v24) = -1073741811;
    }
    v36 = *((float *)&v46 + 1);
    if ( *((float *)&v46 + 1) > 0.6
      || *((float *)&v46 + 1) < -0.6
      || *((float *)&v46 + 2) > 0.6
      || *((float *)&v46 + 2) < -0.6
      || *((float *)&v46 + 3) > 0.6
      || *((float *)&v46 + 3) < -0.6 )
    {
      v37 = WdLogNewEntry5_WdWarning(v29, v20, v22, v23);
      *(_QWORD *)(v37 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v37);
      LODWORD(v24) = -1073741811;
    }
    v38 = 0LL;
    if ( (int)v24 >= 0 )
    {
      if ( v34 != 1.0
        || *(float *)&v45[3] != 1.0
        || *(float *)&v46 != 1.0
        || v36 != 0.0
        || *((float *)&v46 + 2) != 0.0
        || *((float *)&v46 + 3) != 0.0 )
      {
        v38 = (float *)operator new(0x18uLL, 0x4B677844u, PagedPool);
        if ( !v38 )
        {
          v43 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
          *(_QWORD *)(v43 + 24) = v32;
          LODWORD(v24) = -1073741801;
          *(_QWORD *)(v43 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v43);
          goto LABEL_60;
        }
        *v38 = v34;
        v38[1] = *(float *)&v45[3];
        *((_DWORD *)v38 + 2) = v46;
        v38[3] = v36;
        *((_QWORD *)v38 + 2) = *((_QWORD *)&v46 + 1);
      }
      DXGDEVICE::SetFullscreenGammaRampAdjustment(v32, v30, (struct DXGK_GAMMA_ADJUSTMENT *)v38);
      LODWORD(v24) = ADAPTER_DISPLAY::SetGammaRamp(*((PERESOURCE ***)v15 + 285), v30, v32);
    }
LABEL_60:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    if ( v44 )
      DXGADAPTER::ReleaseReference(v44);
    v27 = (DXGADAPTER *)qword_1C006E790;
    v28 = (qword_1C006E790 & 2) == 0;
    goto LABEL_22;
  }
  v25 = WdLogNewEntry5_WdError(v21, v20);
  *(_QWORD *)(v25 + 24) = v24;
  WdLogEvent5_WdError(v25);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
  v27 = v44;
  if ( v44 )
    DXGADAPTER::ReleaseReference(v44);
  v28 = (qword_1C006E790 & 2) == 0;
LABEL_22:
  if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v27, &EventProfilerExit, v26, 2127);
  return (unsigned int)v24;
}
