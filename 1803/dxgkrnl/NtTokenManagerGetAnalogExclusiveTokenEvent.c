/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0049CD0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000DF40 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 NtTokenManagerGetAnalogExclusiveTokenEvent()
{
  __int64 v0; // rcx
  int SessionTokenManager; // edi
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  KeEnterCriticalRegion();
  DXGGLOBAL::GetGlobal(v0);
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    v3 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v3);
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = _guard_dispatch_icall_fptr();
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( SessionTokenManager >= 0 )
    SessionTokenManager = -1073741811;
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
