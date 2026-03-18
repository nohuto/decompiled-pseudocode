/*
 * XREFs of DxgkReclaimAllocations @ 0x1C0184F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C00968D0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // r8
  struct DXGDEVICE *v9; // rcx
  bool v10; // zf
  __int64 v12; // rcx
  DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25[4]; // [rsp+30h] [rbp-C8h]
  __int128 v26; // [rsp+40h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-A8h]
  _BYTE v28[16]; // [rsp+58h] [rbp-A0h] BYREF
  struct _D3DKMT_RECLAIMALLOCATIONS2 v29; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v30[96]; // [rsp+90h] [rbp-68h] BYREF
  struct DXGDEVICE *v31; // [rsp+108h] [rbp+10h] BYREF
  struct DXGDEVICE *v32; // [rsp+110h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2071);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = (struct DXGDEVICE *)qword_1C005F010;
    v10 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v9, &EventProfilerExit, v8, 2071);
    return v7;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v25 = *(_OWORD *)v3;
  v26 = *(_OWORD *)(v3 + 16);
  v27 = *(_QWORD *)(v3 + 32);
  v29.hPagingQueue = 0;
  v29.NumAllocations = v27;
  v29.pResources = *(D3DKMT_HANDLE **)&v25[2];
  *(_OWORD *)&v29.HandleList = v26;
  v29.PagingFenceValue = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, v25[0], Current, &v32);
  v13 = v32;
  if ( !v32 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v25[0];
    v7 = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    if ( v31 )
    {
      v9 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      v15 = v9 == (struct DXGDEVICE *)1;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28,
    v32);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v13, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
  v21 = v17;
  if ( v17 >= 0 )
  {
    v7 = DXGDEVICE::ReclaimAllocations(v13, 0LL, &v29);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28);
    v9 = v31;
    if ( v31 )
    {
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_15:
      if ( v15 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    }
LABEL_17:
    v10 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  *(_QWORD *)(v22 + 24) = v13;
  *(_QWORD *)(v22 + 32) = v21;
  WdLogEvent5_WdWarning(v22);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28);
  if ( v31 )
  {
    v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v23 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, 2071);
  return (unsigned int)v21;
}
