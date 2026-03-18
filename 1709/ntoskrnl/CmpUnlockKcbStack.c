/*
 * XREFs of CmpUnlockKcbStack @ 0x14047EA68
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1400188C0 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14047D9D0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmCallbackGetKeyObjectID @ 0x140689100 (CmCallbackGetKeyObjectID.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 */

void __fastcall CmpUnlockKcbStack(__int64 a1)
{
  unsigned __int16 i; // bx
  ULONG_PTR KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpUnlockKcb(KcbAtLayerHeight);
  }
}
