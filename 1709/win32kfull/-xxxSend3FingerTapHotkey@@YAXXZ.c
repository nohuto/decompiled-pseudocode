/*
 * XREFs of ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01B3AAC
 * Callers:
 *     ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01B36D8 (-xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 *     Send3FingerTapHotkey @ 0x1C01B41F0 (Send3FingerTapHotkey.c)
 * Callees:
 *     xxxSendInput @ 0x1C009CEF0 (xxxSendInput.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void xxxSend3FingerTapHotkey(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentKbdTables; // rax
  __int64 v3; // rbx
  _DWORD v4[80]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[70] = 1;
  v4[60] = 1;
  v4[50] = 1;
  v4[40] = 1;
  v4[30] = 1;
  v4[20] = 1;
  v4[10] = 1;
  LOWORD(v4[42]) = 133;
  LOWORD(v4[32]) = 133;
  v4[0] = 1;
  LOWORD(v4[72]) = 91;
  LOWORD(v4[2]) = 91;
  LOWORD(v4[62]) = 17;
  LOWORD(v4[12]) = 17;
  LOWORD(v4[52]) = 16;
  LOWORD(v4[22]) = 16;
  CurrentKbdTables = GetCurrentKbdTables(v1, v0);
  v3 = CurrentKbdTables;
  if ( CurrentKbdTables )
  {
    HIWORD(v4[72]) = InternalMapVirtualKeyEx(91LL, 0LL, CurrentKbdTables);
    HIWORD(v4[2]) = HIWORD(v4[72]);
    HIWORD(v4[62]) = InternalMapVirtualKeyEx(17LL, 0LL, v3);
    HIWORD(v4[12]) = HIWORD(v4[62]);
    HIWORD(v4[52]) = InternalMapVirtualKeyEx(16LL, 0LL, v3);
    HIWORD(v4[22]) = HIWORD(v4[52]);
    HIWORD(v4[42]) = InternalMapVirtualKeyEx(133LL, 0LL, v3);
    HIWORD(v4[32]) = HIWORD(v4[42]);
  }
  v4[73] = 2;
  v4[63] = 2;
  v4[53] = 2;
  v4[43] = 2;
  xxxSendInput(8u, (__int64)v4);
}
