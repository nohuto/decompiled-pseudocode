/*
 * XREFs of ?AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C009F7E0
 * Callers:
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C0144F34 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::AppendRetrievingBatches(
        DirectComposition::CConnection *this,
        struct DirectComposition::CBatch *a2)
{
  _QWORD **v2; // r8
  _QWORD *i; // rcx

  v2 = (_QWORD **)*((_QWORD *)this + 14);
  if ( v2 )
  {
    for ( i = *v2; i; i = (_QWORD *)*i )
      v2 = (_QWORD **)i;
    *v2 = a2;
  }
  else
  {
    *((_QWORD *)this + 14) = a2;
  }
}
