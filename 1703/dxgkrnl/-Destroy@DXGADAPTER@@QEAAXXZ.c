/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C016D334 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C001401C (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C002A150 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendAdapterStop@DXGADAPTER@@QEAAXXZ @ 0x1C002EB18 (-VmBusSendAdapterStop@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendCloseAdapter@DXGADAPTER@@QEAAXI@Z @ 0x1C002F040 (-VmBusSendCloseAdapter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiReportAdapter @ 0x1C0111384 (DpiReportAdapter.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0170654 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01735BC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0196734 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0196F18 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C01C249C (DpiFreeAdapterInfo.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this)
{
  int v1; // eax
  int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v13; // rcx
  ADAPTER_RENDER *v14; // rcx
  void (__fastcall *v15)(_QWORD); // rax
  void (__fastcall *v16)(_QWORD); // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rcx
  DXGGLOBAL *v24; // rax
  int v25; // [rsp+C0h] [rbp-58h]
  int v26; // [rsp+D8h] [rbp-40h]
  _BYTE v27[16]; // [rsp+100h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 75);
  v2 = *((_DWORD *)this + 290);
  *((_BYTE *)this + 185) = 1;
  if ( (v1 & 0x10) != 0 && !*((_QWORD *)this + 285) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v27);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v5, v4, v6, v7) + 74) == this )
    {
      Global = DXGGLOBAL::GetGlobal(v9, v8, v10, v11);
      *((_QWORD *)Global + 74) = 0LL;
      if ( !*((_QWORD *)Global + 76) )
        *((_QWORD *)Global + 76) = 0LL;
      DXGADAPTER::ReleaseReference(this);
    }
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v8, v10, v11);
  }
  v13 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 285);
  if ( v13 )
    ADAPTER_DISPLAY::Destroy(v13);
  v14 = (ADAPTER_RENDER *)*((_QWORD *)this + 286);
  if ( v14 )
    ADAPTER_RENDER::Destroy(v14);
  v15 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 168);
  if ( v15 )
  {
    v15(*((_QWORD *)this + 166));
    memset((char *)this + 1320, 0, 0xB8uLL);
  }
  v16 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 192);
  if ( v16 )
  {
    v16(*((_QWORD *)this + 190));
    memset((char *)this + 1512, 0, 0x60uLL);
  }
  DpiFreeAdapterInfo((char *)this + 1120);
  memset((char *)this + 240, 0, 0x370uLL);
  memset((char *)this + 1120, 0, 0xC8uLL);
  if ( *((_BYTE *)this + 186) )
  {
    v19 = *((_DWORD *)this + 972);
    if ( v19 )
    {
      DXGADAPTER::VmBusSendCloseAdapter(this, v19);
      *((_DWORD *)this + 972) = 0;
    }
    DXGADAPTER::VmBusSendAdapterStop(this);
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((struct VMBCHANNEL__ **)this + 484);
  }
  v20 = *((unsigned int *)this + 50);
  if ( (_DWORD)v20 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v20);
    *((_DWORD *)this + 50) = -1;
  }
  v21 = *((_QWORD *)this + 24);
  if ( v21 )
  {
    DpiReportAdapter(v21, (__int64)this);
    if ( bTracingEnabled )
    {
      v22 = *((_DWORD *)this + 415);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v23 = (unsigned int)v22 >> 14;
        LOBYTE(v23) = v23 & 7;
        Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
          v23,
          &EventDestroyAdapter,
          v22 < 0,
          *((_QWORD *)this + 24),
          (char)this,
          v2,
          *((_QWORD *)this + 201),
          *((_DWORD *)this + 404),
          *((_QWORD *)this + 203),
          *((_DWORD *)this + 408),
          *((_DWORD *)this + 409),
          *((_DWORD *)this + 411),
          *((_DWORD *)this + 412),
          *((_DWORD *)this + 413),
          *((_DWORD *)this + 416),
          *((_DWORD *)this + 410),
          *((_DWORD *)this + 414),
          v22,
          ((unsigned int)v22 >> 10) & 0xF,
          v23,
          ((unsigned int)v22 >> 17) & 7,
          v22 < 0,
          *((_DWORD *)this + 417),
          *((_DWORD *)this + 418),
          v25,
          *((_DWORD *)this + 420),
          *((_DWORD *)this + 421),
          v26,
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
  if ( *((_BYTE *)this + 186) )
  {
    v24 = DXGGLOBAL::GetGlobal(v21, v20, v17, v18);
    DXGGLOBAL::SetVirtualRenderAdapter(v24, 0LL);
  }
}
