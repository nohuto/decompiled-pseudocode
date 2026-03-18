/*
 * XREFs of ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0002D44
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C009FEC4 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00ABA00 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B4E1C (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitShift(DXGADAPTERSOURCEHASH *this)
{
  unsigned int v2; // edi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v2 = 32 - *((_DWORD *)this + 15);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
  return v2;
}
