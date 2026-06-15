/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140019120
 * Callers:
 *     ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x140012350 (-CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CProcessSubmix>>,ATL::CComCreator<ATL::CComAggObject<CProcessSubmix>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CProcessSubmix>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CProcessSubmix>>::CreateInstance();
}
