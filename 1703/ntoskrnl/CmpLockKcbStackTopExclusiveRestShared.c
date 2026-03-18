/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 * Callees:
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 v3; // rax
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; (__int16)i <= *(__int16 *)(a1 + 2) - 1; ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbShared(KcbAtLayerHeight);
  }
  v3 = CmpGetKcbAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 2));
  return CmpLockKcbExclusive(v3);
}
