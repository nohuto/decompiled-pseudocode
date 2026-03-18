/*
 * XREFs of ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01B0810
 * Callers:
 *     ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01B02FC (-xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 *     Send4FingerTapHotkey @ 0x1C01B0E20 (Send4FingerTapHotkey.c)
 * Callees:
 *     xxxSendInput @ 0x1C003B1F0 (xxxSendInput.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void xxxSend4FingerTapHotkey(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentKbdTables; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  _DWORD v6[80]; // [rsp+20h] [rbp-E0h] BYREF

  memset(&v6[2], 0, 0x138uLL);
  v6[70] = 1;
  v6[60] = 1;
  v6[50] = 1;
  v6[40] = 1;
  v6[30] = 1;
  v6[20] = 1;
  v6[10] = 1;
  LOWORD(v6[42]) = 135;
  LOWORD(v6[32]) = 135;
  v6[0] = 1;
  LOWORD(v6[72]) = 91;
  LOWORD(v6[2]) = 91;
  LOWORD(v6[62]) = 17;
  LOWORD(v6[12]) = 17;
  LOWORD(v6[52]) = 16;
  LOWORD(v6[22]) = 16;
  CurrentKbdTables = GetCurrentKbdTables(v1, v0);
  v5 = CurrentKbdTables;
  if ( CurrentKbdTables )
  {
    HIWORD(v6[72]) = InternalMapVirtualKeyEx(91LL, 0LL, CurrentKbdTables);
    HIWORD(v6[2]) = HIWORD(v6[72]);
    HIWORD(v6[62]) = InternalMapVirtualKeyEx(17LL, 0LL, v5);
    HIWORD(v6[12]) = HIWORD(v6[62]);
    HIWORD(v6[52]) = InternalMapVirtualKeyEx(16LL, 0LL, v5);
    HIWORD(v6[22]) = HIWORD(v6[52]);
    HIWORD(v6[42]) = InternalMapVirtualKeyEx(135LL, 0LL, v5);
    HIWORD(v6[32]) = HIWORD(v6[42]);
  }
  v6[73] = 2;
  v6[63] = 2;
  v6[53] = 2;
  v6[43] = 2;
  xxxSendInput(8u, (__int64)v6, v3, v4);
}
