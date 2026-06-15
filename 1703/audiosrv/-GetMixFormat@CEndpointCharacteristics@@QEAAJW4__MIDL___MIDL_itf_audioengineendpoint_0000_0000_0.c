/*
 * XREFs of ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEA_J@Z @ 0x180003310 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18001DC20 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     AudioServerGetMixFormat @ 0x18002C9D0 (AudioServerGetMixFormat.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x18008A5A0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x18009C620 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x18009F580 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009D248 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  _QWORD *v8; // r9
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rax
  int v12; // eax
  DWORD pid; // eax
  BYTE *v14; // r8
  BYTE *v15; // r13
  unsigned __int16 v16; // di
  int v17; // edx
  int v18; // esi
  unsigned __int16 v19; // r14
  unsigned __int16 v20; // bx
  __int16 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // ax
  __int64 v27; // r10
  __int64 v28; // r9
  struct tWAVEFORMATEX *v29; // rax
  struct tWAVEFORMATEX *v30; // rdi
  int refreshed; // ebx
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-B1h] BYREF
  struct tWAVEFORMATEX **v36; // [rsp+48h] [rbp-99h] BYREF
  __int64 v37; // [rsp+50h] [rbp-91h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-89h] BYREF
  __int128 v39; // [rsp+60h] [rbp-81h]
  __int64 v40; // [rsp+70h] [rbp-71h]
  GUID fmtid; // [rsp+78h] [rbp-69h] BYREF
  DWORD v42; // [rsp+88h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-31h] BYREF
  struct tWAVEFORMATEX ***v45; // [rsp+C0h] [rbp-21h]
  __int64 v46; // [rsp+C8h] [rbp-19h]
  __int64 *v47; // [rsp+D0h] [rbp-11h]
  __int64 v48; // [rsp+D8h] [rbp-9h]

  v40 = -2LL;
  v36 = a5;
  memset(&pvar, 0, sizeof(pvar));
  v37 = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 1624, (__int64)&lpCriticalSection);
  if ( a2 == eOffloadConnector )
  {
    fmtid = PKEY_AudioEngine_HWMixFormat.fmtid;
    pid = PKEY_AudioEngine_HWMixFormat.pid;
  }
  else
  {
    v9 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v9 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v9 )
    {
      v39 = (__int128)*a3;
      v10 = 0;
      v8 = qword_18012AB90;
      while ( 1 )
      {
        v11 = qword_18012AB90[2 * v10] - v39;
        if ( !v11 )
          v11 = qword_18012AB90[2 * v10 + 1] - *((_QWORD *)&v39 + 1);
        if ( !v11 )
          break;
        if ( ++v10 >= 8 )
        {
          refreshed = -2147023728;
          goto LABEL_50;
        }
      }
      fmtid = (GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      if ( a2 == eKeywordDetectorConnector )
        v12 = 602;
      else
        v12 = 2;
      pid = v10 + v12;
    }
    else
    {
      fmtid = PKEY_AudioEngine_MixFormat.fmtid;
      pid = PKEY_AudioEngine_MixFormat.pid;
    }
  }
  v42 = pid;
  if ( (*(int (__fastcall **)(_QWORD, GUID *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &fmtid,
         &pvar,
         v8) < 0
    || pvar.vt != 65
    || pvar.lVal < 0x12u
    || (v14 = pvar.bstrblobVal.pData, pvar.ulVal != *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    refreshed = CPolicyConfig::RefreshDeviceFormat(this, a2);
    if ( refreshed < 0 )
      goto LABEL_50;
    refreshed = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
                  *((_QWORD *)this + 4),
                  &fmtid,
                  &pvar);
    if ( refreshed < 0 )
      goto LABEL_50;
    if ( pvar.vt != 65 || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
      refreshed = -2147024809;
      goto LABEL_50;
    }
    v14 = pvar.bstrblobVal.pData;
  }
  v15 = v14;
  if ( !v14 )
    goto LABEL_73;
  v16 = *((_WORD *)v14 + 1);
  if ( !v16 )
    goto LABEL_73;
  v17 = *((_DWORD *)v14 + 1);
  if ( !v17 )
    goto LABEL_73;
  v18 = *((_DWORD *)v14 + 2);
  if ( !v18 )
    goto LABEL_73;
  v19 = *((_WORD *)v14 + 6);
  if ( !v19 )
    goto LABEL_73;
  v20 = *((_WORD *)v14 + 8);
  if ( v20 > 0x400u )
    goto LABEL_73;
  v21 = *(_WORD *)v14;
  if ( ((*(_WORD *)v14 - 1) & 0xFFFD) == 0 )
  {
    if ( !v20
      && (*((_WORD *)v14 + 7) & 7) == 0
      && v16 <= 2u
      && v18 == (v17 * *((unsigned __int16 *)v14 + 7) * (unsigned int)v16) >> 3 )
    {
      goto LABEL_39;
    }
    goto LABEL_73;
  }
  if ( v21 == -2 )
  {
    if ( v20 < 0x16u )
      goto LABEL_73;
    v22 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v14 + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v14 + 3) )
      v22 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v14 + 4);
    if ( !v22 )
      goto LABEL_31;
    v23 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v14 + 3);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v14 + 3) )
      v23 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v14 + 4);
    if ( !v23 )
    {
LABEL_31:
      v24 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v14 + 3);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v14 + 3) )
        v24 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v14 + 4);
      v25 = *((_WORD *)v14 + 7);
      if ( v24 )
      {
        v17 = *((_DWORD *)v14 + 1);
        if ( ((v25 - 32) & 0xFFDF) != 0 )
          goto LABEL_73;
      }
      else
      {
        v19 = *((_WORD *)v14 + 6);
        if ( ((v25 - 8) & 0xFFE7) != 0 )
          goto LABEL_73;
      }
      v26 = *((_WORD *)v14 + 9);
      if ( (_WORD)v37 != v26 && v25 >= v26 && v18 == (v17 * v25 * (unsigned int)v16) >> 3 && v19 == v25 * v16 / 8 )
        goto LABEL_39;
LABEL_73:
      refreshed = -2004287480;
      goto LABEL_50;
    }
  }
LABEL_39:
  if ( ((v21 - 1) & 0xFFFD) != 0 )
  {
    if ( v21 != -2 )
      goto LABEL_73;
    v27 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v14 + 3);
    if ( !v27 )
      v27 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v14 + 4);
    if ( v27 )
    {
      v28 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v14 + 3);
      if ( !v28 )
        v28 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v14 + 4);
      if ( v28 )
        goto LABEL_73;
    }
  }
  v29 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v20 + 18LL);
  v30 = v29;
  if ( v29 )
  {
    memcpy_0(v29, v15, v20 + 18LL);
    refreshed = 0;
  }
  else
  {
    refreshed = -2147024882;
  }
  *v36 = v30;
LABEL_50:
  PropVariantClear((PROPVARIANT *)&pvar);
  LODWORD(v37) = refreshed;
  LODWORD(v36) = 6261;
  if ( refreshed < 0 && (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetMixFormat");
    v45 = &v36;
    v46 = 4LL;
    v47 = &v37;
    v48 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA8C5, v33, v34, 5u, &pData);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)refreshed;
}
