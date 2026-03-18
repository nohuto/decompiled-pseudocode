/*
 * XREFs of MiFinishLastForkPageTable @ 0x140002EB4
 * Callers:
 *     MiFreeForkMaps @ 0x140001868 (MiFreeForkMaps.c)
 *     MiDoneWithThisPageGetAnother @ 0x140002DEC (MiDoneWithThisPageGetAnother.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  BOOL v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // si
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  v3 = 1;
  v4 = 48 * a2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
  v6 = (__int64)(v5 << 25) >> 16 << 25 >> 16;
  if ( v6 >= 0xFFFFF68000000000uLL )
    v3 = v6 > 0xFFFFF6FFFFFFFFFFuLL;
  v7 = MiLockPageInline(v4);
  MiRemoveLockedPageChargeAndDecRef(v4);
  if ( v3 )
  {
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      MiDecrementShareCount(v4);
    }
    else
    {
      v8 = (_QWORD *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL)
                    + 8LL * ((*(_DWORD *)(v4 + 8) >> 3) & 0x1FF));
      if ( (MI_READ_PTE_LOCK_FREE(v8) & 1) == 0 )
      {
        *v8 = MiMakeValidPte(v5, a2, 2147483652LL);
        if ( (unsigned int)MiPteInShadowRange(v8) )
          MiWritePteShadow(v10);
      }
      LOBYTE(v9) = 17;
      MiUnmapPageInHyperSpaceWorker(v8, v9, 0x80000000LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v7;
  __writecr8(v7);
  return result;
}
