/*
 * XREFs of DbgkpLkmdSqmStatus @ 0x1406ADA70
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1406ACEEC (DbgkCaptureLiveDump.c)
 * Callees:
 *     DbgkpLkmdSqmIncrementDword @ 0x1401E64C8 (DbgkpLkmdSqmIncrementDword.c)
 */

NTSTATUS __fastcall DbgkpLkmdSqmStatus(REGHANDLE RegHandle, int *a2)
{
  if ( (a2[1] & 2) != 0 )
    DbgkpLkmdSqmIncrementDword(RegHandle, 3297);
  if ( (a2[1] & 8) != 0 )
    DbgkpLkmdSqmIncrementDword(RegHandle, 3298);
  if ( (a2[1] & 0x4000) != 0 )
    DbgkpLkmdSqmIncrementDword(RegHandle, 3294);
  if ( (a2[1] & 0x8000) != 0 )
    DbgkpLkmdSqmIncrementDword(RegHandle, 3295);
  if ( *a2 >= 0 )
    DbgkpLkmdSqmIncrementDword(RegHandle, 3296);
  return DbgkpLkmdSqmIncrementDword(RegHandle, 3293);
}
