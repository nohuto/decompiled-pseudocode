/*
 * XREFs of NtGdiDDCCIGetCapabilitiesStringLength @ 0x1C0249170
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C024860C (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetCapabilitiesStringLength(CMonitorAPI *a1, unsigned int *Address)
{
  int CapabilitiesStringLength; // ebx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  CapabilitiesStringLength = CMonitorAPI::DdcciGetCapabilitiesStringLength(a1, a1, &v5);
  if ( CapabilitiesStringLength >= 0 )
  {
    ProbeForWrite(Address, 4uLL, 1u);
    *Address = v5;
  }
  return (unsigned int)CapabilitiesStringLength;
}
