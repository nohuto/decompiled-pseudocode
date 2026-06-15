/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x18009DFF0
 * Callers:
 *     ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x18009D550 (-OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x18009D560 (-OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x18009D570 (-OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x18001892C (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x180098310 (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, const WCHAR *a2, int a3, int a4)
{
  __int64 v7; // r14
  int v8; // esi
  __int64 v9; // r11
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  TraceLoggingHProvider v12; // r10
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  ATL::CAtlException *v17; // rbx
  _QWORD *v18; // [rsp+30h] [rbp-C8h] BYREF
  int v19; // [rsp+38h] [rbp-C0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-B8h] BYREF
  char v21; // [rsp+48h] [rbp-B0h]
  __int64 v22; // [rsp+50h] [rbp-A8h]
  __int64 v23; // [rsp+58h] [rbp-A0h]
  ATL::CAtlException *v24; // [rsp+60h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-68h] BYREF
  int *v27; // [rsp+A0h] [rbp-58h]
  __int64 v28; // [rsp+A8h] [rbp-50h]
  __int64 *v29; // [rsp+B0h] [rbp-48h]
  __int64 v30; // [rsp+B8h] [rbp-40h]

  v23 = -2LL;
  v7 = a1;
  v22 = a1;
  v8 = 0;
  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       a1,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    v19 = a3;
    v27 = &v19;
    v28 = v9;
    LODWORD(v18) = a4;
    v29 = (__int64 *)&v18;
    v30 = v9;
    TlgWrite(v12, &unk_180144E89, v10, v11, 5u, &pData);
  }
  if ( a3 == 1 )
  {
    v13 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    v18 = v13;
    if ( v13 )
    {
      COnDeviceWorkItem::COnDeviceWorkItem(v13, (__int64)a2, 1);
      *v14 = &COnDeviceStateChangedWorkItem::`vftable';
      *((_DWORD *)v14 + 6) = a4;
    }
    else
    {
      v14 = 0LL;
    }
  }
  else
  {
    v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v15;
    if ( v15 )
      v14 = COnDeviceWorkItem::COnDeviceWorkItem(v15, (__int64)a2, a3);
    else
      v14 = 0LL;
  }
  v18 = v14;
  if ( !v14 )
    goto LABEL_19;
  if ( !*(_DWORD *)(v14[1] - 16LL) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v14)(v14, 1LL);
LABEL_19:
    v8 = -2147024882;
    goto LABEL_20;
  }
  if ( !*(_QWORD *)(v7 + 200) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v14)(v14, 1LL);
    return (unsigned int)v8;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 112);
  v21 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = 0;
  try
  {
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
      (__int64 **)(v7 + 152),
      (__int64 *)&v18);
  }
  catch ( ATL::CAtlException *v24 )
  {
    v17 = v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v18) = *(_DWORD *)v17;
    v8 = (int)v18;
    v7 = v22;
  }
  if ( v21 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v21 = 0;
  }
  (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(ThreadPool, *(_QWORD *)(v7 + 200));
LABEL_20:
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::QueueOnDeviceWorkItem", 1733, v8);
  return (unsigned int)v8;
}
