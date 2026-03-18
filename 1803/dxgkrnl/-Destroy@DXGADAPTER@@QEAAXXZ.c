/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C0147AB8 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019CFC4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C001B05C (McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0027318 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C0096008 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01528D0 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01594B8 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C017ADF8 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C01A07E8 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A12A4 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C01EE608 (DpiFreeAdapterInfo.c)
 *     DpiReportAdapter @ 0x1C01F0058 (DpiReportAdapter.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this)
{
  int v1; // eax
  int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v7; // rcx
  ADAPTER_RENDER *v8; // rcx
  void (__fastcall *v9)(_QWORD); // rax
  void (__fastcall *v10)(_QWORD); // rax
  int updated; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  struct VMBCHANNEL__ *v16; // rcx
  struct VMBCHANNEL__ *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rcx
  DXGGLOBAL *v23; // rax
  struct _MDL *v24; // [rsp+30h] [rbp-158h]
  int v25; // [rsp+C8h] [rbp-C0h]
  int v26; // [rsp+E0h] [rbp-A8h]
  __int64 v27; // [rsp+108h] [rbp-80h] BYREF
  __int64 v28; // [rsp+110h] [rbp-78h]
  int v29; // [rsp+118h] [rbp-70h]
  int v30; // [rsp+120h] [rbp-68h]

  v1 = *((_DWORD *)this + 75);
  v2 = *((_DWORD *)this + 320);
  *((_BYTE *)this + 184) = 1;
  if ( (v1 & 0x10) != 0 && !*((_QWORD *)this + 307) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v27);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v4) + 75) == this )
    {
      Global = DXGGLOBAL::GetGlobal(v5);
      DXGGLOBAL::SetWarpAdapter(Global, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(this);
    }
    if ( (_BYTE)v28 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27);
  }
  v7 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 307);
  if ( v7 )
    ADAPTER_DISPLAY::Destroy(v7);
  v8 = (ADAPTER_RENDER *)*((_QWORD *)this + 308);
  if ( v8 )
    ADAPTER_RENDER::Destroy(v8);
  v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 188);
  if ( v9 )
  {
    v9(*((_QWORD *)this + 186));
    memset((char *)this + 1480, 0, 0xB8uLL);
  }
  v10 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 212);
  if ( v10 )
  {
    v10(*((_QWORD *)this + 210));
    memset((char *)this + 1672, 0, 0x60uLL);
  }
  if ( *((_BYTE *)this + 4172) )
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_ADAPTER_STOP, 0LL, 0LL, 0LL, 0LL, 0, 0);
    v13 = updated;
    if ( updated < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = this;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdError(v14);
    }
    *((_BYTE *)this + 4172) = 0;
  }
  DpiFreeAdapterInfo((char *)this + 1240);
  DXGADAPTER::DestroyPhysicalAdapterData(this);
  memset((char *)this + 240, 0, 0x3E8uLL);
  memset((char *)this + 1240, 0, 0xF0uLL);
  if ( *((_BYTE *)this + 185) )
  {
    v15 = *((_DWORD *)this + 1034);
    if ( v15 )
    {
      v16 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 510);
      v27 = 0LL;
      v28 = 0LL;
      v29 = 15;
      v30 = v15;
      VmBusSendSyncMessage(v16, (struct DXGKVMB_COMMAND_BASE *)&v27, 0x20u, 0LL, 0LL, v24);
      *((_DWORD *)this + 1034) = 0;
    }
    v27 = 0LL;
    v28 = 0LL;
    v17 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 510);
    v29 = 30;
    VmBusSendSyncMessage(v17, (struct DXGKVMB_COMMAND_BASE *)&v27, 0x18u, 0LL, 0LL, v24);
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)this + 4080));
  }
  v18 = *((_DWORD *)this + 50);
  if ( v18 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v18);
    *((_DWORD *)this + 50) = -1;
  }
  v19 = *((_QWORD *)this + 24);
  if ( v19 )
  {
    DpiReportAdapter(v19, this);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v20 = *((_DWORD *)this + 455);
      v21 = v20 >> 17;
      LOBYTE(v21) = v21 & 7;
      v22 = v20 >> 10;
      LOBYTE(v22) = v22 & 0xF;
      McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
        v22,
        &EventDestroyAdapter,
        v21,
        *((_QWORD *)this + 24),
        (char)this,
        v2,
        *((_QWORD *)this + 221),
        *((_DWORD *)this + 444),
        *((_QWORD *)this + 223),
        *((_DWORD *)this + 448),
        *((_DWORD *)this + 449),
        *((_DWORD *)this + 451),
        *((_DWORD *)this + 452),
        *((_DWORD *)this + 453),
        *((_DWORD *)this + 456),
        *((_DWORD *)this + 450),
        *((_DWORD *)this + 454),
        v20,
        v22,
        (v20 >> 14) & 7,
        v21,
        (v20 & 0x80000000) != 0,
        *((_DWORD *)this + 457),
        *((_DWORD *)this + 458),
        v25,
        *((_DWORD *)this + 460),
        *((_DWORD *)this + 461),
        v26,
        0,
        0,
        0);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 72));
    *((_DWORD *)this + 34) = 0;
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)this + 185) )
  {
    v23 = DXGGLOBAL::GetGlobal(v19);
    DXGGLOBAL::SetVirtualRenderAdapter(v23, 0LL);
  }
}
