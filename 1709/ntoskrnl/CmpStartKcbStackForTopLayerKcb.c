/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0
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
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpIsKeyDeleted @ 0x140569BB0 (CmpIsKeyDeleted.c)
 *     CmpDoWritethroughReparse @ 0x140581B10 (CmpDoWritethroughReparse.c)
 *     CmCallbackGetKeyObjectID @ 0x140689100 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpPopulateKcbStack @ 0x14047EA38 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x140481B10 (CmpStartKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // ebx

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 58));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
