/*
 * XREFs of RtlIsValidLocaleName @ 0x1800F4FC0
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x18006CBF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006D510 (RtlGetSystemPreferredUILanguages.c)
 *     sub_1800EC1D8 @ 0x1800EC1D8 (sub_1800EC1D8.c)
 * Callees:
 *     sub_1800462C0 @ 0x1800462C0 (sub_1800462C0.c)
 *     sub_180080990 @ 0x180080990 (sub_180080990.c)
 *     sub_1800F5104 @ 0x1800F5104 (sub_1800F5104.c)
 *     sub_1800F546C @ 0x1800F546C (sub_1800F546C.c)
 */

BOOLEAN __cdecl RtlIsValidLocaleName(PCWSTR LocaleName, ULONG Flags)
{
  char v2; // di
  int v4; // eax

  v2 = Flags;
  if ( LocaleName && (Flags & 0xFFFFFFFD) == 0 && (qword_18015C278 || sub_180080990()) )
  {
    v4 = sub_1800462C0((unsigned __int16 *)LocaleName);
    if ( v4 < 0 )
    {
      if ( (unsigned __int8)sub_1800F546C(LocaleName)
        && ((v2 & 2) != 0 || (int)sub_1800F5104(LocaleName, 0LL, 0LL, 0LL) >= 0) )
      {
        return 1;
      }
    }
    else
    {
      if ( (v2 & 2) != 0 )
        return 1;
      _mm_lfence();
      if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_18015C278 + 56)
                     * *(unsigned __int16 *)(*(_QWORD *)(qword_18015C278 + 32) + 8LL * v4 + 2)
                     + *(_QWORD *)(qword_18015C278 + 16)
                     + 24LL) & 1) != 0 )
        return 1;
    }
  }
  return 0;
}
