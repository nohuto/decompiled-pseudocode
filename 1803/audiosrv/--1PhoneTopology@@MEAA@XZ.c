/*
 * XREFs of ??1PhoneTopology@@MEAA@XZ @ 0x180057470
 * Callers:
 *     ??_GPhoneTopology@@MEAAPEAXI@Z @ 0x1800576A0 (--_GPhoneTopology@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreePlexes@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x180056BD0 (-FreePlexes@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@QEAAXXZ @ 0x180056F34 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhoneT.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x18009D484 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800F3AF4 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 *     ?FreeNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180118B3C (-FreeNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V.c)
 */

void __fastcall PhoneTopology::~PhoneTopology(PhoneTopology *this)
{
  char *v2; // rcx
  void **v3; // rbx
  void *v4; // rcx
  void *v5; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v7; // rcx
  __int64 i; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned int v11; // eax

  *(_QWORD *)this = &PhoneTopology::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology::`vftable'{for `CUnknown'};
  if ( *((_QWORD *)this + 5) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    *((_DWORD *)this + 46) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    SetThreadpoolWait(*((PTP_WAIT *)this + 5), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 5), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v2 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (void **)((char *)this + 192);
  ++*((_DWORD *)this + 60);
  v4 = (void *)*((_QWORD *)this + 24);
  v5 = v4;
  if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 52); i = (unsigned int)(i + 1) )
    {
      v9 = *((_QWORD *)v4 + i);
      v5 = v4;
      if ( v9 )
      {
        do
        {
          v10 = v9;
          v9 = *(_QWORD *)(v9 + 16);
          ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreeNode(
            (char *)this + 192,
            v10);
        }
        while ( v9 );
        v4 = *v3;
        v5 = *v3;
      }
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v5);
  *v3 = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  if ( !*((_DWORD *)this + 60) )
  {
    v11 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize((char *)this + 192);
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::InitHashTable(
      (char *)this + 192,
      v11,
      0LL);
  }
  ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreePlexes((__int64)this + 192);
  --*((_DWORD *)this + 60);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::RemoveAll((__int64)this + 96);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
