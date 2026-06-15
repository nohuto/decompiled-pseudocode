/*
 * XREFs of ?Rehash@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXI@Z @ 0x18007A63C
 * Callers:
 *     ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180014990 (-FreeNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@.c)
 *     ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x180014A3C (-NewNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x18001491C (-UpdateRehashThresholds@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CEleme.c)
 *     ?InitHashTable@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NI_N@Z @ 0x180014B1C (-InitHashTable@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTr.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800EC36C (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 */

void __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // r14
  void *v5; // rsi
  __int64 i; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v11; // [rsp+68h] [rbp+10h]
  void *v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h]

  v11 = a2;
  v2 = a2;
  v3 = a1;
  if ( !a2 )
  {
    v2 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(a1);
    v11 = v2;
  }
  if ( v2 != *(_DWORD *)(v3 + 16) )
  {
    if ( *(_QWORD *)v3 )
    {
      try
      {
        v4 = v2;
        v13 = v2;
        v5 = operator new(saturated_mul(v2, 8uLL));
        v12 = v5;
      }
      catch ( ... )
      {
        v3 = a1;
        v2 = v11;
        v5 = v12;
        v4 = v13;
      }
      if ( !v5 )
        ATL::AtlThrowImpl(-2147024882);
      memset(v5, 0, 8 * v4);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 16); i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)v3 + 8 * i);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v7 + 88);
            v9 = *(_DWORD *)(v7 + 96) % v2;
            *(_QWORD *)(v7 + 88) = *((_QWORD *)v5 + v9);
            *((_QWORD *)v5 + (unsigned int)v9) = v7;
            v7 = v8;
          }
          while ( v8 );
        }
      }
      operator delete(*(void **)v3);
      *(_QWORD *)v3 = v5;
      *(_DWORD *)(v3 + 16) = v2;
      ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::UpdateRehashThresholds(v3);
    }
    else
    {
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::InitHashTable(
        (void **)v3,
        v2,
        0);
    }
  }
}
