/*
 * XREFs of EtwTraceEndDelegatedInputWorker @ 0x1C00A21D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpttttttpppqqq @ 0x1C00E25A4 (McTemplateK0cpttttttpppqqq.c)
 */

void __fastcall EtwTraceEndDelegatedInputWorker(char a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1196);
    else
      LOBYTE(v4) = -1;
    McTemplateK0cpttttttpppqqq(v2, (unsigned int)&EndDelegatedInputWorker, v3, v4, a1);
  }
}
