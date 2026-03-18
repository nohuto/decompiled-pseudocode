/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8
 * Callers:
 *     CmpQueryKeySecurity @ 0x140007C08 (CmpQueryKeySecurity.c)
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A53D0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x14054F614 (CmpReportNotify.c)
 *     CmpDoWritethroughReparse @ 0x1405529F0 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1406ED4C0 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1406F09E4 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1406F0CB4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F5E54 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmpPopulateKcbStack @ 0x1404A5C10 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1404A5CCC (CmpStartKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // ebx

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 58));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
