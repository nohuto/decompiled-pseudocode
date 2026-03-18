/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x14044E5F0
 * Callers:
 *     NtAllocateUuids @ 0x14044E440 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x14054C980 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1405D3600 (ExpUuidSaveSequenceNumber.c)
 */

__int64 ExpUuidSaveSequenceNumberIf()
{
  __int64 result; // rax

  result = 0LL;
  if ( ExpUuidSequenceNumberNotSaved == 1 )
  {
    result = ExpUuidSaveSequenceNumber();
    if ( (int)result >= 0 )
      ExpUuidSequenceNumberNotSaved = 0;
  }
  return result;
}
