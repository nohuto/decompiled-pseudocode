/*
 * XREFs of strnlen @ 0x14018A290
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x1402B3004 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpSetProviderTraitsCommon @ 0x140591004 (EtwpSetProviderTraitsCommon.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405912A4 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x1407B0D2C (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Str )
  {
    if ( !*Str )
      break;
    ++result;
  }
  return result;
}
