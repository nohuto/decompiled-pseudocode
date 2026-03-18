/*
 * XREFs of DxgkAugmentCdsj @ 0x1C00E1920
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00E12AC (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall DxgkAugmentCdsj(struct D3DKMT_AUGMENT_CDSJ *a1)
{
  struct CCD_BTL *v2; // rax
  __int64 v4; // rax

  if ( a1 )
  {
    v2 = CCD_BTL::Global((__int64)a1);
    return CDS_JOURNAL::Augment((struct CCD_BTL *)((char *)v2 + 96), a1);
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
