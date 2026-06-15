/*
 * XREFs of ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x180063940
 * Callers:
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x180016F10 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x1800B5068 (-InternalRelease@-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ.c)
 *     ?Release@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1800EE5A0 (-Release@-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1800EE640 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1800EE6C0 (-Release@-$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComMultiThreadModel::SafeDecrementReference(int *a1)
{
  return ATL::SafeDecrementReferenceMultiThread(a1);
}
