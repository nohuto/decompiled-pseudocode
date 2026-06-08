/*
 * XREFs of RegisterHvCap @ 0x1C002B0D0
 * Callers:
 *     RegisterHvPerfStates @ 0x1C002BA10 (RegisterHvPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
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
  LODWORD(v2) = 52;
  if ( qword_1C0019840 )
    qword_1C0019840(&v2);
  return 0LL;
}
