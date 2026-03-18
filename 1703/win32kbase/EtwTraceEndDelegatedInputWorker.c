/*
 * XREFs of EtwTraceEndDelegatedInputWorker @ 0x1C0098180
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Template_cpttttttpppqqq @ 0x1C00DBAF8 (Template_cpttttttpppqqq.c)
 */

void __fastcall EtwTraceEndDelegatedInputWorker(char a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  char v5; // al

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v5 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    else
      v5 = -1;
    LOBYTE(v4) = v5;
    Template_cpttttttpppqqq(v2, (unsigned int)&EndDelegatedInputWorker, v3, v4, a1);
  }
}
