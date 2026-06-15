/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180020F2C (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x1800225C0 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180030A18 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     _lambda_e9af1581bd6c783f369e35704f6cd4a0_::operator() @ 0x18003630C (_lambda_e9af1581bd6c783f369e35704f6cd4a0_--operator().c)
 *     _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x18005C93C (_lambda_068f763f677867854f08eaa5008b23ee_--operator().c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180080130 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180080470 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x18008EC00 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008F370 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x18009AC78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     std::_Func_impl__lambda_bd75e556b07ba4833421d9775be0d6c1__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x1800B89E0 (std--_Func_impl__lambda_bd75e556b07ba4833421d9775be0d6c1__std--allocator_int__bool__ea_1800B89E0.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002F298 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800B6E00 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  struct _GUID v9; // xmm0
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r11
  struct _GUID *v14; // rax
  struct _GUID v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r13
  int v19; // r12d
  __int64 i; // r14
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // r15
  __int64 v25; // rbx
  int v27; // eax
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  char v30; // [rsp+20h] [rbp-69h]
  __int64 v31; // [rsp+28h] [rbp-61h]
  struct _GUID v33; // [rsp+60h] [rbp-29h] BYREF
  struct _GUID v34; // [rsp+70h] [rbp-19h] BYREF

  v9 = *a4;
  v33 = *a4;
  v10 = 192LL;
  if ( a2 != 3 )
    v10 = 184LL;
  v11 = a1 + v10;
  v30 = 0;
  v31 = v11;
  v12 = 0;
  v13 = a1 + 24LL * a2;
  if ( *(int *)(v13 + 1416) > 0 )
  {
    while ( 1 )
    {
      v28 = (_QWORD *)(*(_QWORD *)(v13 + 1400) + 16LL * v12);
      v29 = *v28 - *(_QWORD *)&v33.Data1;
      if ( *v28 == *(_QWORD *)&v33.Data1 )
        v29 = v28[1] - *(_QWORD *)v33.Data4;
      if ( !v29 )
        break;
      if ( ++v12 >= *(_DWORD *)(v13 + 1416) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v12 = -1;
  }
  v33 = v9;
  if ( v12 == -1 )
  {
    v14 = &v33;
  }
  else
  {
    v14 = CAudioSignalProcessingModeMap::Lookup((CAudioSignalProcessingModeMap *)(v13 + 1400), &v34, &v33);
    v11 = v31;
  }
  v15 = *v14;
  v16 = *(_QWORD *)&v14->Data1;
  *(_QWORD *)&v34.Data1 = v16;
  v17 = v16 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v33 = v15;
  v18 = *(_QWORD *)v15.Data4;
  if ( v16 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v17 = *(_QWORD *)v15.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v17 )
  {
    v33 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v18 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v16 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    *(_QWORD *)&v34.Data1 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v19 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    if ( v19 >= *(_DWORD *)(*(_QWORD *)v11 + 8LL) )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11LL,
          &WPP_54c4c8304625380a2e88923c85321bf5_Traceguids,
          (unsigned int)(v30 != 0) - 2005139366);
      }
      return 2290679816LL;
    }
    if ( i < 0 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180051B01LL);
    }
    v21 = *(_QWORD *)(i + **(_QWORD **)v11);
    v22 = *(_QWORD *)v21 - v16;
    if ( *(_QWORD *)v21 == v16 )
      v22 = *(_QWORD *)(v21 + 8) - v18;
    if ( !v22 )
    {
      v23 = 0;
      v30 = 1;
      if ( *(int *)(v21 + 24) > 0 )
        break;
    }
LABEL_42:
    ++v19;
  }
  v24 = 0LL;
  while ( 1 )
  {
    if ( v24 < 0 || v23 >= *(_DWORD *)(v21 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180051AEBLL);
    }
    v25 = *(_QWORD *)(v24 + *(_QWORD *)(v21 + 16));
    if ( (unsigned int)CompareWaveFormat(a3, *(const struct tWAVEFORMATEX **)v25) )
      break;
    ++v23;
    v24 += 8LL;
    if ( v23 >= *(_DWORD *)(v21 + 24) )
    {
      v16 = *(_QWORD *)&v34.Data1;
      v11 = v31;
      goto LABEL_42;
    }
  }
  if ( a6 )
    *a6 = *(_DWORD *)(v25 + 12);
  if ( a7 )
    *a7 = *(_DWORD *)(v25 + 8);
  if ( a8 )
    *a8 = *(_DWORD *)(v25 + 16);
  if ( a9 )
  {
    if ( a5 )
      v27 = *(_DWORD *)(v25 + 24);
    else
      v27 = *(_DWORD *)(v25 + 20);
    *a9 = v27;
  }
  return 0LL;
}
