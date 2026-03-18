/*
 * XREFs of NtTokenManagerOpenSectionAndEvents @ 0x1C0049DF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000DF40 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtTokenManagerOpenSectionAndEvents(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v6; // rbx
  __int64 v8; // rcx
  int SessionTokenManager; // esi
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]

  v6 = a2;
  v12 = 0LL;
  KeEnterCriticalRegion();
  DXGGLOBAL::GetGlobal(v8);
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    v11 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v11);
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = _guard_dispatch_icall_fptr();
      _guard_dispatch_icall_fptr();
      v6 = a2;
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( a1 && v6 && a3 && a4 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = -1LL;
    if ( v6 + 1 < v6 || (unsigned __int64)(v6 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v6 = v12;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = -1LL;
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = -1LL;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
