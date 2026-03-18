/*
 * XREFs of MiFinishLastForkPageTable @ 0x1400CED2C
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x1400CEC64 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x1400D0710 (MiFreeForkMaps.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  BOOL v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // si
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 ValidPte; // rax
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
      v9 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL)
                              + 8LL * ((*(_DWORD *)(v4 + 8) >> 3) & 0x1FF));
      v10 = *v9;
      if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v10) = MiReadPteShadow(v9, *v9);
      if ( (v10 & 1) == 0 )
      {
        ValidPte = MiMakeValidPte(v5, a2, -2147483644);
        *v9 = ValidPte;
        v8 = 0xFFFFF6FB7DBED000uLL;
        if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL )
        {
          v8 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v9, ValidPte);
        }
      }
      LOBYTE(v8) = 17;
      MiUnmapPageInHyperSpaceWorker(v9, v8, 0x80000000LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v7;
  __writecr8(v7);
  return result;
}
