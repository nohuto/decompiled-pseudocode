/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C0248684
 * Callers:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C024860C (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C024857C (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEAAEXZ @ 0x1C0248FC0 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEAAEXZ.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(
        CPhysicalMonitorHandle *this,
        unsigned int *a2)
{
  int CapabilitiesStringInternal; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(CPhysicalMonitorHandle *))(*(_QWORD *)this + 16LL))(this) )
  {
    return (unsigned int)-1071774323;
  }
  else
  {
    CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(this);
    if ( CapabilitiesStringInternal >= 0 )
    {
      CAutoMutex::CAutoMutex((CAutoMutex *)&v6, (CPhysicalMonitorHandle *)((char *)this + 72));
      if ( CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(this) )
        *a2 = *((_DWORD *)this + 22);
      else
        CapabilitiesStringInternal = -1071774323;
      CAutoMutex::~CAutoMutex((CAutoMutex *)&v6);
    }
  }
  return (unsigned int)CapabilitiesStringInternal;
}
