/*
 * XREFs of AuthzBasepGetOperandStringCaseForEvaluation @ 0x140115998
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140263C04 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetOperandStringCaseForEvaluation(__int64 a1, bool *a2)
{
  __int64 v2; // rax
  bool v3; // al

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
  v3 = KeGetCurrentIrql() >= 2u;
  if ( !*a2 && v3 )
    return 3221225659LL;
  else
    return 0LL;
}
