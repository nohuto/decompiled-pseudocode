/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800726A8
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180070660 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800739B0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x180075840 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180076980 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180013380 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x180072CE8 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_qqq @ 0x180077364 (WPP_SF_qqq.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(struct IUnknown **this, struct IVolumeStrip **a2)
{
  int EndpointVolumeInformation; // ebx
  _QWORD *v5; // rsi
  CAudioDGProcess **v6; // rdx
  struct IUnknown *v7; // rcx
  CVolumeProvider *v8; // r14
  __int64 v9; // rbx
  const unsigned __int16 *Buffer; // rax
  struct IUnknown *v11; // rbx
  const unsigned __int16 *v12; // rdx
  struct IUnknown *v13; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  struct IUnknown *v17; // [rsp+80h] [rbp+30h] BYREF

  EndpointVolumeInformation = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 131);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = this + 136;
  v6 = &WPP_GLOBAL_Control;
  if ( !this[136] )
  {
    v7 = 0LL;
    v17 = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this);
      v7 = v17;
    }
    v8 = g_pVolumeProvider;
    EndpointVolumeInformation = g_pVolumeProvider == 0LL ? 0x8000FFFF : 0;
    if ( !g_pVolumeProvider )
      goto LABEL_7;
    v9 = *(_QWORD *)g_pVolumeProvider;
    Buffer = CAudioEndpointId::GetBuffer((CAudioEndpointId *)(this + 90));
    EndpointVolumeInformation = (*(__int64 (__fastcall **)(CVolumeProvider *, const unsigned __int16 *, struct IUnknown **))(v9 + 48))(
                                  v8,
                                  Buffer,
                                  &v17);
    if ( EndpointVolumeInformation < 0 )
    {
      if ( v17 )
        ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *))v17->lpVtbl->Release)(v17, v17->lpVtbl);
      goto LABEL_33;
    }
    v11 = v17;
    CAudioEndpointId::GetBuffer((CAudioEndpointId *)(this + 90));
    EndpointVolumeInformation = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
                                  (CPerEndpointVolumeAudioSession *)this,
                                  v12,
                                  (struct IVolumeStrip *)v11);
    if ( EndpointVolumeInformation < 0 )
      goto LABEL_14;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this);
    }
    EndpointVolumeInformation = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown **))v17->lpVtbl[9].Release)(
                                  v17,
                                  this + 130);
    if ( EndpointVolumeInformation < 0 )
    {
LABEL_14:
      v7 = v17;
LABEL_7:
      if ( v7 )
        ((void (__fastcall *)(struct IUnknown *, CAudioDGProcess **))v7->lpVtbl->Release)(v7, v6);
      goto LABEL_33;
    }
    v13 = v17;
    if ( (struct IUnknown *)*v5 != v17 )
    {
      ATL::AtlComPtrAssign(this + 136, v17);
      v13 = v17;
    }
    if ( v13 )
      ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
    v6 = &WPP_GLOBAL_Control;
  }
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        45LL,
        &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        this,
        *v5,
        a2,
        -2LL);
    }
    *a2 = (struct IVolumeStrip *)*v5;
    if ( *v5 )
      (*(void (__fastcall **)(_QWORD, CAudioDGProcess **))(*(_QWORD *)*v5 + 8LL))(*v5, v6);
    EndpointVolumeInformation = 0;
  }
LABEL_33:
  if ( EndpointVolumeInformation < 0 )
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::GetVolumeStrip", 2017, EndpointVolumeInformation);
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)EndpointVolumeInformation;
}
