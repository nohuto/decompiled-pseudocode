/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1400BB318
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14003DFCC (MiUnlockNestedPageTableWritePte.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140052A30 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DBD80 (MiInsertNonPagedPoolOnSlist.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r10

  _InterlockedExchange64(a1, a2);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow(v3, v2, v4);
  return v5;
}
