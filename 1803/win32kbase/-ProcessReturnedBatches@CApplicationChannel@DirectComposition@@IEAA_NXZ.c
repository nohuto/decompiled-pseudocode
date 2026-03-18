/*
 * XREFs of ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00160C8
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C000ACA0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C000AF64 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000BF60 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C000C130 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C0015624 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0017AA0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C014633C (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 * Callees:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0046E58 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::ProcessReturnedBatches(union _SLIST_HEADER *this)
{
  char v2; // si
  PSLIST_ENTRY v3; // rdi
  ULONGLONG v5; // rax

  v2 = 0;
  KeResetEvent(*(PRKEVENT *)(this[13].Region + 8));
  v3 = ExpInterlockedPopEntrySList(this + 12);
  if ( v3 )
  {
    v2 = 1;
    do
    {
      --*((_DWORD *)&this[14].HeaderX64 + 1);
      v5 = *((_QWORD *)&v3[4].Next + 1);
      if ( v5 > this[14].Region )
      {
        LOBYTE(this[15].Alignment) |= 2u;
        this[14].Region = v5;
      }
      DirectComposition::CBatch::Clear((DirectComposition::CBatch *)v3);
      v3->Next = (struct _SLIST_ENTRY *)this[11].Region;
      this[11].Region = (ULONGLONG)v3;
      v3 = ExpInterlockedPopEntrySList(this + 12);
    }
    while ( v3 );
  }
  return v2;
}
