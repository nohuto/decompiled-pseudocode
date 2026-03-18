/*
 * XREFs of DxgkAugmentCdsj @ 0x1C00ADBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADC20 (-Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall DxgkAugmentCdsj(struct _D3DKMT_AUGMENT_CDSJ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct CCD_BTL *v5; // rax
  __int64 v7; // rax

  if ( a1 )
  {
    v5 = CCD_BTL::Global();
    return CDS_JOURNAL::Augment((struct CCD_BTL *)((char *)v5 + 96), a1);
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
