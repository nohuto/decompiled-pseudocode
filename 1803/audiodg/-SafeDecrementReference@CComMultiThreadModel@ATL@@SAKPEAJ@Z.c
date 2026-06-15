/*
 * XREFs of ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D4E0
 * Callers:
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140012EB0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140014740 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015140 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400152D0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140015520 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140015680 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140015730 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x140031BC0 (-InternalRelease@-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140038A50 (-Release@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14003C2F0 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14003D580 (-Release@-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14003D620 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140043D50 (-Release@-$CComObject@VCVpoContext@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140052D70 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140052DF0 (-Release@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140059030 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x1400590B0 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComMultiThreadModel::SafeDecrementReference(int *a1)
{
  return ATL::SafeDecrementReferenceMultiThread(a1);
}
