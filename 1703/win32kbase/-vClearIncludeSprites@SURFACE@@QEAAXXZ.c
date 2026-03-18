/*
 * XREFs of ?vClearIncludeSprites@SURFACE@@QEAAXXZ @ 0x1C00EBA10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 */

void __fastcall SURFACE::vClearIncludeSprites(SURFACE *this)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 329) = 0;
}
