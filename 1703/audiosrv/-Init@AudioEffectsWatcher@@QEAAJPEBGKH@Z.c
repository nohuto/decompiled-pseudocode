/*
 * XREFs of ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180089170
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180088FB4 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033474 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800826D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800895B8 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18009C794 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioEffectsWatcher::Init(char *pv, const unsigned __int16 *a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  const unsigned __int16 **v10; // r14
  size_t v11; // r9
  int AliasedEndpointCharacteristics; // ebx
  signed int LastError; // eax
  int v14; // ebx
  HANDLE EventW; // rax
  PTP_WAIT ThreadpoolWait; // rax
  LONG lVal; // eax
  __int64 v19; // [rsp+28h] [rbp-59h]
  struct CEndpointCharacteristics *v20; // [rsp+48h] [rbp-39h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-29h] BYREF
  __int64 v23; // [rsp+70h] [rbp-11h]
  __int64 v24; // [rsp+78h] [rbp-9h] BYREF
  __int128 v25; // [rsp+80h] [rbp-1h]
  __int128 v26; // [rsp+90h] [rbp+Fh] BYREF

  v23 = -2LL;
  SecurityDescriptor = 0LL;
  v20 = 0LL;
  v25 = *(_OWORD *)(pv + 8);
  v26 = v25;
  EtwEventActivityIdControl(4LL, &v26);
  memset(&pvar, 0, sizeof(pvar));
  v10 = (const unsigned __int16 **)(pv + 24);
  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  AliasedEndpointCharacteristics = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, a2, v11, v19, (void **)pv + 3);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_21;
  *((_DWORD *)pv + 8) = a3;
  *((_DWORD *)pv + 9) = a4;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, char *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                                     *(_QWORD *)&g_DeviceEnumerator,
                                     a2,
                                     pv + 56);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_21;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:P(A;;GA;;;WD)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-1159816"
          "984-2199008581-497492991)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v14 = NtCreateWnfStateName(&v24, 3LL, 0LL);
    if ( v14 < 0 )
    {
LABEL_9:
      AliasedEndpointCharacteristics = v14 | 0x10000000;
      goto LABEL_21;
    }
    *(_QWORD *)(pv + 92) = v24;
    pv[88] = 1;
    AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(*v10, 0, &v20);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_21;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v20, 0) )
    {
      EventW = CreateEventW(0LL, 0, 0, 0LL);
      *((_QWORD *)pv + 25) = EventW;
      if ( !EventW )
        goto LABEL_6;
      ThreadpoolWait = CreateThreadpoolWait((PTP_WAIT_CALLBACK)AudioEffectsWatcher::EffectsChangedWaitCallback, pv, 0LL);
      *((_QWORD *)pv + 26) = ThreadpoolWait;
      if ( !ThreadpoolWait )
        goto LABEL_6;
      AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                 + 48LL))(
                                         *(_QWORD *)&g_DeviceEnumerator,
                                         pv);
      if ( AliasedEndpointCharacteristics < 0 )
        goto LABEL_21;
      pv[64] = 1;
      AliasedEndpointCharacteristics = CPolicyConfig::GetPropertyStoreProperty(
                                         *v10,
                                         1,
                                         &PKEY_AudioEndpoint_Disable_SysFx,
                                         &pvar);
      if ( AliasedEndpointCharacteristics < 0 )
        goto LABEL_21;
      lVal = 0;
      if ( pvar.vt == 19 )
        lVal = pvar.lVal;
      *((_DWORD *)pv + 17) = lVal;
      AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos((AudioEffectsWatcher *)pv);
      SetThreadpoolWait(*((PTP_WAIT *)pv + 26), *((HANDLE *)pv + 25), 0LL);
    }
    else
    {
      v14 = RtlPublishWnfStateData(*(_QWORD *)(pv + 92), 0LL, &unk_1800FD0D8, 16LL, 0LL);
      if ( v14 < 0 )
        goto LABEL_9;
    }
    AliasedEndpointCharacteristics = 0;
    goto LABEL_21;
  }
LABEL_6:
  LastError = GetLastError();
  AliasedEndpointCharacteristics = LastError;
  if ( LastError > 0 )
    AliasedEndpointCharacteristics = (unsigned __int16)LastError | 0x80070000;
LABEL_21:
  if ( v20 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v20 + 16LL))(v20);
  LocalFree(SecurityDescriptor);
  PropVariantClear((PROPVARIANT *)&pvar);
  EtwEventActivityIdControl(4LL, &v26);
  return (unsigned int)AliasedEndpointCharacteristics;
}
