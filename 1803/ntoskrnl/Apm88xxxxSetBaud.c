/*
 * XREFs of Apm88xxxxSetBaud @ 0x1402CD5E0
 * Callers:
 *     <none>
 * Callees:
 *     Uart16550SetBaudCommon @ 0x1402CCCF8 (Uart16550SetBaudCommon.c)
 */

char __fastcall Apm88xxxxSetBaud(__int64 a1, unsigned int a2)
{
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return 0;
  else
    return Uart16550SetBaudCommon(a1, a2, 0x2FAF08u);
}
