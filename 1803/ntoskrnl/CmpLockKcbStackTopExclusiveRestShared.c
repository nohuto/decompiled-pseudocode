/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v2; // si
  __int64 v4; // rax
  __int64 KcbAtLayerHeight; // rbx

  v1 = (unsigned int)*(__int16 *)(a1 + 2);
  v2 = 0;
  if ( (int)v1 - 1 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
      ExAcquirePushLockSharedEx(KcbAtLayerHeight + 40, 0LL);
      _InterlockedAdd((volatile signed __int32 *)(KcbAtLayerHeight + 48), 1u);
      v1 = (unsigned int)*(__int16 *)(a1 + 2);
      ++v2;
    }
    while ( (__int16)v2 <= *(__int16 *)(a1 + 2) - 1 );
  }
  v4 = CmpGetKcbAtLayerHeight(a1, v1);
  return CmpLockKcbExclusive(v4);
}
