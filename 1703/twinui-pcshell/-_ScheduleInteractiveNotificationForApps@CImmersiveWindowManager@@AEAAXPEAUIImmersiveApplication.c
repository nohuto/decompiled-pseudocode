/*
 * XREFs of ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x18002F458
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x18002ECF0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_497cdd3be1990e13318bbe793e150545___ @ 0x18002FAD8 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_497cdd3be1990e13318bbe793e150545___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int Ptr; // ebx
  IUnknown **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+58h] [rbp-8h]
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF

  v11[1] = -2LL;
  v16 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(**(_QWORD **)(a1 + 208) + 24LL))(
             *(_QWORD *)(a1 + 208),
             &SID_ImmersiveApplicationListeners,
             &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
             &v16);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v15);
    if ( (int)result >= 0 )
    {
      v11[2] = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v12 = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v13 = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v14 = (a3 != 2) + 13;
      Ptr = (int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
      v7 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_497cdd3be1990e13318bbe793e150545___(
                          v11,
                          &v12);
      result = Windows::Internal::ComTaskPool::RunTask(3, 2u, Ptr, 0, *v7, 0LL);
      v8 = v11[0];
      if ( v11[0] )
      {
        v11[0] = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v13 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v12 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( a2 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    }
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return result;
}
