/*
 * XREFs of EtwTraceEndRetrieveSendMessage @ 0x1C007FC40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cp @ 0x1C00E1E98 (McTemplateK0cp.c)
 */

void __fastcall EtwTraceEndRetrieveSendMessage(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1196);
    McTemplateK0cp(v3, &EndRetrieveSendMessage, v4, v2, a1);
  }
}
