/*
 * XREFs of _lambda_4d9498deded80cfab1ff9f78bf19bcab_::__lambda_4d9498deded80cfab1ff9f78bf19bcab_ @ 0x18012E450
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D894 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ??_G?$XamlExplorerHostWindowCreatedCallback@V_lambda_4d9498deded80cfab1ff9f78bf19bcab_@@@@UEAAPEAXI@Z @ 0x180131940 (--_G-$XamlExplorerHostWindowCreatedCallback@V_lambda_4d9498deded80cfab1ff9f78bf19bcab_@@@@UEAAPE.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$10 @ 0x1801A1058 (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$10.c)
 * Callees:
 *     ??1MonitorFrameCreated@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18012B858 (--1MonitorFrameCreated@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_4d9498deded80cfab1ff9f78bf19bcab_::__lambda_4d9498deded80cfab1ff9f78bf19bcab_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  XamlSwitcherTelemetry::MonitorFrameCreated::~MonitorFrameCreated((XamlSwitcherTelemetry::MonitorFrameCreated *)(a1 + 7));
  v2 = a1[6];
  if ( v2 )
  {
    a1[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[5];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = a1[4];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[1];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
