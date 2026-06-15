/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010540
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D390 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E24 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033474 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800334D4 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18007B524 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains(SystemEffectDescriptor *this)
{
  SystemEffectDescriptor *v1; // rbx
  SystemEffectDescriptor **v2; // rsi
  __int64 v3; // rdi
  volatile signed __int32 *v4; // r14
  int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // rax
  std::_Ref_count_base *v8; // rcx
  SystemEffectDescriptor **v9; // r13
  volatile signed __int32 *v10; // rax
  std::_Ref_count_base *v11; // rcx
  int v12; // r15d
  __int64 v13; // r12
  SystemEffectDescriptor *v14; // r13
  volatile signed __int32 *v15; // rax
  __int64 v16; // rcx
  CEndpointCharacteristics **v17; // rcx
  __int64 (__fastcall *v18)(__int64, SystemEffectDescriptor **, SystemEffectDescriptor **); // rax
  int v19; // eax
  volatile signed __int32 *v21; // rdi
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+20h] [rbp-38h] BYREF
  SystemEffectDescriptor **v23; // [rsp+30h] [rbp-28h]
  __int64 v24; // [rsp+38h] [rbp-20h]
  __int64 v25; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v26; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  std::_Ref_count_base *v28; // [rsp+A0h] [rbp+48h]
  std::_Ref_count_base *v29; // [rsp+A0h] [rbp+48h]
  std::_Ref_count_base *v30; // [rsp+A0h] [rbp+48h]
  SystemEffectDescriptor *v31; // [rsp+A8h] [rbp+50h]
  volatile signed __int32 *v32; // [rsp+A8h] [rbp+50h]
  SystemEffectDescriptor *v33; // [rsp+B0h] [rbp+58h] BYREF
  SystemEffectDescriptor *v34; // [rsp+B8h] [rbp+60h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v1 = this;
  if ( !*((_BYTE *)this + 52) )
    return 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 56, (__int64)lpCriticalSection);
  v2 = 0LL;
  v23 = 0LL;
  v3 = 0LL;
  v24 = 0LL;
  LODWORD(v4) = 0;
  v5 = 0;
  if ( *((int *)v1 + 10) > 0 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 < 0 || v5 >= *((_DWORD *)v1 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        __debugbreak();
      }
      v8 = (std::_Ref_count_base *)(v6 + *((_QWORD *)v1 + 4));
      v30 = v8;
      if ( (_DWORD)v3 == (_DWORD)v4 )
      {
        if ( (_DWORD)v4 )
        {
          LODWORD(v4) = 2 * v3;
          if ( (v3 & 0x40000000) != 0 || (unsigned int)v4 > 0x7FFFFFF )
          {
LABEL_40:
            LODWORD(v4) = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E8,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)lpCriticalSection[0]);
            goto LABEL_41;
          }
        }
        else
        {
          LODWORD(v4) = 1;
        }
        v7 = _o__recalloc(v2, (int)v4, 16LL);
        if ( !v7 )
          goto LABEL_40;
        HIDWORD(v24) = (_DWORD)v4;
        v2 = (SystemEffectDescriptor **)v7;
        v23 = (SystemEffectDescriptor **)v7;
        v8 = v30;
      }
      v9 = &v2[2 * (int)v3];
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        v10 = (volatile signed __int32 *)*((_QWORD *)v8 + 1);
        v28 = (std::_Ref_count_base *)v10;
        v31 = *(SystemEffectDescriptor **)v8;
        if ( v10 )
        {
          _InterlockedIncrement(v10 + 2);
          LODWORD(v4) = HIDWORD(v24);
          LODWORD(v3) = v24;
          v2 = v23;
        }
        v11 = v9[1];
        if ( v11 )
        {
          std::_Ref_count_base::_Decref(v11);
          v10 = (volatile signed __int32 *)v28;
        }
        v9[1] = (SystemEffectDescriptor *)v10;
        *v9 = v31;
      }
      v3 = (unsigned int)(v3 + 1);
      LODWORD(v24) = v3;
      ++v5;
      v6 += 16LL;
    }
    while ( v5 < *((_DWORD *)v1 + 10) );
  }
  v12 = 0;
  if ( (int)v3 <= 0 )
  {
LABEL_23:
    LODWORD(v4) = 0;
    goto LABEL_41;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 < 0 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    v14 = *v2;
    if ( !*((_BYTE *)*v2 + 16) )
      goto LABEL_21;
    v15 = (volatile signed __int32 *)*((_QWORD *)v14 + 4);
    v29 = (std::_Ref_count_base *)v15;
    v16 = *((_QWORD *)v14 + 3);
    if ( v15 )
    {
      _InterlockedIncrement(v15 + 2);
      v3 = (unsigned int)v24;
    }
    v32 = v15;
    v26 = v15;
    v25 = v16;
    *((_BYTE *)v14 + 16) = 0;
    v33 = v14;
    v34 = v1;
    v17 = *(CEndpointCharacteristics ***)(v16 + 56);
    if ( !v17 )
    {
      std::_Xbad_function_call();
      goto LABEL_62;
    }
    v18 = (__int64 (__fastcall *)(__int64, SystemEffectDescriptor **, SystemEffectDescriptor **))*((_QWORD *)*v17 + 2);
    v19 = (char *)v18 == (char *)std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call
        ? lambda_2cdbfdbf6a906d093ee55c9100591272_::operator()(v17 + 1, (__int64)v1, (int *)v14)
        : v18((__int64)v17, &v34, &v33);
    LODWORD(v4) = v19;
    if ( v19 < 0 )
      break;
    if ( *((_BYTE *)v14 + 16) )
    {
      v4 = v32;
    }
    else
    {
      v4 = 0LL;
      v26 = 0LL;
      v25 = 0LL;
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        v21 = v26;
        (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      }
      v3 = (unsigned int)v24;
    }
LABEL_21:
    ++v12;
    ++v13;
    v2 += 2;
    if ( v12 >= (int)v3 )
    {
      v2 = v23;
      goto LABEL_23;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x63,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v19,
    (int)lpCriticalSection[0]);
  std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(&v25);
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1EE,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v4,
    (int)lpCriticalSection[0]);
  v2 = v23;
LABEL_41:
  if ( v2 )
  {
    if ( (int)v3 > 0 )
    {
      ++v2;
      do
      {
        v1 = *v2;
        if ( *v2 && _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 2, 0xFFFFFFFF) == 1 )
        {
LABEL_62:
          (**(void (__fastcall ***)(SystemEffectDescriptor *))v1)(v1);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(SystemEffectDescriptor *))(*(_QWORD *)v1 + 8LL))(v1);
        }
        v2 += 2;
        --v3;
      }
      while ( v3 );
      v2 = v23;
    }
    free(v2);
  }
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return (unsigned int)v4;
}
