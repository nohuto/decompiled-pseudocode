/*
 * XREFs of strnlen @ 0x14016B760
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x14002D414 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1404F2520 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x1405C1A20 (EtwpAllocateEventNameFilter.c)
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
