/*
 * XREFs of EtwTraceEndInjectMouse @ 0x1C008C500
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Template_cddd @ 0x1C00DB264 (Template_cddd.c)
 */

void __fastcall EtwTraceEndInjectMouse(char a1, char a2, char a3)
{
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    Template_cddd(v7, (unsigned int)&EndInjectMouse, v8, v6, a1, a2, a3);
  }
}
