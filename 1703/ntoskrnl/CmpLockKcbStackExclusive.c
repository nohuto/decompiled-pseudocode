/*
 * XREFs of CmpLockKcbStackExclusive @ 0x1404CFFD8
 * Callers:
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
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
