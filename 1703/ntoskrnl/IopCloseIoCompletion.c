/*
 * XREFs of IopCloseIoCompletion @ 0x140429130
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x140011200 (IopDeleteIoCompletionInternal.c)
 */

void __fastcall IopCloseIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = a2;
  if ( a4 == 1 )
  {
    LOBYTE(a2) = 1;
    IopDeleteIoCompletionInternal(v4, a2);
  }
}
