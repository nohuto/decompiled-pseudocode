/*
 * XREFs of RegisterHvCap @ 0x1C001ABE0
 * Callers:
 *     RegisterHvPerfStates @ 0x1C001A740 (RegisterHvPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegisterHvCap(_DWORD *a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  v3 = 0LL;
  HIDWORD(v2) = a1[12];
  LODWORD(v3) = a1[108];
  HIDWORD(v3) = a1[120];
  v4 = a1[176];
  LODWORD(v2) = 56;
  if ( qword_1C0011680 )
    qword_1C0011680(&v2);
  return 0LL;
}
