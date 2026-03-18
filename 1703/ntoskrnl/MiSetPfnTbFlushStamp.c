/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x14010EB3C
 * Callers:
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 *     MiPerformFinalZeroing @ 0x14021F1F8 (MiPerformFinalZeroing.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, __int64 a2, int a3)
{
  char v3; // r9
  signed __int64 v5; // rdx
  unsigned __int64 v6; // r9
  signed __int64 result; // rax
  bool i; // zf
  signed __int64 v9; // rcx

  v3 = a2;
  if ( a3 == 1 )
  {
    result = 0xF00000000000000LL;
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ (a2 << 56)) & 0xF00000000000000LL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = (unsigned __int64)(v3 & 0xF) << 56;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v6 | v5 & 0xF0FFFFFFFFFFFFFFuLL, v5);
    for ( i = v5 == result; !i; i = v9 == result )
    {
      v9 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v6 | result & 0xF0FFFFFFFFFFFFFFuLL,
                 result);
    }
  }
  return result;
}
