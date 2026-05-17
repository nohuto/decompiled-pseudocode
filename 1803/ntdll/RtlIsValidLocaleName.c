/*
 * XREFs of RtlIsValidLocaleName @ 0x1800F2550
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x1800759E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 *     sub_1800E81C8 @ 0x1800E81C8 (sub_1800E81C8.c)
 * Callees:
 *     sub_1800378F0 @ 0x1800378F0 (sub_1800378F0.c)
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 *     sub_180085FA8 @ 0x180085FA8 (sub_180085FA8.c)
 *     sub_1800F2694 @ 0x1800F2694 (sub_1800F2694.c)
 */

char __fastcall RtlIsValidLocaleName(unsigned __int16 *SourceString, int a2)
{
  char v2; // di
  int v4; // eax

  v2 = a2;
  if ( SourceString && (a2 & 0xFFFFFFFD) == 0 && (qword_18015D2B8 || sub_18007C3E8()) )
  {
    v4 = sub_1800378F0(SourceString);
    if ( v4 < 0 )
    {
      if ( sub_180085FA8(SourceString) && ((v2 & 2) != 0 || (int)sub_1800F2694(SourceString, 0LL, 0LL, 0LL) >= 0) )
        return 1;
    }
    else
    {
      if ( (v2 & 2) != 0 )
        return 1;
      _mm_lfence();
      if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_18015D2B8 + 56)
                     * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 32) + 8LL * v4 + 2)
                     + *(_QWORD *)(qword_18015D2B8 + 16)
                     + 24LL) & 1) != 0 )
        return 1;
    }
  }
  return 0;
}
