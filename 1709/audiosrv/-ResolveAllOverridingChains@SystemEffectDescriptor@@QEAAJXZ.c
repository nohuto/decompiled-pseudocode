/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800233B0
 * Callers:
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18002153C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800216F8 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022310 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180022BF0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002362C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 * Callees:
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180020164 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x1800BD508 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains(SystemEffectDescriptor *this)
{
  SystemEffectDescriptor *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  SystemEffectDescriptor **v3; // rsi
  __int64 v4; // r14
  int v5; // ebp
  int v6; // r15d
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  SystemEffectDescriptor **v10; // r12
  volatile signed __int32 *v11; // r13
  int v12; // r15d
  SystemEffectDescriptor **v13; // r12
  SystemEffectChainDescriptor **v15; // rax
  int v16; // eax
  SystemEffectDescriptor **v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+80h] [rbp+8h]
  _QWORD *v21; // [rsp+88h] [rbp+10h]
  SystemEffectDescriptor *v22; // [rsp+88h] [rbp+10h]

  v1 = this;
  if ( !*((_BYTE *)this + 52) )
    return 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v3 = 0LL;
  v17 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( *((int *)v1 + 10) > 0 )
  {
    v7 = 0LL;
    v20 = 0LL;
    do
    {
      if ( v7 < 0 || v6 >= *((_DWORD *)v1 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800525D3LL);
      }
      v8 = (_QWORD *)(v7 + *((_QWORD *)v1 + 4));
      v21 = v8;
      if ( (_DWORD)v4 == v5 )
      {
        if ( v5 )
        {
          v5 = 2 * v4;
          if ( (v4 & 0x40000000) != 0 )
            goto LABEL_38;
        }
        else
        {
          v5 = 1;
        }
        if ( (unsigned __int64)v5 > 0x7FFFFFF || (v9 = _o__recalloc(v3, v5, 16LL)) == 0 )
        {
LABEL_38:
          v5 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            -2);
          goto LABEL_25;
        }
        HIDWORD(v18) = v5;
        v3 = (SystemEffectDescriptor **)v9;
        v17 = (SystemEffectDescriptor **)v9;
        v7 = v20;
        v8 = v21;
      }
      v10 = &v3[2 * (int)v4];
      if ( v10 )
      {
        *v10 = 0LL;
        v10[1] = 0LL;
        v11 = (volatile signed __int32 *)v8[1];
        v22 = (SystemEffectDescriptor *)*v8;
        if ( v11 )
        {
          _InterlockedIncrement(v11 + 2);
          v5 = HIDWORD(v18);
          LODWORD(v4) = v18;
          v3 = v17;
        }
        if ( v10[1] )
        {
          std::_Ref_count_base::_Decref(v10[1]);
          v7 = v20;
        }
        v10[1] = (SystemEffectDescriptor *)v11;
        *v10 = v22;
      }
      v4 = (unsigned int)(v4 + 1);
      LODWORD(v18) = v4;
      ++v6;
      v7 += 16LL;
      v20 = v7;
    }
    while ( v6 < *((_DWORD *)v1 + 10) );
  }
  v12 = 0;
  if ( (int)v4 <= 0 )
  {
LABEL_24:
    v5 = 0;
  }
  else
  {
    v13 = v3;
    while ( 1 )
    {
      if ( v12 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_43;
      }
      if ( *((_BYTE *)*v13 + 20) )
      {
        v15 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                (__int64)&v17,
                                                v12);
        v16 = SystemEffectChainDescriptor::Resolve(*v15, v1);
        v5 = v16;
        if ( v16 < 0 )
          break;
      }
      ++v12;
      v13 += 2;
      if ( v12 >= (int)v4 )
        goto LABEL_24;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v16,
      -2);
  }
LABEL_25:
  if ( v3 )
  {
    if ( (int)v4 > 0 )
    {
      ++v3;
      do
      {
        v1 = *v3;
        if ( *v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 2, 0xFFFFFFFF) == 1 )
        {
LABEL_43:
          (**(void (__fastcall ***)(SystemEffectDescriptor *))v1)(v1);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(SystemEffectDescriptor *))(*(_QWORD *)v1 + 8LL))(v1);
        }
        v3 += 2;
        --v4;
      }
      while ( v4 );
      v3 = v17;
    }
    free(v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v5;
}
