/*
 * XREFs of EtwTraceEndSendMessage @ 0x1C007E5D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Template_cp @ 0x1C00DB394 (Template_cp.c)
 */

void __fastcall EtwTraceEndSendMessage(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    Template_cp(v3, &EndSendMessage, v4, v2, a1);
  }
}
