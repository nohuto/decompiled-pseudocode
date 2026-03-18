/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0170FCC
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119870 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C0170ABC (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0015028 (McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiReportAdapter @ 0x1C011A830 (DpiReportAdapter.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0173D5C (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0176FAC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C018FAFC (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C01AB758 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01AC07C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C01DBC80 (DpiFreeAdapterInfo.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this)
{
  int v1; // eax
  int v2; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v7; // rcx
  ADAPTER_RENDER *v8; // rcx
  void (__fastcall *v9)(_QWORD); // rax
  void (__fastcall *v10)(_QWORD); // rax
  int v11; // eax
  struct VMBCHANNEL__ *v12; // rcx
  struct VMBCHANNEL__ *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rcx
  DXGGLOBAL *v18; // rax
  struct _MDL *v19; // [rsp+30h] [rbp-158h]
  int v20; // [rsp+C8h] [rbp-C0h]
  int v21; // [rsp+E0h] [rbp-A8h]
  __int64 v22; // [rsp+108h] [rbp-80h] BYREF
  __int64 v23; // [rsp+110h] [rbp-78h]
  int v24; // [rsp+118h] [rbp-70h]
  int v25; // [rsp+120h] [rbp-68h]

  v1 = *((_DWORD *)this + 75);
  v2 = *((_DWORD *)this + 296);
  *((_BYTE *)this + 184) = 1;
  if ( (v1 & 0x10) != 0 && !*((_QWORD *)this + 288) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v22);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v4) + 74) == this )
    {
      Global = DXGGLOBAL::GetGlobal(v5);
      *((_QWORD *)Global + 74) = 0LL;
      if ( !*((_QWORD *)Global + 76) )
        *((_QWORD *)Global + 76) = 0LL;
      DXGADAPTER::ReleaseReferenceNoTracking(this);
    }
    if ( (_BYTE)v23 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v22);
  }
  v7 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 288);
  if ( v7 )
    ADAPTER_DISPLAY::Destroy(v7);
  v8 = (ADAPTER_RENDER *)*((_QWORD *)this + 289);
  if ( v8 )
    ADAPTER_RENDER::Destroy(v8);
  v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 171);
  if ( v9 )
  {
    v9(*((_QWORD *)this + 169));
    memset((char *)this + 1344, 0, 0xB8uLL);
  }
  v10 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 195);
  if ( v10 )
  {
    v10(*((_QWORD *)this + 193));
    memset((char *)this + 1536, 0, 0x60uLL);
  }
  DpiFreeAdapterInfo((char *)this + 1144);
  memset((char *)this + 240, 0, 0x388uLL);
  memset((char *)this + 1144, 0, 0xC8uLL);
  if ( *((_BYTE *)this + 185) )
  {
    v11 = *((_DWORD *)this + 978);
    if ( v11 )
    {
      v12 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 486);
      v22 = 0LL;
      v23 = 0LL;
      v24 = 15;
      v25 = v11;
      VmBusSendSyncMessage(v12, (struct DXGKVMB_COMMAND_BASE *)&v22, 0x20u, 0LL, 0LL, v19);
      *((_DWORD *)this + 978) = 0;
    }
    v22 = 0LL;
    v23 = 0LL;
    v13 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 486);
    v24 = 30;
    VmBusSendSyncMessage(v13, (struct DXGKVMB_COMMAND_BASE *)&v22, 0x18u, 0LL, 0LL, v19);
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)this + 3888));
  }
  v14 = *((_DWORD *)this + 50);
  if ( v14 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v14);
    *((_DWORD *)this + 50) = -1;
  }
  v15 = *((_QWORD *)this + 24);
  if ( v15 )
  {
    DpiReportAdapter(v15, (__int64)this);
    if ( bTracingEnabled )
    {
      v16 = *((_DWORD *)this + 421);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v17 = v16 >> 14;
        LOBYTE(v17) = v17 & 7;
        McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
          v17,
          &EventDestroyAdapter,
          v16 >> 31,
          *((_QWORD *)this + 24),
          (char)this,
          v2,
          *((_QWORD *)this + 204),
          *((_DWORD *)this + 410),
          *((_QWORD *)this + 206),
          *((_DWORD *)this + 414),
          *((_DWORD *)this + 415),
          *((_DWORD *)this + 417),
          *((_DWORD *)this + 418),
          *((_DWORD *)this + 419),
          *((_DWORD *)this + 422),
          *((_DWORD *)this + 416),
          *((_DWORD *)this + 420),
          v16,
          (v16 >> 10) & 0xF,
          v17,
          (v16 >> 17) & 7,
          (v16 & 0x80000000) != 0,
          *((_DWORD *)this + 423),
          *((_DWORD *)this + 424),
          v20,
          *((_DWORD *)this + 426),
          *((_DWORD *)this + 427),
          v21,
          0,
          0,
          0);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 72));
    *((_DWORD *)this + 34) = 0;
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)this + 185) )
  {
    v18 = DXGGLOBAL::GetGlobal(v15);
    DXGGLOBAL::SetVirtualRenderAdapter(v18, 0LL);
  }
}
