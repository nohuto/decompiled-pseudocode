/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004720C
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140015520 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140015F00 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140015F70 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140015FE0 (-IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x140016050 (-Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z.c)
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x1400160C0 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400163C0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x140047160 (-APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z.c)
 *     ?AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140047330 (-AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 *     ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140047410 (-AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x1400474B0 (-CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x140047560 (-CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z @ 0x1400476E0 (-GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x140047770 (-GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z.c)
 *     ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140047800 (-GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x140047890 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x140047920 (-LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z.c)
 *     ?RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z @ 0x1400479D0 (-RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z.c)
 *     ?Reset@CSystemEffectWrapper@@UEAAJXZ @ 0x140047A60 (-Reset@CSystemEffectWrapper@@UEAAJXZ.c)
 *     ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x140047AF0 (-UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1400365CC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140036604 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140046F74 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 */

void __fastcall APOTrackAndLogException(__int64 a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5, char a6, char a7)
{
  __int64 v8; // rbx
  const CHAR *v9; // rdx
  __int64 v10; // r9
  LPCSTR v11; // r11
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  TraceLoggingHProvider v14; // r10
  __int64 cData; // [rsp+20h] [rbp-81h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-51h] BYREF
  __int64 v18; // [rsp+60h] [rbp-41h]
  int v19; // [rsp+68h] [rbp-39h]
  int v20; // [rsp+6Ch] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+70h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp-21h] BYREF
  char *v23; // [rsp+90h] [rbp-11h]
  int v24; // [rsp+98h] [rbp-9h]
  int v25; // [rsp+9Ch] [rbp-5h]
  char *v26; // [rsp+A0h] [rbp-1h]
  int v27; // [rsp+A8h] [rbp+7h]
  int v28; // [rsp+ACh] [rbp+Bh]

  v8 = a3;
  if ( *(_DWORD *)g_SysFxUtilTlp > 2u && TlgKeywordOn(g_SysFxUtilTlp, 0x400000000000uLL) )
  {
    if ( (unsigned int)v8 >= 4 )
      v9 = "Unknown";
    else
      v9 = `APOTrackAndLogException'::`2'::strAPO[v8];
    TlgCreateSz(&pDesc, v9);
    v20 = 0;
    v18 = v10;
    v19 = 16;
    TlgCreateWsz(&v21, a2);
    TlgCreateSz(&v22, v11);
    v25 = 0;
    v28 = 0;
    v26 = &a7;
    v23 = &a6;
    v24 = 4;
    v27 = 4;
    TlgWrite(v14, &unk_14006F582, v12, v13, 8u, &pData);
  }
  if ( a2 )
    TrackSystemEffectBehavior((__int64)a2, v8, 0, 1, cData);
}
