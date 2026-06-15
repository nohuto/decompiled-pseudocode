/*
 * XREFs of ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180056B78
 * Callers:
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800329A0 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0CConstraintModel@@QEAA@XZ @ 0x180055C80 (--0CConstraintModel@@QEAA@XZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180055D1C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??0PhoneTopology@@IEAA@XZ @ 0x1800575CC (--0PhoneTopology@@IEAA@XZ.c)
 *     ??0DynamicAudioEndpointManager@@IEAA@XZ @ 0x180059D60 (--0DynamicAudioEndpointManager@@IEAA@XZ.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x18005E5AC (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x18005F5B4 (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ??0TelephonyController@@IEAA@XZ @ 0x18011A12C (--0TelephonyController@@IEAA@XZ.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x180056B04 (-UpdateRehashThresholds@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CEleme.c)
 */

__int64 __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5)
{
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 28) = a5;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(float *)(a1 + 20) = a3;
  *(float *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 16) = 17;
  *(_DWORD *)(a1 + 52) = 10;
  ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::UpdateRehashThresholds(a1);
  return v5;
}
