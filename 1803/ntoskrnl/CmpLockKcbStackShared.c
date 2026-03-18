/*
 * XREFs of CmpLockKcbStackShared @ 0x1404A8434
 * Callers:
 *     CmpQueryKeySecurity @ 0x140007C08 (CmpQueryKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A53D0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1406ED4C0 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1406F09E4 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1406F0CB4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 */

void __fastcall CmpLockKcbStackShared(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 KcbAtLayerHeight; // rbx

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    ExAcquirePushLockSharedEx(KcbAtLayerHeight + 40, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(KcbAtLayerHeight + 48), 1u);
  }
}
