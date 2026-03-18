/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  unsigned __int16 i; // si
  __int64 v3; // rax
  __int64 KcbAtLayerHeight; // rbx

  for ( i = 0; (__int16)i <= *(__int16 *)(a1 + 2) - 1; ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    ExAcquirePushLockSharedEx(KcbAtLayerHeight + 40, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(KcbAtLayerHeight + 48), 1u);
  }
  v3 = CmpGetKcbAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 2));
  return CmpLockKcbExclusive(v3);
}
