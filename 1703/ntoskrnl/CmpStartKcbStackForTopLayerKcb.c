/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1404FC480
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14008BF10 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14043F980 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpIsKeyDeleted @ 0x1404D4010 (CmpIsKeyDeleted.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 *     CmCallbackGetKeyObjectID @ 0x1406601B0 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140662EF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpPopulateKcbStack @ 0x1404FC4C8 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1404FC4F8 (CmpStartKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // ebx

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 58));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
