/*
 * XREFs of CmpLockKcbStackExclusive @ 0x140472C1C
 * Callers:
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 */

void __fastcall CmpLockKcbStackExclusive(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbExclusive(KcbAtLayerHeight);
  }
}
