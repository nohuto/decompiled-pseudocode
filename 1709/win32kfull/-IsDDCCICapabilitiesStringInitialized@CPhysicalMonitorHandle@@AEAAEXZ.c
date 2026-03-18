/*
 * XREFs of ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEAAEXZ @ 0x1C024A9C4
 * Callers:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C0249A1C (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0249B18 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C024A070 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(CPhysicalMonitorHandle *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 22) )
    return *((_QWORD *)this + 10) != 0LL;
  return result;
}
