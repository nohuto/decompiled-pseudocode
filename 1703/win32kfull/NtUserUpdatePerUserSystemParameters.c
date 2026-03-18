/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C011A150
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v8[8]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  EtwActivityIdControl(3u, (LPGUID)&v8[1]);
  v8[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v8[3]) = 32;
  EnterCrit(0LL, 1LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1, (__int64)v8);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return updated;
}
