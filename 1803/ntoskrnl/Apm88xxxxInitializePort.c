/*
 * XREFs of Apm88xxxxInitializePort @ 0x1402CD5B0
 * Callers:
 *     <none>
 * Callees:
 *     Uart16550InitializePortCommon @ 0x1402CCA04 (Uart16550InitializePortCommon.c)
 */

bool __fastcall Apm88xxxxInitializePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  *(_WORD *)(a2 + 12) = 0;
  return Uart16550InitializePortCommon(a1, a2, a3, a4, 32);
}
