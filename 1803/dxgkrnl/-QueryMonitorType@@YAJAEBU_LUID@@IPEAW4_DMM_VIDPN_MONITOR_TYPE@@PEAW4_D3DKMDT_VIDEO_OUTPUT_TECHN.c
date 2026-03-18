/*
 * XREFs of ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C01C6EAC
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01C7A90 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall QueryMonitorType(
        const struct _LUID *a1,
        unsigned int a2,
        enum _DMM_VIDPN_MONITOR_TYPE *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8,
        unsigned __int8 *a9)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v12; // rax
  DXGADAPTER *v13; // rdi
  int MonitorTypeLockHeld; // ebx
  unsigned __int64 v16; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v18[32]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v19[40]; // [rsp+88h] [rbp-30h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v16);
  v13 = v12;
  if ( !v12 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v12, 0LL);
  MonitorTypeLockHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
  DXGADAPTER::ReleaseReferenceNoTracking(v13);
  if ( MonitorTypeLockHeld >= 0 )
    MonitorTypeLockHeld = DxgkQueryMonitorTypeLockHeld(
                            v13,
                            a2,
                            (__int64)a5,
                            (__int64)a6,
                            (__int64)a7,
                            (__int64)a8,
                            (__int64)a9);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  return (unsigned int)MonitorTypeLockHeld;
}
