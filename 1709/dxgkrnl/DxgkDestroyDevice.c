/*
 * XREFs of DxgkDestroyDevice @ 0x1C00F2970
 * Callers:
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192C80 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007804 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00078B8 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00937A8 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0093804 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0093AC8 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkDestroyDevice(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int v9; // esi
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // r10d
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD v30[2]; // [rsp+38h] [rbp-110h] BYREF
  _BYTE v31[24]; // [rsp+48h] [rbp-100h] BYREF
  _BYTE v32[32]; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v33[96]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v34[10]; // [rsp+E0h] [rbp-68h] BYREF

  memset(v34, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v34[1]);
  v34[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v34[3]) = 50;
  LOBYTE(v34[6]) = -1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2010);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( Current )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (unsigned int *)MmUserProbeAddress;
      v9 = *a1;
    }
    else
    {
      v9 = *a1;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31, Current);
    v11 = (v9 >> 6) & 0xFFFFFF;
    v12 = *((_DWORD *)Current + 60);
    if ( v11 < v12
      && (v13 = *((_QWORD *)Current + 28),
          v14 = *(_DWORD *)(v13 + 16LL * v11 + 8),
          v10 = (v9 >> 25) & 0x60,
          ((v9 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v11 + 8) & 0x60))
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) != 0
      && (*(_BYTE *)(v13 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 3 )
    {
      v15 = *(_QWORD *)(v13 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF));
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15 )
    {
      if ( v11 < v12 )
      {
        v16 = *((_QWORD *)Current + 28);
        v17 = *(_DWORD *)(v16 + 16LL * v11 + 8);
        if ( ((v9 >> 25) & 0x60) == (v17 & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
          *(_DWORD *)(v16 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v30,
        (struct DXGDEVICE *)v15);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v32,
        (struct _KTHREAD **)(v15 + 112));
      DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v15, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
      DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v15, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, v15, 2, v18, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v33);
      DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v15);
      v20 = *(_QWORD *)(v15 + 1672);
      if ( v20 )
      {
        if ( !*(_QWORD *)(v20 + 2304) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v19);
          *(_QWORD *)(v29 + 24) = 2113LL;
          WdLogEvent5_WdAssertion(v29);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v20 + 2304), (const struct DXGDEVICE *)v15)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
               *(ADAPTER_DISPLAY **)(v20 + 2304),
               (const struct DXGDEVICE *)v15) )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v33);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(
            (struct DXGDEVICE *)v15,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v34,
            1u);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      if ( v30[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, v22, 2010);
      return 0LL;
    }
    v28 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v28 + 24) = v9;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
    v27 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    v26 = qword_1C005F010;
    v27 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v25, 2010);
  return 3221225485LL;
}
