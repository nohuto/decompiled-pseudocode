/*
 * XREFs of ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x18018FFD4
 * Callers:
 *     ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801904B0 (-UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6AXXZ@Z @ 0x1801900E0 (-get@-$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::StopDirectorThread(LockScreenDirectorServiceProviderImpl *this)
{
  const struct _TlgProvider_t *v2; // rcx
  char *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<LockScreenServiceLogging>::get(
                                           this,
                                           lambda_63f7170bce12b7e543c3c21ebfae390d_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1803914BD, 0LL, 0LL, 2u, &pData);
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  if ( *((_QWORD *)this + 19) )
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 19);
  if ( this != (LockScreenDirectorServiceProviderImpl *)-144LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
  v3 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v3);
}
