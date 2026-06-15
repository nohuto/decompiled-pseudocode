/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>>,ATL::CComCreator<ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>>::CreateInstance();
}
