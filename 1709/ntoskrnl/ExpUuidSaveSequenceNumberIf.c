/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x14059D77C
 * Callers:
 *     NtAllocateUuids @ 0x140449620 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x14050B7E0 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1405F1644 (ExpUuidSaveSequenceNumber.c)
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
