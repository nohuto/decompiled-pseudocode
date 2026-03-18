/*
 * XREFs of ?SendKeyUpDown@@YAXEE@Z @ 0x1C012F69C
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012F118 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1C0033890 (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     GetCurrentKbdTables @ 0x1C012F7A0 (GetCurrentKbdTables.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 */

void __fastcall SendKeyUpDown(unsigned __int8 a1, char a2)
{
  unsigned int v3; // edi
  __int64 CurrentKbdTables; // rax
  _DWORD v5[8]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1;
  memset(v5, 0, sizeof(v5));
  HIWORD(v5[1]) = 0;
  *(_DWORD *)((char *)v5 + 2) = (unsigned __int16)v3 | 0x4000;
  if ( a2 )
    HIWORD(v5[0]) = v3 | 0xC000;
  CurrentKbdTables = GetCurrentKbdTables();
  if ( CurrentKbdTables )
    LOBYTE(v5[0]) = InternalMapVirtualKeyEx(v3, 0, CurrentKbdTables);
  xxxProcessKeyEvent((unsigned int)v5, 0, 1, 0, 0LL);
}
