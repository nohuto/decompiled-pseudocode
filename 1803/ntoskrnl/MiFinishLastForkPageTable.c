/*
 * XREFs of MiFinishLastForkPageTable @ 0x140142578
 * Callers:
 *     MiFreeForkMaps @ 0x140140BF4 (MiFreeForkMaps.c)
 *     MiDoneWithThisPageGetAnother @ 0x1401424AC (MiDoneWithThisPageGetAnother.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  BOOL v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 result; // rax
  unsigned __int64 *v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  v3 = 1;
  v4 = 48 * a2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
  v6 = (__int64)(v5 << 25) >> 16 << 25 >> 16;
  if ( v6 >= 0xFFFFF68000000000uLL )
    v3 = v6 > 0xFFFFF6FFFFFFFFFFuLL;
  v7 = MiLockPageInline(v4);
  MiRemoveLockedPageChargeAndDecRef(v4, v8, v9, v10);
  if ( v3 )
  {
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
    {
      v13 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v11)
                               + 8LL * ((*(_DWORD *)(v4 + 8) >> 3) & 0x1FF));
      if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v13) & 1) == 0 )
      {
        *v13 = MiMakeValidPte(v5, a2, 2147483652LL, v14);
        if ( MiPteInShadowRange((unsigned __int64)v13) )
          MiWritePteShadow(v16, v15, v17);
      }
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v13, 0x11u, 0x80000000);
    }
    else
    {
      MiDecrementShareCount(v4);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v7;
  __writecr8(v7);
  return result;
}
