/*
 * XREFs of NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C0049A60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000DF40 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveSurfaceUpdates(int a1, __int64 a2, int a3, _DWORD *a4, int *a5)
{
  int v6; // r15d
  __int64 v7; // rcx
  int SessionTokenManager; // r14d
  __int64 v9; // rsi
  int i; // ecx
  __int64 v13; // [rsp+48h] [rbp-3A0h] BYREF
  int v14; // [rsp+50h] [rbp-398h]
  int v15; // [rsp+58h] [rbp-390h]
  __int64 v16; // [rsp+60h] [rbp-388h]
  __int64 v17; // [rsp+68h] [rbp-380h]
  _DWORD *v18; // [rsp+70h] [rbp-378h]
  int *v19; // [rsp+78h] [rbp-370h]

  v16 = a2;
  v14 = a1;
  v17 = a2;
  v15 = a3;
  v18 = a4;
  v19 = a5;
  v6 = 0;
  v13 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v13);
  if ( SessionTokenManager >= 0 && (DXGGLOBAL::GetGlobal(v7), (unsigned int)_guard_dispatch_icall_fptr()) )
  {
    v6 = 1;
    v9 = v13;
    for ( i = a3; i && v6; i = a3 )
      v6 = _guard_dispatch_icall_fptr();
  }
  else
  {
    SessionTokenManager = -1073741790;
    v9 = v13;
  }
  if ( v9 )
    _guard_dispatch_icall_fptr();
  KeLeaveCriticalRegion();
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = 0;
  if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a5 = v6;
  return (unsigned int)SessionTokenManager;
}
