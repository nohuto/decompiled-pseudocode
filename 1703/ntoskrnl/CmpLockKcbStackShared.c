/*
 * XREFs of CmpLockKcbStackShared @ 0x1404FF968
 * Callers:
 *     CmpQueryKeySecurity @ 0x14008BF10 (CmpQueryKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14043F980 (CmCallbackGetKeyObjectIDEx.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1406601B0 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140662EF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 */

void __fastcall CmpLockKcbStackShared(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbShared(KcbAtLayerHeight);
  }
}
