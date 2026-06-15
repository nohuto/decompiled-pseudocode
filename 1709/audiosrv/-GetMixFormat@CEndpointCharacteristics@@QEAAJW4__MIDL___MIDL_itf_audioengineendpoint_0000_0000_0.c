/*
 * XREFs of ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000A70C (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     AudioServerGetMixFormat @ 0x180012990 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x18001F5A0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18002D410 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180030A18 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180070660 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180084640 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x180089830 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180023870 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180031688 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008682C (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetMixFormat(
        struct _RTL_CRITICAL_SECTION *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  _QWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  DWORD pid; // eax
  BYTE *v15; // rbx
  BYTE *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  struct tWAVEFORMATEX *v20; // rax
  struct tWAVEFORMATEX *v21; // rdi
  int refreshed; // ebx
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-91h] BYREF
  int v27; // [rsp+48h] [rbp-79h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+50h] [rbp-71h] BYREF
  __int128 v29; // [rsp+60h] [rbp-61h]
  __int64 v30; // [rsp+70h] [rbp-51h]
  GUID fmtid; // [rsp+78h] [rbp-49h] BYREF
  DWORD v32; // [rsp+88h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-11h] BYREF
  int *v35; // [rsp+C0h] [rbp-1h]
  __int64 v36; // [rsp+C8h] [rbp+7h]
  struct _RTL_CRITICAL_SECTION **v37; // [rsp+D0h] [rbp+Fh]
  __int64 v38; // [rsp+D8h] [rbp+17h]

  v30 = -2LL;
  memset(&pvar, 0, sizeof(pvar));
  *a5 = 0LL;
  v8 = this + 212;
  EnterCriticalSection(this + 212);
  v28 = v8;
  if ( a2 == eOffloadConnector )
  {
    fmtid = PKEY_AudioEngine_HWMixFormat.fmtid;
    pid = PKEY_AudioEngine_HWMixFormat.pid;
  }
  else
  {
    v10 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v10 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v10 )
    {
      v29 = (__int128)*a3;
      v11 = 0;
      v9 = qword_18014AF90;
      while ( 1 )
      {
        v12 = qword_18014AF90[2 * v11] - v29;
        if ( !v12 )
          v12 = qword_18014AF90[2 * v11 + 1] - *((_QWORD *)&v29 + 1);
        if ( !v12 )
          break;
        if ( ++v11 >= 8 )
        {
          refreshed = -2147023728;
          goto LABEL_29;
        }
      }
      fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      if ( a2 == eKeywordDetectorConnector )
        v13 = 602;
      else
        v13 = 2;
      pid = v11 + v13;
    }
    else
    {
      fmtid = PKEY_AudioEngine_MixFormat.fmtid;
      pid = PKEY_AudioEngine_MixFormat.pid;
    }
  }
  v32 = pid;
  if ( (*(int (__fastcall **)(ULONG_PTR, GUID *, struct tagPROPVARIANT *, _QWORD *))(*(_QWORD *)this->SpinCount + 40LL))(
         this->SpinCount,
         &fmtid,
         &pvar,
         v9) < 0
    || pvar.vt != 65
    || pvar.lVal < 0x12u
    || (v15 = pvar.bstrblobVal.pData, pvar.ulVal != *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    refreshed = CPolicyConfig::RefreshDeviceFormat((struct CEndpointCharacteristics *)this, a2);
    if ( refreshed < 0 )
      goto LABEL_29;
    refreshed = (*(__int64 (__fastcall **)(ULONG_PTR, GUID *, struct tagPROPVARIANT *))(*(_QWORD *)this->SpinCount + 40LL))(
                  this->SpinCount,
                  &fmtid,
                  &pvar);
    if ( refreshed < 0 )
      goto LABEL_29;
    if ( pvar.vt != 65 || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
      refreshed = -2147024809;
      goto LABEL_29;
    }
    v15 = pvar.bstrblobVal.pData;
  }
  v16 = v15;
  if ( !v15 || (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v15) < 0 )
    goto LABEL_44;
  if ( ((*(_WORD *)v15 - 1) & 0xFFFD) == 0 )
    goto LABEL_26;
  if ( *(_WORD *)v15 != 0xFFFE )
    goto LABEL_44;
  v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v15 + 3);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v15 + 3) )
    v17 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v15 + 4);
  if ( !v17 )
    goto LABEL_26;
  v18 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v15 + 3);
  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v15 + 3) )
    v18 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v15 + 4);
  if ( v18 )
  {
LABEL_44:
    refreshed = -2004287480;
  }
  else
  {
LABEL_26:
    v19 = *((unsigned __int16 *)v15 + 8);
    v20 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v19 + 18);
    v21 = v20;
    if ( v20 )
    {
      memcpy_0(v20, v16, v19 + 18);
      refreshed = 0;
    }
    else
    {
      refreshed = -2147024882;
    }
    *a5 = v21;
  }
LABEL_29:
  PropVariantClear((PROPVARIANT *)&pvar);
  LODWORD(v28) = refreshed;
  v27 = 6367;
  if ( refreshed < 0 && (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetMixFormat");
    v35 = &v27;
    v36 = 4LL;
    v37 = &v28;
    v38 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180110C20, v24, v25, 5u, &pData);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)refreshed;
}
