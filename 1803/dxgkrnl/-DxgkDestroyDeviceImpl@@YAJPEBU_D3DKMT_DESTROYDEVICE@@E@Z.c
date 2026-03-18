/*
 * XREFs of ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00A0808
 * Callers:
 *     DxgkDestroyDeviceInternal @ 0x1C009E7E0 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyDevice @ 0x1C00A07F0 (DxgkDestroyDevice.c)
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EDC0 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014AA4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014B58 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C00F3264 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00F32BC (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00F35B0 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A4EC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall DxgkDestroyDeviceImpl(const struct _D3DKMT_DESTROYDEVICE *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hDevice; // esi
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // r10d
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // r9
  __int64 v18; // rsi
  ADAPTER_DISPLAY *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // [rsp+30h] [rbp-128h] BYREF
  __int64 v29; // [rsp+38h] [rbp-120h]
  D3DKMT_HANDLE v30; // [rsp+40h] [rbp-118h]
  _QWORD v31[2]; // [rsp+48h] [rbp-110h] BYREF
  _BYTE v32[24]; // [rsp+58h] [rbp-100h] BYREF
  _BYTE v33[32]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v34[96]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v35[10]; // [rsp+F0h] [rbp-68h] BYREF

  memset(v35, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v35[1]);
  v35[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v35[3]) = 50;
  LOBYTE(v35[6]) = -1;
  v29 = 0LL;
  v28 = 2010;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerEnter, v5, 2010);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2010);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (const struct _D3DKMT_DESTROYDEVICE *)MmUserProbeAddress;
      hDevice = a1->hDevice;
    }
    else
    {
      hDevice = a1->hDevice;
    }
    v30 = hDevice;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v32,
      (struct _KTHREAD **)Current);
    v10 = (hDevice >> 6) & 0xFFFFFF;
    v11 = *((_DWORD *)Current + 62);
    if ( v10 < v11
      && (v12 = *((_QWORD *)Current + 29),
          v13 = *(_DWORD *)(v12 + 16LL * v10 + 8),
          v9 = (hDevice >> 25) & 0x60,
          ((hDevice >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v10 + 8) & 0x60))
      && (v13 & 0x2000) == 0
      && (v13 & 0x1F) != 0
      && (*(_BYTE *)(v12 + 16 * (((unsigned __int64)hDevice >> 6) & 0xFFFFFF) + 8) & 0x1F) == 3 )
    {
      v14 = *(_QWORD *)(v12 + 16 * (((unsigned __int64)hDevice >> 6) & 0xFFFFFF));
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      if ( v10 < v11 )
      {
        v15 = *((_QWORD *)Current + 29);
        v16 = *(_DWORD *)(v15 + 16LL * v10 + 8);
        if ( ((hDevice >> 25) & 0x60) == (v16 & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
          *(_DWORD *)(v15 + 16 * (((unsigned __int64)hDevice >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v31,
        (struct DXGDEVICE *)v14);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v33,
        (struct _KTHREAD **)(v14 + 112));
      DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v14, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
      DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v14, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, v14, 2, v17, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v34);
      DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v14);
      v18 = *(_QWORD *)(v14 + 1688);
      if ( v18 )
      {
        v19 = *(ADAPTER_DISPLAY **)(v18 + 2456);
        if ( !v19 )
        {
          v27 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v27 + 24) = 2190LL;
          WdLogEvent5_WdAssertion(v27);
          v19 = *(ADAPTER_DISPLAY **)(v18 + 2456);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v19, (const struct DXGDEVICE *)v14)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
               *(ADAPTER_DISPLAY **)(v18 + 2456),
               (const struct DXGDEVICE *)v14) )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v34);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(
            (struct DXGDEVICE *)v14,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v35,
            1u);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
      if ( v31[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v28);
      return 0LL;
    }
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = hDevice;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v28);
  return 3221225485LL;
}
