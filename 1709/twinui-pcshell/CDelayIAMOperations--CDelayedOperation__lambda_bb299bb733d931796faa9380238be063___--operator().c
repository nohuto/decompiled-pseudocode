/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator() @ 0x18001ABF0
 * Callers:
 *     <none>
 * Callees:
 *     CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___ @ 0x1800195BC (CIAMGlobals--QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___.c)
 *     ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18001DF0C (-PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z.c)
 *     ?Instance@IamTraceLogging@@KAPEAV1@XZ @ 0x18001E080 (-Instance@IamTraceLogging@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator()(
        __int64 a1)
{
  HWND ForegroundWindow; // rax
  HWND v3; // rcx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  IamTraceLogging *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 40))(
    *(_QWORD *)(a1 + 40),
    &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
    &v8);
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow
    || (v3 = *(HWND *)(a1 + 24), ForegroundWindow == v3)
    && ForegroundWindow == *(HWND *)(a1 + 32)
    && *(HWND *)(*(_QWORD *)(a1 + 16) + 776LL) != v3
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 416LL))(v8) )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v9 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___(v4, &v9);
    v5 = (_DWORD *)*((_QWORD *)IamTraceLogging::Instance() + 1);
    if ( v5 && *v5 )
    {
      IamTraceLogging::Instance();
      IamTraceLogging::PendingActivation_(v6, *(HWND *)(a1 + 24));
    }
  }
  v7 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
