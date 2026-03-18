/*
 * XREFs of EtwTraceConvertTimeOutToBlocking @ 0x1C0098660
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 */

void EtwTraceConvertTimeOutToBlocking()
{
  __int64 v0; // r9
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v0) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    Template_c(v2, v1, v3, v0);
  }
}
