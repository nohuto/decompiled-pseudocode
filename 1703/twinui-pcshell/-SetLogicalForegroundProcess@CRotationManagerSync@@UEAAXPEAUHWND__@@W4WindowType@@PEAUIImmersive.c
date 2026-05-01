/*
 * XREFs of ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800396B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x180039EDC (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z @ 0x180173A0C (-HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotationManagerSync::SetLogicalForegroundProcess(_QWORD *a1, HWND a2, int a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v10; // rcx
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 != 1 && !a4 )
    return HonorBrightnessPreferencesForWindow(a2);
  v8 = a1[11];
  if ( v8 )
  {
    a1[11] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( a3 == 1 )
  {
    dwProcessId = 0;
    GetWindowThreadProcessId(a2, &dwProcessId);
    CRotationManagerSync::_SetAutoRotationConfiguration(
      (CRotationManagerSync *)(a1 - 7),
      dwProcessId,
      0LL,
      ORIENTATION_PREFERENCE_NONE);
    return HonorBrightnessPreferencesForWindow(a2);
  }
  if ( a1[11] != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v10 = a1[11];
    a1[11] = a4;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
}
