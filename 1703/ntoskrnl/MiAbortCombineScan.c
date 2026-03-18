/*
 * XREFs of MiAbortCombineScan @ 0x140103628
 * Callers:
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiInitializeMdlPfn @ 0x14007AD08 (MiInitializeMdlPfn.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MiInitializeDynamicPfns @ 0x14020D5A0 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x14021BE20 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPageCombiningActive @ 0x1401036F8 (MiPageCombiningActive.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r10

  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    v2 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_14036C700);
    v3 = (_QWORD *)(v2 + 5160);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v5 = (_QWORD *)i[7];
        if ( (*(_BYTE *)v5 & 1) != 0 )
        {
          v6 = i[7];
          *v5 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v6) )
            MiWritePteShadow(v7);
          KeFlushSingleTb(v8 << 25 >> 16, 0LL, 1LL);
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C700);
  }
}
