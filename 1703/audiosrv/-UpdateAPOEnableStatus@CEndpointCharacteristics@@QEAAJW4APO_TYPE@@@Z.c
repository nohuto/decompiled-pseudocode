/*
 * XREFs of ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z @ 0x18000E550
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800043D8 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x180033158 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _Init_thread_footer @ 0x1800494C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180049528 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::UpdateAPOEnableStatus(__int64 a1, int a2)
{
  __int64 v2; // rsi
  int v4; // edi
  BOOL v5; // r15d
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v13; // rcx
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+38h] [rbp-8h]
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF

  v2 = a2;
  v4 = 0;
  v18 = 0LL;
  if ( dword_18012C420 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18012C420);
    if ( dword_18012C420 == -1 )
    {
      xmmword_18012BB84 = PKEY_Endpoint_LFX_FailCount;
      dword_18012BB94 = 9;
      xmmword_18012BB98 = PKEY_Endpoint_GFX_FailCount;
      dword_18012BBA8 = 8;
      xmmword_18012BBAC = PKEY_Endpoint_EFX_FailCount;
      dword_18012BBBC = 31;
      xmmword_18012BB34 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_18012BB44 = 33;
      xmmword_18012BB48 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_18012BB58 = 34;
      xmmword_18012BB5C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_18012BB6C = 35;
      Init_thread_footer(&dword_18012C420);
    }
  }
  v5 = 1;
  if ( *(_DWORD *)(a1 + 204) )
    goto LABEL_49;
  if ( !*(_DWORD *)(a1 + 200) )
    CEndpointCharacteristics::InitializeAPOInfo((CEndpointCharacteristics *)a1);
  if ( !*(_DWORD *)(a1 + 4 * v2 + 208) )
  {
LABEL_49:
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 32);
    if ( !v7 )
      goto LABEL_11;
    pvar = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      LOBYTE(v6) = (_DWORD)v15 == 1;
    }
    PropVariantClear(&pvar);
    if ( !v6 )
    {
LABEL_11:
      pvar = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v8 = 20 * v2;
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
             *(_QWORD *)(a1 + 32),
             &byte_18012BB70[v8],
             &pvar);
      if ( v4 < 0 )
        goto LABEL_23;
      if ( (_WORD)pvar == 19 && (unsigned int)v15 >= 0x64 )
        goto LABEL_36;
      PropVariantClear(&pvar);
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
             *(_QWORD *)(a1 + 32),
             &byte_18012BB20[v8],
             &pvar);
      if ( v4 < 0 )
        goto LABEL_23;
      if ( (_WORD)pvar == 19 && (unsigned int)v15 >= 0x64 )
      {
LABEL_36:
        ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>(
          &v17,
          *(void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 16));
        if ( !v17 )
          goto LABEL_23;
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 40LL))(v17, 2LL, &v18);
        if ( v4 < 0 )
        {
          v13 = v17;
          goto LABEL_39;
        }
        v16 = 0LL;
        pvar = (PROPVARIANT)19;
        v15 = 1LL;
        v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v18 + 48LL))(
               v18,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &pvar);
        if ( v4 < 0 )
        {
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          goto LABEL_23;
        }
        v4 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 48LL))(
               *(_QWORD *)(a1 + 32),
               &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
               &pvar);
        v13 = v17;
        if ( v4 < 0 )
        {
LABEL_39:
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          goto LABEL_23;
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      PropVariantClear(&pvar);
    }
  }
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    goto LABEL_17;
  pvar = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
         v9,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v5 = v15 == 0;
  }
  PropVariantClear(&pvar);
  if ( v5 )
  {
LABEL_17:
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
    {
      pvar = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
             v11,
             &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        LOBYTE(v10) = (_DWORD)v15 == 1;
      }
      PropVariantClear(&pvar);
      if ( v10 )
      {
        v16 = 0LL;
        pvar = (PROPVARIANT)19;
        v15 = 0LL;
        v4 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 48LL))(
               *(_QWORD *)(a1 + 32),
               &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
               &pvar);
        PropVariantClear(&pvar);
      }
    }
  }
LABEL_23:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v4;
}
