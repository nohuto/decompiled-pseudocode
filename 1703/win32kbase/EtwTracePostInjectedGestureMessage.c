/*
 * XREFs of EtwTracePostInjectedGestureMessage @ 0x1C00DA500
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Template_cpp @ 0x1C00DB414 (Template_cpp.c)
 */

void __fastcall EtwTracePostInjectedGestureMessage(_QWORD *a1, char a2)
{
  int v4; // r9d
  int v5; // edx
  int v6; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    Template_cpp(*a1, v5, v6, v4, *a1, a2);
  }
}
