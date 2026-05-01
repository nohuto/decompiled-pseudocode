/*
 * XREFs of ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x180014FE8
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180014630 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180014B94 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180010DD4 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x1800150B4 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        CApplicationManager *a1,
        __int64 a2,
        HWND a3,
        char a4,
        unsigned int a5)
{
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct IImmersiveMonitor *v13; // rcx
  struct IImmersiveMonitor *v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[1] = (struct IImmersiveMonitor *)-2LL;
  v14[0] = 0LL;
  CApplicationManager::_MonitorFromWindow(a1, a3, v14);
  v8 = (__int64 *)*((_QWORD *)a1 + 59);
  v9 = *v8;
  if ( a4 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, struct IImmersiveMonitor *))(v9 + 24))(
               v8,
               a2,
               a5,
               0LL,
               v14[0]);
    v12 = 3LL;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IImmersiveMonitor *))(v9 + 32))(v8, a2, v14[0]);
    v12 = 2LL;
  }
  v13 = v14[0];
  if ( (_BYTE)result && v14[0] )
  {
    result = CApplicationManager::_TryPresentDesktopExperience(a1, a2, v12, v14[0]);
    v13 = v14[0];
  }
  if ( v13 )
  {
    v14[0] = 0LL;
    return (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64, __int64))(*(_QWORD *)v13 + 16LL))(
             v13,
             v11,
             v12);
  }
  return result;
}
