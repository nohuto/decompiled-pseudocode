/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004643C
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013610 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140013A90 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x140013B00 (-Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z.c)
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140013B80 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013EC0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x140046390 (-APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z.c)
 *     ?AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140046570 (-AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 *     ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140046660 (-AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x140046700 (-CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x1400467B0 (-CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140046930 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z @ 0x1400469C0 (-GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z.c)
 *     ?GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z @ 0x140046A50 (-GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x140046AE0 (-GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z.c)
 *     ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140046B70 (-GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x140046C00 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140046C90 (-IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x140046D20 (-LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z.c)
 *     ?RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z @ 0x140046DD0 (-RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z.c)
 *     ?Reset@CSystemEffectWrapper@@UEAAJXZ @ 0x140046E60 (-Reset@CSystemEffectWrapper@@UEAAJXZ.c)
 *     ?SetHeadTracking@CSystemEffectWrapper@@UEAAJH@Z @ 0x140046EF0 (-SetHeadTracking@CSystemEffectWrapper@@UEAAJH@Z.c)
 *     ?SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z @ 0x140046F80 (-SetMetadata@CSystemEffectWrapper@@UEAAJPEBUAMBISONICS_PARAMS@@@Z.c)
 *     ?SetRotation@CSystemEffectWrapper@@UEAAJMMMM@Z @ 0x140047010 (-SetRotation@CSystemEffectWrapper@@UEAAJMMMM@Z.c)
 *     ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x1400470B0 (-UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1400066A0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     _TlgCreateWsz @ 0x14001AAB8 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x140034D80 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall APOTrackAndLogException(__int64 a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5, char a6, char a7)
{
  __int64 v8; // rbx
  const CHAR *v9; // rdx
  __int64 v10; // r9
  LPCSTR v11; // r11
  LPCGUID v12; // r9
  TraceLoggingHProvider v13; // r10
  __int64 cData; // [rsp+20h] [rbp-71h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-41h] BYREF
  __int64 v17; // [rsp+60h] [rbp-31h]
  int v18; // [rsp+68h] [rbp-29h]
  int v19; // [rsp+6Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+80h] [rbp-11h] BYREF
  char *v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+9Ch] [rbp+Bh]
  char *v25; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+ACh] [rbp+1Bh]

  v8 = a3;
  if ( *(_DWORD *)g_SysFxUtilTlp > 2u && TlgKeywordOn(g_SysFxUtilTlp, 0x400000000000uLL) )
  {
    if ( (unsigned int)v8 >= 4 )
      v9 = "Unknown";
    else
      v9 = `APOTrackAndLogException'::`2'::strAPO[v8];
    TlgCreateSz(&pDesc, v9);
    v19 = 0;
    v17 = v10;
    v18 = 16;
    TlgCreateWsz(&v20, a2);
    TlgCreateSz(&v21, v11);
    v24 = 0;
    v27 = 0;
    v25 = &a7;
    v22 = &a6;
    v23 = 4;
    v26 = 4;
    TlgWrite(v13, &unk_140070048, 0LL, v12, 8u, &pData);
  }
  if ( a2 )
    TrackSystemEffectBehavior((__int64)a2, v8, 0, 1u, cData);
}
