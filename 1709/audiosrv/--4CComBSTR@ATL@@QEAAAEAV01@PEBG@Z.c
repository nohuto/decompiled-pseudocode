/*
 * XREFs of ??4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800E9094
 * Callers:
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x1800E96C8 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x1800E9BE4 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 *     ?SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z @ 0x1800EA3F0 (-SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
