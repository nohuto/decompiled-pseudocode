/*
 * XREFs of ?GetTopologyName@EndpointDevice@@UEAAJPEAPEAG@Z @ 0x1800E96A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@CComBSTR@ATL@@QEAAJPEAPEAG@Z @ 0x1800E92C4 (-CopyTo@CComBSTR@ATL@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall EndpointDevice::GetTopologyName(LPCSTR *this, unsigned __int16 **a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
    ATL::CComBSTR::CopyTo(this + 16, a2);
  else
    return (unsigned int)-2147467261;
  return v2;
}
