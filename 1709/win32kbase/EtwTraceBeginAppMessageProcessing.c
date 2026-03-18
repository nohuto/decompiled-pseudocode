/*
 * XREFs of EtwTraceBeginAppMessageProcessing @ 0x1C0073D90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cdqq @ 0x1C00E1DF8 (McTemplateK0cdqq.c)
 */

void __fastcall EtwTraceBeginAppMessageProcessing(char a1, char a2, __int64 a3)
{
  int v6; // r9d
  int v7; // edx
  int v8; // ecx

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1196);
    McTemplateK0cdqq(v8, v7, *(_DWORD *)(a3 + 8), v6, a1, a2, *(_DWORD *)(a3 + 8));
  }
}
