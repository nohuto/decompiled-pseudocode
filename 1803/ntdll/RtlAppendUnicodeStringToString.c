/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180040250
 * Callers:
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18003FFC8 @ 0x18003FFC8 (sub_18003FFC8.c)
 *     sub_1800400E0 @ 0x1800400E0 (sub_1800400E0.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_18004F58C @ 0x18004F58C (sub_18004F58C.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     sub_180080B70 @ 0x180080B70 (sub_180080B70.c)
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D48E4 @ 0x1800D48E4 (sub_1800D48E4.c)
 *     sub_1800D51FC @ 0x1800D51FC (sub_1800D51FC.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     sub_1800ECD38 @ 0x1800ECD38 (sub_1800ECD38.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  USHORT Length; // si
  unsigned __int64 v4; // rcx
  WCHAR *v5; // r14

  Length = Source->Length;
  if ( !Source->Length )
    return 0;
  v4 = Destination->Length;
  if ( (unsigned int)v4 + Length <= Destination->MaximumLength )
  {
    v5 = &Destination->Buffer[v4 >> 1];
    memmove(v5, Source->Buffer, Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v5[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
