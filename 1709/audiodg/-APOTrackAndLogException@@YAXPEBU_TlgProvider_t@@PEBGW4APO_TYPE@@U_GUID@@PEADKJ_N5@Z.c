/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013940 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140013D70 (-GetEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140013DE0 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z @ 0x140013E50 (-Initialize@CSystemEffectWrapper@@UEAAJIPEAE@Z.c)
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140013ED0 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400141F0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x140048190 (-APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z.c)
 *     ?AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140048360 (-AcceptInput@CSystemEffectWrapper@@UEAAXIPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 *     ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140048440 (-AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x1400484E0 (-CalcInputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z @ 0x140048590 (-CalcOutputFrames@CSystemEffectWrapper@@UEAAII@Z.c)
 *     ?GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z @ 0x140048710 (-GetInputChannelCount@CSystemEffectWrapper@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x1400487A0 (-GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z.c)
 *     ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140048830 (-GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1400488C0 (-IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140048950 (-IsOutputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x1400489E0 (-LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z.c)
 *     ?RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z @ 0x140048A90 (-RemoveAuxiliaryInput@CSystemEffectWrapper@@UEAAJI@Z.c)
 *     ?Reset@CSystemEffectWrapper@@UEAAJXZ @ 0x140048B20 (-Reset@CSystemEffectWrapper@@UEAAJXZ.c)
 *     ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x140048BB0 (-UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400012EC (_TlgKeywordOn.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140012250 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     _TlgCreateWsz @ 0x14001B494 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x14001BF44 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
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
  __int64 cData; // [rsp+20h] [rbp-71h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-41h] BYREF
  __int64 v18; // [rsp+60h] [rbp-31h]
  int v19; // [rsp+68h] [rbp-29h]
  int v20; // [rsp+6Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+70h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp-11h] BYREF
  char *v23; // [rsp+90h] [rbp-1h]
  int v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+9Ch] [rbp+Bh]
  char *v26; // [rsp+A0h] [rbp+Fh]
  int v27; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+ACh] [rbp+1Bh]

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
    TlgWrite(v14, &unk_1400725E3, v12, v13, 8u, &pData);
  }
  if ( a2 )
    TrackSystemEffectBehavior((__int64)a2, v8, 0, 1u, cData);
}
