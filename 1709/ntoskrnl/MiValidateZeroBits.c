/*
 * XREFs of MiValidateZeroBits @ 0x1406E0DA4
 * Callers:
 *     NtCreateEnclave @ 0x1406E9454 (NtCreateEnclave.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x14011BEC0 (RtlFindMostSignificantBit.c)
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
