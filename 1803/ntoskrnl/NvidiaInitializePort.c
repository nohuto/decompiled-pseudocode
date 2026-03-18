/*
 * XREFs of NvidiaInitializePort @ 0x1402CC620
 * Callers:
 *     <none>
 * Callees:
 *     Uart16550InitializePortCommon @ 0x1402CCA04 (Uart16550InitializePortCommon.c)
 */

char __fastcall NvidiaInitializePort(int a1, __int64 a2, char a3)
{
  if ( !a3 )
    return 0;
  *(_WORD *)(a2 + 12) = 1;
  return Uart16550InitializePortCommon(a1, a2, a3, 1, 32);
}
