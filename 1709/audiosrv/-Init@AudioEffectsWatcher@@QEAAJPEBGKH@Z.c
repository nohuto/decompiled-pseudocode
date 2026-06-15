/*
 * XREFs of ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x18000C0A4
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180009EF4 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180008324 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180008A84 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x18000BBF0 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180020320 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioEffectsWatcher::Init(AudioEffectsWatcher *this, const unsigned __int16 *a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  const unsigned __int16 **v10; // r14
  unsigned __int64 v11; // r9
  int PropertyStoreProperty; // ebx
  int v13; // ebx
  __int64 (__fastcall *v14)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  const unsigned __int16 *v15; // rdx
  int AliasedEndpointCharacteristics; // eax
  HANDLE EventW; // rax
  PTP_WAIT ThreadpoolWait; // rax
  LONG lVal; // eax
  void (*v20)(void); // rax
  signed int LastError; // eax
  __int64 v23; // [rsp+28h] [rbp-59h]
  struct CEndpointCharacteristics *v24; // [rsp+48h] [rbp-39h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-29h] BYREF
  __int64 v27; // [rsp+70h] [rbp-11h]
  __int64 v28; // [rsp+78h] [rbp-9h] BYREF
  __int128 v29; // [rsp+80h] [rbp-1h]
  __int128 v30; // [rsp+90h] [rbp+Fh] BYREF

  v27 = -2LL;
  SecurityDescriptor = 0LL;
  v24 = 0LL;
  v29 = *(_OWORD *)((char *)this + 8);
  v30 = v29;
  EtwEventActivityIdControl(4LL, &v30);
  memset(&pvar, 0, sizeof(pvar));
  v10 = (const unsigned __int16 **)((char *)this + 24);
  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  PropertyStoreProperty = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, a2, v11, v23, (unsigned __int16 **)this + 3);
  if ( PropertyStoreProperty < 0 )
    goto LABEL_19;
  *((_DWORD *)this + 8) = a3;
  *((_DWORD *)this + 9) = a4;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, char *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                              + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a2,
                            (char *)this + 56);
  if ( PropertyStoreProperty < 0 )
    goto LABEL_19;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:P(A;;GA;;;WD)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-115981"
           "6984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
    goto LABEL_24;
  v13 = NtCreateWnfStateName(&v28, 3LL, 0LL, 0LL, 0LL, 1600, SecurityDescriptor);
  if ( v13 < 0 )
  {
LABEL_26:
    PropertyStoreProperty = v13 | 0x10000000;
    goto LABEL_19;
  }
  *(_QWORD *)((char *)this + 92) = v28;
  *((_BYTE *)this + 88) = 1;
  v14 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  v15 = *v10;
  if ( v14 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       g_pEndpointCharacteristicsCache,
                                       v15,
                                       0,
                                       &v24);
  else
    AliasedEndpointCharacteristics = v14(g_pEndpointCharacteristicsCache, v15, 0, &v24);
  PropertyStoreProperty = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_19;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v24, eHostProcessConnector) )
  {
    v13 = RtlPublishWnfStateData(*(_QWORD *)((char *)this + 92), 0LL, &unk_180114088, 16LL, 0LL);
    if ( v13 >= 0 )
    {
LABEL_18:
      PropertyStoreProperty = 0;
      goto LABEL_19;
    }
    goto LABEL_26;
  }
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 25) = EventW;
  if ( !EventW
    || (ThreadpoolWait = CreateThreadpoolWait(AudioEffectsWatcher::EffectsChangedWaitCallback, this, 0LL),
        (*((_QWORD *)this + 26) = ThreadpoolWait) == 0LL) )
  {
LABEL_24:
    LastError = GetLastError();
    PropertyStoreProperty = LastError;
    if ( LastError > 0 )
      PropertyStoreProperty = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_19;
  }
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, AudioEffectsWatcher *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                   + 48LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            this);
  if ( PropertyStoreProperty >= 0 )
  {
    *((_BYTE *)this + 64) = 1;
    PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(*v10, 1u, &PKEY_AudioEndpoint_Disable_SysFx, &pvar);
    if ( PropertyStoreProperty >= 0 )
    {
      lVal = 0;
      if ( pvar.vt == 19 )
        lVal = pvar.lVal;
      *((_DWORD *)this + 17) = lVal;
      AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(this);
      SetThreadpoolWait(*((PTP_WAIT *)this + 26), *((HANDLE *)this + 25), 0LL);
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v24 )
  {
    v20 = *(void (**)(void))(*(_QWORD *)v24 + 16LL);
    if ( (char *)v20 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release();
    else
      v20();
  }
  LocalFree(SecurityDescriptor);
  PropVariantClear((PROPVARIANT *)&pvar);
  EtwEventActivityIdControl(4LL, &v30);
  return (unsigned int)PropertyStoreProperty;
}
