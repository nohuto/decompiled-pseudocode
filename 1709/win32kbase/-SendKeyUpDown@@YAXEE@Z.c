/*
 * XREFs of ?SendKeyUpDown@@YAXEE@Z @ 0x1C012EF08
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012E988 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     InternalMapVirtualKeyEx @ 0x1C00582A0 (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     GetCurrentKbdTables @ 0x1C012EFB0 (GetCurrentKbdTables.c)
 */

void __fastcall SendKeyUpDown(unsigned __int8 a1, char a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 CurrentKbdTables; // rax
  _DWORD v6[8]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1;
  memset(v6, 0, sizeof(v6));
  HIWORD(v6[1]) = 0;
  v4 = (unsigned __int16)v3;
  *(_DWORD *)((char *)v6 + 2) = (unsigned __int16)v3 | 0x4000;
  if ( a2 )
  {
    LOWORD(v4) = v3 | 0xC000;
    HIWORD(v6[0]) = v3 | 0xC000;
  }
  CurrentKbdTables = GetCurrentKbdTables(0x4000LL, v4);
  if ( CurrentKbdTables )
    LOBYTE(v6[0]) = InternalMapVirtualKeyEx(v3, 0, CurrentKbdTables);
  xxxProcessKeyEvent((unsigned __int16 *)v6, 0LL, 1u, 0, 0LL);
}
