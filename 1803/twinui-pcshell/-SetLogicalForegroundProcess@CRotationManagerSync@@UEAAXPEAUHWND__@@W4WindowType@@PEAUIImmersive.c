/*
 * XREFs of ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180008AB0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18000877C (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180008800 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     ?HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z @ 0x180008DD8 (-HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::SetLogicalForegroundProcess(
        CRotationManagerSync *a1,
        HWND a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  void (__fastcall *v10)(CRotationManagerSync *); // rax
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 != 1 && !a4 )
    goto LABEL_14;
  v8 = *((_QWORD *)a1 + 11);
  if ( v8 )
  {
    *((_QWORD *)a1 + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( a3 == 1 )
  {
    dwProcessId = 0;
    GetWindowThreadProcessId(a2, &dwProcessId);
    CRotationManagerSync::_SetAutoRotationConfiguration(
      (CRotationManagerSync *)((char *)a1 - 72),
      dwProcessId,
      0LL,
      0LL);
LABEL_14:
    HonorBrightnessPreferencesForWindow(a2);
    return;
  }
  v9 = *((_QWORD *)a1 + 11);
  if ( v9 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
      v9 = *((_QWORD *)a1 + 11);
    }
    *((_QWORD *)a1 + 11) = a4;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)a1 + 32LL);
  if ( v10 == CRotationManagerSync::ReconcileModernOrientationPreferences )
    CRotationManagerSync::ReconcileModernOrientationPreferences(a1);
  else
    v10(a1);
}
