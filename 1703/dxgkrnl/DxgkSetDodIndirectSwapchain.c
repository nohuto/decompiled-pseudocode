/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1C017E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0170E50 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0171000 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v7; // rax
  DXGADAPTER *v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGDEVICE *v15; // r12
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGADAPTER *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r15d
  __int64 v29; // r8
  struct DXGDEVICE *v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  __int64 v37; // r8
  DXGADAPTER *v38; // rcx
  ADAPTER_DISPLAY *v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // esi
  __int64 v42; // r8
  struct DXGDEVICE *v43; // rcx
  __int64 v44; // rax
  DXGADAPTER *v45; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v46[4]; // [rsp+30h] [rbp-98h]
  void *v47[2]; // [rsp+40h] [rbp-88h]
  _BYTE v48[120]; // [rsp+50h] [rbp-78h] BYREF
  struct DXGDEVICE *v49; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGDEVICE *v50; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGADAPTER *v51; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_OWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2114);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = 6988LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v8, &EventProfilerExit, v9, 2114);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v46 = *v3;
  *(_OWORD *)v47 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v49, v46[1], Current, &v50);
  v15 = v50;
  if ( !v50 )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = v46[1];
    WdLogEvent5_WdWarning(v16);
LABEL_14:
    if ( v49 )
    {
      v8 = (DXGADAPTER *)_InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 == (DXGADAPTER *)1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    }
    goto LABEL_6;
  }
  v17 = v46[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v45, v46[0], Current, &v51);
  v22 = v51;
  if ( !v51 )
  {
    v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = v17;
    WdLogEvent5_WdWarning(v23);
    goto LABEL_19;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v51, 0LL);
  v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48);
  if ( v28 >= 0 )
  {
    if ( *((_QWORD *)v22 + 286) || (*((_DWORD *)v22 + 75) & 0x100) == 0 )
    {
      v44 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v44 + 24) = v17;
      WdLogEvent5_WdWarning(v44);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
LABEL_19:
      v8 = v45;
      if ( v45 )
        DXGADAPTER::ReleaseReference(v45);
      goto LABEL_14;
    }
    v31 = v46[2];
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v22 + 285), v15, v46[2]) )
    {
      v39 = (ADAPTER_DISPLAY *)*((_QWORD *)v22 + 285);
      if ( LODWORD(v47[1]) )
        v40 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v39, (unsigned int)v31, v34, v35);
      else
        v40 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(v39, (unsigned int)v31, v47[0], v35);
      v41 = v40;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      if ( v45 )
        DXGADAPTER::ReleaseReference(v45);
      v43 = v49;
      if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v43, &EventProfilerExit, v42, 2114);
      return v41;
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
      v36[3] = v15;
      v36[4] = v22;
      v36[5] = v31;
      WdLogEvent5_WdWarning(v36);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      v38 = v45;
      if ( v45 )
        DXGADAPTER::ReleaseReference(v45);
      if ( v49 )
      {
        v38 = (DXGADAPTER *)_InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v38 == (DXGADAPTER *)1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
      }
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v38, &EventProfilerExit, v37, 2114);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
    if ( v45 )
      DXGADAPTER::ReleaseReference(v45);
    v30 = v49;
    if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v30, &EventProfilerExit, v29, 2114);
    return (unsigned int)v28;
  }
}
