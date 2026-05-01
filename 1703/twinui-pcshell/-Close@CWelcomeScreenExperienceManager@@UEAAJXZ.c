/*
 * XREFs of ?Close@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B3470
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B0FD0 (-Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWelcomeScreenExperienceManager::Close(CWelcomeScreenExperienceManager *this)
{
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = WelcomeScreenExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
    TlgWrite(v3, &unk_1801FBD08, 0LL, 0LL, 2u, &pData);
  return 0LL;
}
