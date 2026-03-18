/*
 * XREFs of MiValidateZeroBits @ 0x1406B4D9C
 * Callers:
 *     NtCreateEnclave @ 0x1406BBE40 (NtCreateEnclave.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x14007D560 (RtlFindMostSignificantBit.c)
 */

__int64 __fastcall MiValidateZeroBits(ULONGLONG *a1)
{
  ULONGLONG v1; // rax

  v1 = *a1;
  if ( *a1 && (v1 < 0x20 ? (*a1 = v1 + 32) : (*a1 = 63 - RtlFindMostSignificantBit(*a1)), *a1 > 0x35) )
    return 3221225485LL;
  else
    return 0LL;
}
