/*
 * XREFs of MiAbortCombineScan @ 0x140051BE8
 * Callers:
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiInitializeMdlPfn @ 0x1400B3814 (MiInitializeMdlPfn.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiInitializeDynamicPfns @ 0x140252AC0 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1402618AC (MiCompleteSecureProcessFault.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // r10
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r10

  if ( dword_1403CBD04 )
  {
    v2 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_1403CBD00);
    v3 = (_QWORD *)(v2 + 6384);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v5 = (_QWORD *)i[7];
        if ( (*(_BYTE *)v5 & 1) != 0 )
        {
          v6 = i[7];
          *v5 = ZeroPte;
          if ( MiPteInShadowRange(v6) )
            MiWritePteShadow(v8, v7);
          KeFlushSingleTb(v9 << 25 >> 16, 0, 1u);
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CBD00);
  }
}
