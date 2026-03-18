/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x14057C2AC
 * Callers:
 *     ExUuidCreate @ 0x14052FD70 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x14057C100 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1406549CC (ExpUuidSaveSequenceNumber.c)
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
