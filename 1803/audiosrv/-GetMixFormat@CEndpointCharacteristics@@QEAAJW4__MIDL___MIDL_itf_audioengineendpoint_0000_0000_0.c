/*
 * XREFs of ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070
 * Callers:
 *     AudioServerGetMixFormat @ 0x1800014A0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180001740 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180037650 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800A8940 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800BBE98 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800BC180 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800BF770 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800C3510 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BCD64 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800EC9AC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // r14
  _QWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  GUID fmtid; // xmm0
  int v14; // eax
  DWORD pid; // eax
  BYTE *v16; // r8
  BYTE *v17; // r12
  unsigned __int16 v18; // si
  int v19; // edi
  unsigned __int16 v20; // r15
  unsigned __int16 v21; // bx
  __int16 v22; // r11
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // ax
  __int64 v31; // r10
  __int64 v32; // r9
  struct tWAVEFORMATEX *v33; // rax
  struct tWAVEFORMATEX *v34; // rdi
  int refreshed; // ebx
  __int64 v37; // rdx
  const GUID *v38; // r8
  const GUID *v39; // r9
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+30h] [rbp-A1h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-99h] BYREF
  __int64 v42; // [rsp+50h] [rbp-81h] BYREF
  struct tWAVEFORMATEX **v43; // [rsp+58h] [rbp-79h]
  __int128 v44; // [rsp+60h] [rbp-71h]
  __int64 v45; // [rsp+70h] [rbp-61h]
  GUID v46; // [rsp+78h] [rbp-59h] BYREF
  DWORD v47; // [rsp+88h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-41h] BYREF
  const char *v49; // [rsp+B0h] [rbp-21h]
  __int64 v50; // [rsp+B8h] [rbp-19h]
  struct _RTL_CRITICAL_SECTION **v51; // [rsp+C0h] [rbp-11h]
  __int64 v52; // [rsp+C8h] [rbp-9h]
  __int64 *v53; // [rsp+D0h] [rbp-1h]
  __int64 v54; // [rsp+D8h] [rbp+7h]

  v45 = -2LL;
  v43 = a5;
  memset(&pvar, 0, sizeof(pvar));
  v42 = 0LL;
  *a5 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8544);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  v40 = v8;
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
      v44 = (__int128)*a3;
      v11 = 0;
      v9 = qword_180189130;
      while ( 1 )
      {
        v12 = qword_180189130[2 * v11] - v44;
        if ( !v12 )
          v12 = qword_180189130[2 * v11 + 1] - *((_QWORD *)&v44 + 1);
        if ( !v12 )
          break;
        if ( ++v11 >= 8 )
        {
          refreshed = -2147023728;
          goto LABEL_51;
        }
      }
      fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v14 = 2;
      if ( a2 == eKeywordDetectorConnector )
        v14 = 602;
      pid = v11 + v14;
    }
    else
    {
      fmtid = PKEY_AudioEngine_MixFormat.fmtid;
      pid = PKEY_AudioEngine_MixFormat.pid;
    }
  }
  v46 = fmtid;
  v47 = pid;
  if ( (*(int (__fastcall **)(_QWORD, GUID *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &v46,
         &pvar,
         v9) < 0
    || pvar.vt != 65
    || pvar.lVal < 0x12u
    || (v16 = pvar.bstrblobVal.pData, pvar.ulVal != *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    refreshed = CPolicyConfig::RefreshDeviceFormat(this, a2);
    if ( refreshed < 0 )
      goto LABEL_51;
    refreshed = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
                  *((_QWORD *)this + 4),
                  &v46,
                  &pvar);
    if ( refreshed < 0 )
      goto LABEL_51;
    if ( pvar.vt != 65 || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
      refreshed = -2147024809;
      goto LABEL_51;
    }
    v16 = pvar.bstrblobVal.pData;
  }
  v17 = v16;
  if ( !v16 )
    goto LABEL_65;
  v18 = *((_WORD *)v16 + 1);
  if ( !v18 )
    goto LABEL_65;
  if ( !*((_DWORD *)v16 + 1) )
    goto LABEL_65;
  v19 = *((_DWORD *)v16 + 2);
  if ( !v19 )
    goto LABEL_65;
  v20 = *((_WORD *)v16 + 6);
  if ( !v20 )
    goto LABEL_65;
  v21 = *((_WORD *)v16 + 8);
  if ( v21 > 0x400u )
    goto LABEL_65;
  v22 = *(_WORD *)v16;
  v23 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
  LODWORD(v40) = 65534;
  v24 = *((_DWORD *)v16 + 1);
  if ( ((v22 - 1) & 0xFFFD) == 0 )
  {
    if ( !v21
      && (*((_WORD *)v16 + 7) & 7) == 0
      && v18 <= 2u
      && v19 == (v24 * *((unsigned __int16 *)v16 + 7) * (unsigned int)v18) >> 3 )
    {
      v23 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      goto LABEL_40;
    }
    goto LABEL_65;
  }
  if ( (_WORD)v40 == v22 )
  {
    if ( v21 < 0x16u )
      goto LABEL_65;
    v25 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v16 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v16 + 3) )
      v25 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v16 + 4);
    if ( !v25 )
      goto LABEL_31;
    v26 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v16 + 3);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v16 + 3) )
      v26 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v16 + 4);
    if ( !v26 )
    {
LABEL_31:
      v27 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v16 + 3);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v16 + 3) )
        v27 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v16 + 4);
      if ( v27 )
      {
        v28 = *((_WORD *)v16 + 7);
        v29 = v28;
        if ( v28 != 32 )
        {
          v29 = *((_WORD *)v16 + 7);
          if ( v28 != 64 )
            goto LABEL_65;
        }
      }
      else
      {
        v29 = *((_WORD *)v16 + 7);
        v20 = *((_WORD *)v16 + 6);
        if ( ((v29 - 8) & 0xFFE7) != 0 )
          goto LABEL_65;
      }
      v30 = *((_WORD *)v16 + 9);
      if ( (_WORD)v42 != v30 && v29 >= v30 && v19 == (v24 * v29 * (unsigned int)v18) >> 3 && v20 == v29 * v18 / 8 )
      {
        v23 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        goto LABEL_40;
      }
LABEL_65:
      refreshed = -2004287480;
      goto LABEL_51;
    }
  }
LABEL_40:
  if ( ((v22 - 1) & 0xFFFD) != 0 )
  {
    if ( (_WORD)v40 != v22 )
      goto LABEL_65;
    v31 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v16 + 3);
    if ( !v31 )
      v31 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v16 + 4);
    if ( v31 )
    {
      v32 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v16 + 3);
      if ( !v32 )
        v32 = v23 - *((_QWORD *)v16 + 4);
      if ( v32 )
        goto LABEL_65;
    }
  }
  v33 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v21 + 18LL);
  v34 = v33;
  if ( v33 )
  {
    memcpy_0(v33, v17, v21 + 18LL);
    refreshed = 0;
  }
  else
  {
    refreshed = -2147024882;
  }
  *v43 = v34;
LABEL_51:
  PropVariantClear((PROPVARIANT *)&pvar);
  LODWORD(v42) = refreshed;
  LODWORD(v40) = 6403;
  if ( refreshed < 0 && (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    v49 = "CEndpointCharacteristics::GetMixFormat";
    v50 = 39LL;
    v51 = &v40;
    v52 = v37;
    v53 = &v42;
    v54 = v37;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014791D, v38, v39, 5u, &pData);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)refreshed;
}
