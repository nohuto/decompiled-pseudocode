/*
 * XREFs of SeCompareSigningLevelsForAuditableProcess @ 0x140456BE0
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x14051108C (MiValidateExistingImage.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeCompareSigningLevelsForAuditableProcess(__int64 a1, __int64 a2, char a3, char a4)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = a2;
  v5 = a1;
  LOBYTE(a2) = a4;
  LOBYTE(a1) = a3;
  result = SeCompareSigningLevels(a1, a2);
  if ( !(_DWORD)result && !v4 )
    return (*(unsigned __int8 *)(v5 + 1738) >> 3) & 1;
  return result;
}
