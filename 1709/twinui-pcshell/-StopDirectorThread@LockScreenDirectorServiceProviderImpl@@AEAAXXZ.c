/*
 * XREFs of ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1800E2184
 * Callers:
 *     ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E1840 (-UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@LockScreenServiceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800E060C (-Provider@LockScreenServiceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::StopDirectorThread(RTL_SRWLOCK *this)
{
  const struct _TlgProvider_t *v2; // rax
  PVOID Ptr; // rcx
  char *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = LockScreenServiceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_18025E581, 0LL, 0LL, 2u, &pData);
  AcquireSRWLockExclusive(this + 18);
  if ( this[19].Ptr )
  {
    Ptr = this[19].Ptr;
    if ( Ptr )
    {
      this[19].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
  }
  if ( this != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockExclusive(this + 18);
  v4 = (char *)this[16].Ptr;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v4);
}
