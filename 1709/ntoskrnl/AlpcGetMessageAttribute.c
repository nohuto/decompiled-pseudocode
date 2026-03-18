/*
 * XREFs of AlpcGetMessageAttribute @ 0x1400AEC50
 * Callers:
 *     PopUmpoProcessMessages @ 0x1400AEC90 (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x1400B0618 (PopUmpoSendPowerMessage.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x1400AEDD0 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)~(2 * a2 - 1));
}
