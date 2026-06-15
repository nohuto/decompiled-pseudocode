/*
 * XREFs of ?FindVal@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAHAEBQEAVCSystemAudioDeviceBase@@@Z @ 0x14003111C
 * Callers:
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x1400388E8 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::FindVal(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *i; // rcx

  result = 0LL;
  if ( (int)qword_14008A290 <= 0 )
    return 0xFFFFFFFFLL;
  v3 = *a2;
  for ( i = qword_14008A288; *i != v3; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( (int)result >= (int)qword_14008A290 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
