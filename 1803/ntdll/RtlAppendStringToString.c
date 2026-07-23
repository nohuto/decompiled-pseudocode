/*
 * XREFs of RtlAppendStringToString @ 0x1800E5270
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendStringToString(PSTRING Destination, PSTRING Source)
{
  USHORT Length; // di
  __int64 v4; // rcx

  Length = Source->Length;
  if ( Source->Length )
  {
    v4 = Destination->Length;
    if ( (unsigned int)v4 + Length > Destination->MaximumLength )
      return -1073741789;
    memmove(&Destination->Buffer[v4], Source->Buffer, Length);
    Destination->Length += Length;
  }
  return 0;
}
