/*
 * XREFs of ?GetEndpointName@EndpointDevice@@UEAAJPEAPEAG@Z @ 0x1800E9520
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??YCComBSTR@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800E90E8 (--YCComBSTR@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Append@CComBSTR@ATL@@QEAAJPEBGH@Z @ 0x1800E917C (-Append@CComBSTR@ATL@@QEAAJPEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::GetEndpointName(BSTR *this, unsigned __int16 **a2)
{
  unsigned int v4; // ebx
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  BSTR v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v9 = 0LL;
  if ( a2 )
  {
    ATL::CComBSTR::operator+=(&v9, this + 6);
    v6 = -1LL;
    do
      ++v6;
    while ( asc_180121AAC[v6] );
    v7 = ATL::CComBSTR::Append(&v9, v5, v6);
    if ( v7 < 0 )
      ATL::AtlThrowImpl(v7);
    ATL::CComBSTR::operator+=(&v9, this + 7);
    *a2 = v9;
  }
  else
  {
    v4 = -2147467261;
  }
  SysFreeString(0LL);
  return v4;
}
