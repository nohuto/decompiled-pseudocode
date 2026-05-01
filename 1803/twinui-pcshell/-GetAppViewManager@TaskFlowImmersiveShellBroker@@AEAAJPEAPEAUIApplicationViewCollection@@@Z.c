/*
 * XREFs of ?GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z @ 0x1801A49B4
 * Callers:
 *     _lambda_d635cc18682befb9f716ac46036b0176_::operator() @ 0x1801A2FE4 (_lambda_d635cc18682befb9f716ac46036b0176_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::GetAppViewManager(
        TaskFlowImmersiveShellBroker *this,
        struct IApplicationViewCollection **a2)
{
  HRESULT v3; // eax
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = this;
  try
  {
    *a2 = 0LL;
    v8 = 0LL;
    v3 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v8);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        748LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, struct IApplicationViewCollection **))(*(_QWORD *)v8 + 24LL))(
           v8,
           &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
           &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
           a2);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        749LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F0,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v5);
  }
  return result;
}
