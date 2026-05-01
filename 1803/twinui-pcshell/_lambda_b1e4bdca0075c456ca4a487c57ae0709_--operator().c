/*
 * XREFs of _lambda_b1e4bdca0075c456ca4a487c57ae0709_::operator() @ 0x180008E28
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___::operator() @ 0x180008270 (CDelayIAMOperations--CDelayedOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___--operator().c)
 * Callees:
 *     ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x180016F00 (-GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004C330 (-GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18004C6F0 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_b1e4bdca0075c456ca4a487c57ae0709_::operator()(_QWORD *a1)
{
  CImmersiveApp *v2; // rcx
  __int64 (__fastcall *v3)(CImmersiveApp *__hidden, struct IApplicationFrameProxy **); // rax
  int FrameInternal; // eax
  __int64 (__fastcall *v5)(CApplicationFrameWrapper *__hidden, HWND *); // rax
  int v6; // eax
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, __int64, int *, _QWORD); // rax
  __int64 v9; // rcx
  struct IApplicationFrameProxy *v10; // rcx
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  struct IApplicationFrameProxy *v12; // [rsp+68h] [rbp+20h] BYREF
  int v13; // [rsp+70h] [rbp+28h] BYREF
  int v14; // [rsp+74h] [rbp+2Ch]
  HWND v15; // [rsp+78h] [rbp+30h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v2 = (CImmersiveApp *)a1[1];
  v3 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IApplicationFrameProxy **))(*(_QWORD *)v2 + 496LL);
  if ( v3 == CImmersiveApp::GetFrameInternal )
    FrameInternal = CImmersiveApp::GetFrameInternal(v2, &v12);
  else
    FrameInternal = v3(v2, &v12);
  if ( FrameInternal >= 0 )
  {
    v5 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *__hidden, HWND *))(*(_QWORD *)v12 + 24LL);
    v6 = v5 == CApplicationFrameWrapper::GetFrameWindow
       ? CApplicationFrameWrapper::GetFrameWindow(v12, &v15)
       : v5(v12, &v15);
    if ( v6 >= 0 )
    {
      v11 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**(_QWORD **)(*a1 + 552LL) + 88LL))(
             *(_QWORD *)(*a1 + 552LL),
             v15,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &v11) >= 0 )
      {
        v13 = *(_DWORD *)(*a1 + 824LL);
        v14 = 0;
        v7 = a1[1];
        v8 = *(void (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)v7 + 456LL);
        if ( (char *)v8 == (char *)CImmersiveApp::SetMonitorInternal )
          CImmersiveApp::SetMonitorInternal(v7, v11, &v13, 0LL);
        else
          v8(v7, v11, &v13, 0LL);
      }
      v9 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
