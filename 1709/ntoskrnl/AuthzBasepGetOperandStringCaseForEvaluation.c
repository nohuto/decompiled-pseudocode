/*
 * XREFs of AuthzBasepGetOperandStringCaseForEvaluation @ 0x14011F3C0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140016D80 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14028DF34 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetOperandStringCaseForEvaluation(__int64 a1, bool *a2)
{
  __int64 v2; // rax

  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 56);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(a1 + 52) != 1 )
    {
      *a2 = (*(_DWORD *)(v2 + 36) & 2) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 36LL) & 2) != 0;
      goto LABEL_4;
    }
  }
  *a2 = *(_BYTE *)(v2 + 36) & 2;
LABEL_4:
  if ( KeGetCurrentIrql() < 2u || *a2 )
    return 0LL;
  else
    return 3221225659LL;
}
