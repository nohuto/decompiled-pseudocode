/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1400562B4
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x1402652E4 (MiPerformFinalZeroing.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 *     MiAllocateDummyPage @ 0x14089BBF0 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  bool i; // zf
  unsigned __int64 v8; // rcx

  v4 = (unsigned __int64)(a2 & 0xF) << 56;
  if ( a3 == 1 )
  {
    result = v4 | *(_QWORD *)(a1 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 | v6 & 0xF0FFFFFFFFFFFFFFuLL, v6);
    for ( i = v6 == result; !i; i = v8 == result )
    {
      v8 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v4 | result & 0xF0FFFFFFFFFFFFFFuLL,
                 result);
    }
  }
  return result;
}
