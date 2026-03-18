/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1C0181710
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01746A4 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0174850 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // r14
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  __int64 v25; // r8
  struct DXGDEVICE *v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r8
  DXGADAPTER *v33; // rcx
  ADAPTER_DISPLAY *v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // esi
  __int64 v37; // r8
  struct DXGDEVICE *v38; // rcx
  __int64 v39; // rax
  DXGADAPTER *v40; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v41[4]; // [rsp+30h] [rbp-98h]
  void *v42[2]; // [rsp+40h] [rbp-88h]
  _BYTE v43[120]; // [rsp+50h] [rbp-78h] BYREF
  struct DXGDEVICE *v44; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGDEVICE *v45; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGADAPTER *v46; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_OWORD *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2114);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 7296LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v7, &EventProfilerExit, v8, 2114);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v41 = *v3;
  *(_OWORD *)v42 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v41[1], Current, &v45);
  v13 = v45;
  if ( !v45 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = v41[1];
    WdLogEvent5_WdWarning(v14);
LABEL_14:
    if ( v44 )
    {
      v7 = (DXGADAPTER *)_InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v7 == (DXGADAPTER *)1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    }
    goto LABEL_6;
  }
  v15 = v41[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v40, v41[0], Current, &v46);
  v19 = v46;
  if ( !v46 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = v15;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_19;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v46, 0LL);
  v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43);
  if ( v24 >= 0 )
  {
    if ( *((_QWORD *)v19 + 289) || (*((_DWORD *)v19 + 75) & 0x100) == 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      *(_QWORD *)(v39 + 24) = v15;
      WdLogEvent5_WdWarning(v39);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
LABEL_19:
      v7 = v40;
      if ( v40 )
        DXGADAPTER::ReleaseReferenceNoTracking(v40);
      goto LABEL_14;
    }
    v27 = v41[2];
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v19 + 288), v13, v41[2]) )
    {
      v34 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 288);
      if ( LODWORD(v42[1]) )
        v35 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v34, (unsigned int)v27, v30);
      else
        v35 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(v34, (unsigned int)v27, v42[0]);
      v36 = v35;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
      if ( v40 )
        DXGADAPTER::ReleaseReferenceNoTracking(v40);
      v38 = v44;
      if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v38, &EventProfilerExit, v37, 2114);
      return v36;
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v31[3] = v13;
      v31[4] = v19;
      v31[5] = v27;
      WdLogEvent5_WdWarning(v31);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
      v33 = v40;
      if ( v40 )
        DXGADAPTER::ReleaseReferenceNoTracking(v40);
      if ( v44 )
      {
        v33 = (DXGADAPTER *)_InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v33 == (DXGADAPTER *)1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
      }
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v33, &EventProfilerExit, v32, 2114);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    if ( v40 )
      DXGADAPTER::ReleaseReferenceNoTracking(v40);
    v26 = v44;
    if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v26, &EventProfilerExit, v25, 2114);
    return (unsigned int)v24;
  }
}
