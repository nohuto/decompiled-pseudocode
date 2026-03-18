/*
 * XREFs of ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180079550
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800C7EBC (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@.c)
 *     ??_ECD3DDeviceLevel1@@OBOI@EAAPEAXI@Z @ 0x1800D5F30 (--_ECD3DDeviceLevel1@@OBOI@EAAPEAXI@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801358F4 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180078EA0 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::`vector deleting destructor'(CD3DDeviceLevel1 *this, char a2)
{
  CD3DDeviceLevel1::~CD3DDeviceLevel1(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
