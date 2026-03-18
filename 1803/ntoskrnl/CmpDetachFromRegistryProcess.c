/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x1404A80D8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpDoQueryKeyName @ 0x1400080A0 (CmpDoQueryKeyName.c)
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x1408B7D44 (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall CmpDetachFromRegistryProcess(__int64 a1)
{
  return KiUnstackDetachProcess(a1, 0LL);
}
