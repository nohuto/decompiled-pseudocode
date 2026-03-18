/*
 * XREFs of DxgkDestroyDevice @ 0x1C00FBB20
 * Callers:
 *     ?VmBusDestroyDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CF90 (-VmBusDestroyDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B680 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B734 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00C091C (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00C0968 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00C0C88 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkDestroyDevice(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // di
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // r14
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD v36[2]; // [rsp+38h] [rbp-100h] BYREF
  _BYTE v37[24]; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v38[32]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v39[96]; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v40[8]; // [rsp+E0h] [rbp-58h] BYREF

  memset(v40, 0, sizeof(v40));
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v40[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[3]) = 50;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v3, 2010);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent(v5);
  if ( Current )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (unsigned int *)MmUserProbeAddress;
      v11 = *a1;
    }
    else
    {
      v11 = *a1;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v37, Current, v8, v9);
    v13 = (v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *((_DWORD *)Current + 52)
      && (v14 = *((_QWORD *)Current + 24),
          v15 = *(_DWORD *)(v14 + 16LL * (unsigned int)v13 + 8),
          v12 = (v11 >> 26) & 0x30,
          ((v11 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * (unsigned int)v13 + 8) & 0x30))
      && (v15 & 0x1000) == 0
      && (v15 & 0xF) != 0
      && (*(_BYTE *)(v14 + 16LL * (unsigned int)v13 + 8) & 0xF) == 3 )
    {
      v16 = *(_QWORD *)(v14 + 16LL * (unsigned int)v13);
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 )
    {
      if ( (unsigned int)v13 < *((_DWORD *)Current + 52) )
      {
        v17 = *((_QWORD *)Current + 24);
        v18 = *(_DWORD *)(v17 + 16LL * (unsigned int)v13 + 8);
        if ( ((v11 >> 26) & 0x30) == (v18 & 0x30) && (v18 & 0x1000) == 0 && (v18 & 0xF) != 0 )
          *(_DWORD *)(v17 + 16 * (((unsigned __int64)v11 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v36,
        (struct DXGDEVICE *)v16);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v38,
        (struct _KTHREAD **)(v16 + 112),
        v19,
        v20);
      DXGDEVICE::DestroyAllContexts((PERESOURCE *)v16, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
      DXGDEVICE::DestroyAllPagingQueues((PERESOURCE *)v16, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, v16, 2LL, v21, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v39);
      DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v16);
      v26 = *(_QWORD *)(v16 + 1800);
      if ( v26 && *(_DWORD *)(v26 + 176) == 1 )
      {
        if ( !*(_QWORD *)(v26 + 2280) )
        {
          v35 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
          *(_QWORD *)(v35 + 24) = 2112LL;
          WdLogEvent5_WdAssertion(v35);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v26 + 2280), (const struct DXGDEVICE *)v16)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
               *(ADAPTER_DISPLAY **)(v26 + 2280),
               (const struct DXGDEVICE *)v16) )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v39);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(
            (struct DXGDEVICE *)v16,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v40);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
      if ( v36[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v16 + 16), (struct DXGDEVICE *)v16);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v27, &EventProfilerExit, v28, 2010);
      return 0LL;
    }
    v34 = WdLogNewEntry5_WdError(v12, v13);
    *(_QWORD *)(v34 + 24) = v11;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
    v33 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    v32 = qword_1C006E790;
    v33 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v32, &EventProfilerExit, v31, 2010);
  return 3221225485LL;
}
