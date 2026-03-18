/*
 * XREFs of NtTokenManagerThread @ 0x1C000C070
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000DF40 (DxgkGetSessionTokenManager.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(ULONG64 a1)
{
  char *v2; // r15
  _BYTE *v3; // rdi
  __int64 v4; // rsi
  int SessionTokenManager; // ebx
  unsigned int v6; // r14d
  size_t v7; // r8
  SIZE_T v9; // rax
  __int64 v10; // [rsp+30h] [rbp-E8h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-E0h]
  __int64 v12; // [rsp+48h] [rbp-D0h]
  unsigned int v13; // [rsp+50h] [rbp-C8h]
  _BYTE *v14; // [rsp+58h] [rbp-C0h]
  __int128 v15; // [rsp+60h] [rbp-B8h]
  __int64 v16; // [rsp+70h] [rbp-A8h]
  _BYTE P[128]; // [rsp+80h] [rbp-98h] BYREF

  v2 = 0LL;
  Src[0] = 0LL;
  Src[1] = 0LL;
  v12 = 0LL;
  memset(P, 0, 0x78uLL);
  v3 = P;
  v14 = P;
  v4 = 0LL;
  v10 = 0LL;
  DXGGLOBAL::GetGlobal();
  SessionTokenManager = 0;
  if ( !(unsigned int)_guard_dispatch_icall_fptr() )
    SessionTokenManager = -1073741790;
  if ( SessionTokenManager >= 0 && a1 )
  {
    if ( a1 + 24 < a1 || a1 + 24 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v15 = *(_OWORD *)a1;
    v16 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)Src = v15;
    v12 = v16;
    v2 = (char *)*((_QWORD *)&v15 + 1);
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager >= 0 && !(_DWORD)v12 )
    SessionTokenManager = -1073741811;
  KeEnterCriticalRegion();
  v6 = EtwpDisableStackWalkApc();
  v13 = v6;
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v10);
    v4 = v10;
    if ( SessionTokenManager >= 0 )
    {
      if ( (unsigned int)v12 > 5 )
      {
        v9 = 24LL * (unsigned int)v12;
        if ( !is_mul_ok((unsigned int)v12, 0x18uLL) )
          v9 = -1LL;
        v3 = operator new[](v9, 0x62634D54u, PagedPool);
        v14 = v3;
      }
      if ( v3 )
      {
        v7 = 24LL * (unsigned int)v12;
        if ( &v2[v7] < v2 || (unsigned __int64)&v2[v7] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v3, v2, v7);
      }
      else
      {
        SessionTokenManager = -1073741801;
      }
      if ( SessionTokenManager >= 0 )
        SessionTokenManager = _guard_dispatch_icall_fptr();
    }
  }
  if ( v3 && v3 != P )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    _guard_dispatch_icall_fptr();
  EtwpReenableStackWalkApc(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
