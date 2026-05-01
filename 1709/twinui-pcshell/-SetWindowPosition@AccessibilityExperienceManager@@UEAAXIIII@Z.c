/*
 * XREFs of ?SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z @ 0x1801B0F10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AccessibilityExperienceManager::SetWindowPosition(
        AccessibilityExperienceManager *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  __int64 v5; // rcx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 30);
  v6[0] = a2;
  v6[1] = a4;
  v6[2] = a3;
  v6[3] = a5;
  if ( v5 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 64LL))(v5, v6);
}
