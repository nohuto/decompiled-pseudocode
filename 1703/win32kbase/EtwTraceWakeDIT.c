/*
 * XREFs of EtwTraceWakeDIT @ 0x1C008CCD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Template_cd @ 0x1C00DB1E4 (Template_cd.c)
 */

void __fastcall EtwTraceWakeDIT(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v5 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    else
      v5 = -1;
    LOBYTE(v4) = v5;
    Template_cd(v2, &EtwWakeDIT, v3, v4, a1);
  }
}
