/*
 * XREFs of ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C001BF30
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B1EC (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C001DD64 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenSharedResource(
        DirectComposition::CConnection **this,
        unsigned int a2,
        void *a3,
        __int64 a4,
        bool a5)
{
  unsigned int v6; // eax
  int inserted; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = a4;
  LOBYTE(a4) = a5;
  inserted = DirectComposition::CApplicationChannel::OpenInternalSharedResource(this, a3, v6, a4, &v10);
  if ( inserted >= 0 )
  {
    inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
                 (DirectComposition::CLinearObjectTableBase *)(this + 7),
                 v10,
                 a2);
    if ( inserted < 0 )
      DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v10);
  }
  return (unsigned int)inserted;
}
