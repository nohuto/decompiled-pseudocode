/*
 * XREFs of AlpcGetMessageAttribute @ 0x180077B80
 * Callers:
 *     <none>
 * Callees:
 *     AlpcGetHeaderSize @ 0x180077BC0 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (AttributeFlag & Buffer->AllocatedAttributes) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & ~(2 * AttributeFlag - 1));
}
