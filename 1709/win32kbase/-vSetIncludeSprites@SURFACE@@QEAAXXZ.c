/*
 * XREFs of ?vSetIncludeSprites@SURFACE@@QEAAXXZ @ 0x1C001FF20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

void __fastcall SURFACE::vSetIncludeSprites(SURFACE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    *(_BYTE *)(ThreadWin32Thread + 329) = 1;
}
