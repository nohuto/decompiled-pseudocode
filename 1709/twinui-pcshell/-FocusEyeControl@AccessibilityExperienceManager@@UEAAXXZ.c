/*
 * XREFs of ?FocusEyeControl@AccessibilityExperienceManager@@UEAAXXZ @ 0x1801B1250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::FocusEyeControl(AccessibilityExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v5 = 0LL;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 24LL))(*((_QWORD *)this + 10)) < 0 )
      goto LABEL_10;
    v2 = v5;
  }
  v4 = *((_QWORD *)this + 30);
  if ( !v4 )
    goto LABEL_11;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v5) >= 0
    && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v5 + 24LL))(v5, &hWnd) >= 0 )
  {
    SetForegroundWindow(hWnd);
  }
LABEL_10:
  v2 = v5;
LABEL_11:
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
