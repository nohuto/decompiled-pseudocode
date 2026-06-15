/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140039300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceExclusive>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceExclusive>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceExclusive>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceExclusive>>::CreateInstance();
}
