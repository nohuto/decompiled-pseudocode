/*
 * XREFs of PepPlatformIdleVeto @ 0x1C000D90C
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C000E610 (PepDevicePowerControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepPlatformIdleVeto(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]

  if ( !Src && !qword_1C001AB18 && !qword_1C001AB20 )
    return 3221225659LL;
  v3 = 0LL;
  v4 = 0LL;
  HIDWORD(v3) = *(_DWORD *)a2;
  LODWORD(v4) = *(_DWORD *)(a2 + 4);
  BYTE4(v4) = *(_BYTE *)(a2 + 8);
  LODWORD(v3) = 56;
  return ((__int64 (__fastcall *)(__int64 *))qword_1C001A830)(&v3);
}
