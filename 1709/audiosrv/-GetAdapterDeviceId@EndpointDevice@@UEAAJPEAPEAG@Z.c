/*
 * XREFs of ?GetAdapterDeviceId@EndpointDevice@@UEAAJPEAPEAG@Z @ 0x1800E9460
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@CComBSTR@ATL@@QEAAJPEAPEAG@Z @ 0x1800E92C4 (-CopyTo@CComBSTR@ATL@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall EndpointDevice::GetAdapterDeviceId(LPCSTR *this, unsigned __int16 **a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
    ATL::CComBSTR::CopyTo(this + 15, a2);
  else
    return (unsigned int)-2147467261;
  return v2;
}
