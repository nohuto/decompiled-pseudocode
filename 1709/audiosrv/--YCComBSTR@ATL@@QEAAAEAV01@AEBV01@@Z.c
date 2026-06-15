/*
 * XREFs of ??YCComBSTR@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800E90E8
 * Callers:
 *     ?GetEndpointName@EndpointDevice@@UEAAJPEAPEAG@Z @ 0x1800E9520 (-GetEndpointName@EndpointDevice@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

BSTR *__fastcall ATL::CComBSTR::operator+=(BSTR *a1, BSTR *a2)
{
  OLECHAR *v2; // rdi
  OLECHAR *v4; // rcx
  HRESULT v5; // eax
  BSTR pbstrResult; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  if ( SysStringLen(*a2) )
  {
    v4 = *a1;
    pbstrResult = 0LL;
    v5 = VarBstrCat(v4, v2, &pbstrResult);
    if ( v5 < 0 )
      ATL::AtlThrowImpl(v5);
    SysFreeString(*a1);
    *a1 = pbstrResult;
  }
  return a1;
}
