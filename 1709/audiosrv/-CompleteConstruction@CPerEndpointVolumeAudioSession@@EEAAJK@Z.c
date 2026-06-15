/*
 * XREFs of ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180070660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180013380 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800726A8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::CompleteConstruction(CPerEndpointVolumeAudioSession *this)
{
  const unsigned __int16 *Buffer; // rax
  int MixFormat; // ebx
  int (*v4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  void (*v5)(void); // rax
  struct _GUID v7; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v8; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF

  pv = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
  }
  v8 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 720));
  MixFormat = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                Buffer,
                0LL,
                &v8);
  if ( MixFormat < 0
    || (v7 = GUID_00000000_0000_0000_0000_000000000000,
        MixFormat = CEndpointCharacteristics::GetMixFormat(
                      (struct _RTL_CRITICAL_SECTION *)v8,
                      eHostProcessConnector,
                      &v7,
                      v4,
                      (struct tWAVEFORMATEX **)&pv),
        MixFormat < 0)
    || (MixFormat = CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL), MixFormat < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::CompleteConstruction", 2093, MixFormat);
  }
  if ( v8 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v8);
    else
      v5();
  }
  CoTaskMemFree(pv);
  return (unsigned int)MixFormat;
}
