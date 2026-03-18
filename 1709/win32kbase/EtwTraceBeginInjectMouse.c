/*
 * XREFs of EtwTraceBeginInjectMouse @ 0x1C0093090
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cddd @ 0x1C00E1D60 (McTemplateK0cddd.c)
 */

void __fastcall EtwTraceBeginInjectMouse(char a1, char a2, char a3)
{
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1196);
    McTemplateK0cddd(v7, (unsigned int)&BeginInjectMouse, v8, v6, a1, a2, a3);
  }
}
