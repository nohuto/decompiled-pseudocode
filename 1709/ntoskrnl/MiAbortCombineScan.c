/*
 * XREFs of MiAbortCombineScan @ 0x1400ED698
 * Callers:
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiInitializeMdlPfn @ 0x1400CAAD8 (MiInitializeMdlPfn.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MiInitializeDynamicPfns @ 0x14021464C (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x14022870C (MiCompleteSecureProcessFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPageCombiningActive @ 0x1400ED77C (MiPageCombiningActive.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  unsigned __int64 v5; // r10

  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    v2 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140388A80);
    v3 = (_QWORD *)(v2 + 5296);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v5 = i[7];
        if ( (*(_BYTE *)v5 & 1) != 0 )
        {
          *(_QWORD *)v5 = 0LL;
          if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v5, 0LL);
          KeFlushSingleTb((__int64)(v5 << 25) >> 16, 0, 1u);
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388A80);
  }
}
