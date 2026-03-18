/*
 * XREFs of AslRegWildcardFindFirst @ 0x1407DB388
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1407D64FC (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     AslStringDuplicate @ 0x1405FC890 (AslStringDuplicate.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslRegWildcardFindClose @ 0x1407DB308 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x1407DB450 (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x1407DB548 (AslpParsePattern.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, _QWORD *a2, const wchar_t *a3)
{
  PVOID v6; // rax
  PVOID v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  v6 = AslAlloc(a1, 0x20uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  memset(v6, 0, 0x20uLL);
  *((_QWORD *)v7 + 1) = v7;
  *(_QWORD *)v7 = v7;
  Next = AslStringDuplicate((wchar_t **)v7 + 3, a3);
  if ( Next >= 0 )
  {
    Next = AslpParsePattern(*((_QWORD *)v7 + 3), v7);
    if ( Next >= 0 )
    {
      *((_QWORD *)v7 + 2) = *(_QWORD *)v7;
      Next = AslRegWildcardFindNext(a1, v7);
      if ( Next >= 0 )
      {
        *a2 = v7;
        v7 = 0LL;
      }
    }
  }
  if ( v7 )
    AslRegWildcardFindClose((PVOID *)v7);
  return (unsigned int)Next;
}
