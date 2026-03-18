/*
 * XREFs of ?bIncludeSprites@SURFACE@@QEAAHXZ @ 0x1C001FEB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

bool __fastcall SURFACE::bIncludeSprites(SURFACE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rcx
  bool result; // al

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  result = 0;
  if ( ThreadWin32Thread )
    return *(_BYTE *)(ThreadWin32Thread + 329) == 1;
  return result;
}
