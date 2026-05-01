/*
 * XREFs of ?SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z @ 0x180259C70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x180257800 (CreationThreadDispatcher--RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___.c)
 */

void __fastcall AccessibilityExperienceManager::SetWindowPosition(
        AccessibilityExperienceManager *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rcx
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-41h]
  __int128 v12; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-11h]
  _DWORD v14[4]; // [rsp+60h] [rbp-1h] BYREF

  v6 = *((_QWORD *)this + 29);
  v14[0] = a2;
  v14[1] = a4;
  v14[2] = a3;
  v14[3] = a5;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 64LL))(v6, v14);
    v10 = *((_QWORD *)this + 18);
    *(_QWORD *)&v11 = (char *)this - 152;
    *((_QWORD *)&v11 + 1) = __PAIR64__(a3, a2);
    v12 = v11;
    v13 = __PAIR64__(a5, a4);
    CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___(v10, (volatile int *)&v12);
  }
}
