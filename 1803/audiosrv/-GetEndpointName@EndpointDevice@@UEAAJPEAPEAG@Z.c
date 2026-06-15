/*
 * XREFs of ?GetEndpointName@EndpointDevice@@UEAAJPEAPEAG@Z @ 0x180118160
 * Callers:
 *     <none>
 * Callees:
 *     ??YCComBSTR@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180118048 (--YCComBSTR@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::GetEndpointName(BSTR *this, unsigned __int16 **a2)
{
  unsigned int v3; // ebx
  BSTR v5; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v5 = 0LL;
  if ( a2 )
  {
    ATL::CComBSTR::operator+=(&v5, this + 6);
    *a2 = v5;
  }
  else
  {
    v3 = -2147467261;
  }
  SysFreeString(0LL);
  return v3;
}
