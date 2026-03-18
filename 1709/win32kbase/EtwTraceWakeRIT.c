/*
 * XREFs of EtwTraceWakeRIT @ 0x1C0095E40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cq @ 0x1C00E1CE8 (McTemplateK0cq.c)
 */

void __fastcall EtwTraceWakeRIT(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1196);
    else
      LOBYTE(v4) = -1;
    McTemplateK0cq(v2, &EtwWakeRIT, v3, v4, a1);
  }
}
