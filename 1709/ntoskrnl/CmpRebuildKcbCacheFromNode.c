/*
 * XREFs of CmpRebuildKcbCacheFromNode @ 0x1404766A8
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpRebuildKcbCache @ 0x1405695C4 (CmpRebuildKcbCache.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 */

char __fastcall CmpRebuildKcbCacheFromNode(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int v4; // eax
  __int16 v5; // ax
  ULONG_PTR v6; // rdx

  *(_BYTE *)(BugCheckParameter3 + 57) = *(_BYTE *)(a2 + 13) & 3;
  CmpCleanUpSubKeyInfo(BugCheckParameter3);
  if ( (*(_DWORD *)(BugCheckParameter3 + 176) & 0x400000) == 0 )
  {
    CmpCleanUpKcbValueCache(BugCheckParameter3);
    v4 = *(_DWORD *)(a2 + 36);
    *(_QWORD *)(BugCheckParameter3 + 96) = *(unsigned int *)(a2 + 40);
    *(_DWORD *)(BugCheckParameter3 + 88) = v4;
  }
  *(_QWORD *)(BugCheckParameter3 + 160) = *(_QWORD *)(a2 + 4);
  *(_WORD *)(BugCheckParameter3 + 168) = *(_WORD *)(a2 + 52);
  *(_WORD *)(BugCheckParameter3 + 170) = *(_WORD *)(a2 + 60);
  *(_DWORD *)(BugCheckParameter3 + 172) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(BugCheckParameter3 + 176) ^= (*(_DWORD *)(BugCheckParameter3 + 176) ^ *(unsigned __int16 *)(a2 + 54)) & 0xF;
  *(_DWORD *)(BugCheckParameter3 + 176) ^= ((unsigned __int8)*(_DWORD *)(BugCheckParameter3 + 176) ^ (unsigned __int8)*(_WORD *)(a2 + 54)) & 0xF0;
  *(_BYTE *)(BugCheckParameter3 + 177) = *(_BYTE *)(a2 + 55);
  v5 = *(_WORD *)(a2 + 2);
  *(_WORD *)(BugCheckParameter3 + 178) = v5;
  v6 = *(unsigned int *)(a2 + 44);
  if ( (_DWORD)v6 == -1 )
    *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
  else
    LOBYTE(v5) = CmpAssignSecurityToKcb(BugCheckParameter3, v6, 0LL, 0, 0);
  return v5;
}
