/*
 * XREFs of Uart16550SetBaud @ 0x1402CCCD0
 * Callers:
 *     Uart16550InitializePortCommon @ 0x1402CCA04 (Uart16550InitializePortCommon.c)
 * Callees:
 *     Uart16550SetBaudCommon @ 0x1402CCCF8 (Uart16550SetBaudCommon.c)
 */

char __fastcall Uart16550SetBaud(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return 0;
  else
    return Uart16550SetBaudCommon(a1, a2, 115200LL);
}
