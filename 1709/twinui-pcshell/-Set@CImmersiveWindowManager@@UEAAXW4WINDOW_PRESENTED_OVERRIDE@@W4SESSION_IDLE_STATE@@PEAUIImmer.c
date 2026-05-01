/*
 * XREFs of ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x180030500
 * Callers:
 *     <none>
 * Callees:
 *     ?CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DB64 (-CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x180030C64 (-_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplication.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_6363101253bf33f24c351b7ac39c5c85___ @ 0x180031054 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___-_ea_180031054.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveWindowManager::Set(const struct _GUID *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  void *v9; // rbx
  __int64 v10; // rcx
  void *v11; // rcx
  int v12; // [rsp+20h] [rbp-40h] BYREF
  void *v13; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  void *v17; // [rsp+50h] [rbp-10h]

  v14[1] = -2LL;
  v13 = 0LL;
  result = CImmersiveAppArray_CreateInstance(a1, &v13);
  if ( (int)result >= 0 )
  {
    v15[0] = a3;
    v15[1] = a2;
    v16 = a4;
    v9 = v13;
    v17 = v13;
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_6363101253bf33f24c351b7ac39c5c85___(
      &a1[2],
      v15);
    if ( v9 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    v14[0] = 0LL;
    (**(void (__fastcall ***)(void *, GUID *, _QWORD *))v13)(v13, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, v14);
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v14[0] + 24LL))(v14[0], &v12);
    if ( (int)result >= 0 && v12 )
      result = CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps(a1[-12].Data4, v13, a2);
    v10 = v14[0];
    if ( v14[0] )
    {
      v14[0] = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return result;
}
