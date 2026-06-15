/*
 * XREFs of ??4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z @ 0x180057EBC
 * Callers:
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180057950 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x180057C90 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

BSTR *__fastcall ATL::CComBSTR::operator=(BSTR *a1, const OLECHAR *a2)
{
  BSTR v4; // rax

  if ( a2 != *a1 )
  {
    SysFreeString(*a1);
    if ( a2 )
    {
      v4 = SysAllocString(a2);
      *a1 = v4;
      if ( !v4 )
        ATL::AtlThrowImpl(-2147024882);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return a1;
}
