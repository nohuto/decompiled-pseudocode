/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C01239B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v6, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v6[1]);
  v6[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v6[3]) = 32;
  LOBYTE(v6[6]) = -1;
  EnterCrit(0LL, 1LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1, (__int64)v6);
  UserSessionSwitchLeaveCrit(v4, v3);
  return updated;
}
