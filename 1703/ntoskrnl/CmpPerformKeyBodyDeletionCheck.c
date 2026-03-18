/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1404FCE78
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14008BF10 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  char IsKeyDeletedForKeyBody; // al
  unsigned int v4; // edx

  IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, a2);
  v4 = 0;
  if ( IsKeyDeletedForKeyBody )
    return (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
  return v4;
}
