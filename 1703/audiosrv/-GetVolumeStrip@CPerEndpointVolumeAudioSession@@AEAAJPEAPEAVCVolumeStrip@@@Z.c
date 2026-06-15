/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x18008CB88
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x18008A5A0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18008DBE0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x18008F2A0 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180090370 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180023694 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x18008D518 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_qqq @ 0x180090DB8 (WPP_SF_qqq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(const void **this, struct CVolumeStrip **a2)
{
  int EndpointVolumeInformation; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rsi
  CVolumeStrip **v8; // rdx
  struct IUnknown *v9; // rcx
  CVolumeProvider *v10; // r14
  __int64 v11; // rbx
  const unsigned __int16 *Buffer; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct IUnknown *v16; // rbx
  const unsigned __int16 *v17; // rdx
  struct IUnknown *v18; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp-10h]
  struct IUnknown *v22; // [rsp+80h] [rbp+30h] BYREF

  EndpointVolumeInformation = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 133);
  v21 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = this + 138;
  v8 = &WPP_GLOBAL_Control;
  if ( !this[138] )
  {
    v9 = 0LL;
    v22 = 0LL;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        this);
      v9 = v22;
    }
    v10 = g_pVolumeProvider;
    EndpointVolumeInformation = g_pVolumeProvider == 0LL ? 0x8000FFFF : 0;
    if ( !g_pVolumeProvider )
      goto LABEL_7;
    v11 = *(_QWORD *)g_pVolumeProvider;
    Buffer = CAudioEndpointId::GetBuffer(this + 99, (__int64)v8, v5, v6);
    EndpointVolumeInformation = (*(__int64 (__fastcall **)(CVolumeProvider *, const unsigned __int16 *, struct IUnknown **))(v11 + 48))(
                                  v10,
                                  Buffer,
                                  &v22);
    if ( EndpointVolumeInformation < 0 )
    {
      if ( v22 )
        ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *))v22->lpVtbl->Release)(v22, v22->lpVtbl);
      goto LABEL_33;
    }
    v16 = v22;
    CAudioEndpointId::GetBuffer(this + 99, v13, v14, v15);
    EndpointVolumeInformation = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
                                  (CPerEndpointVolumeAudioSession *)this,
                                  v17,
                                  (struct CVolumeStrip *)v16);
    if ( EndpointVolumeInformation < 0 )
      goto LABEL_14;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        this);
    }
    EndpointVolumeInformation = ((__int64 (__fastcall *)(struct IUnknown *, const void **))v22->lpVtbl[10].QueryInterface)(
                                  v22,
                                  this + 132);
    if ( EndpointVolumeInformation < 0 )
    {
LABEL_14:
      v9 = v22;
LABEL_7:
      if ( v9 )
        ((void (__fastcall *)(struct IUnknown *, CVolumeStrip **))v9->lpVtbl->Release)(v9, v8);
      goto LABEL_33;
    }
    v18 = v22;
    if ( (struct IUnknown *)*v7 != v22 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 138, v22);
      v18 = v22;
    }
    if ( v18 )
      ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
    v8 = &WPP_GLOBAL_Control;
  }
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        48LL,
        &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        this,
        *v7,
        a2,
        -2LL);
    }
    *a2 = (struct CVolumeStrip *)*v7;
    if ( *v7 )
      (*(void (__fastcall **)(_QWORD, CVolumeStrip **))(*(_QWORD *)*v7 + 8LL))(*v7, v8);
    EndpointVolumeInformation = 0;
  }
LABEL_33:
  if ( EndpointVolumeInformation < 0 )
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::GetVolumeStrip", 2099, EndpointVolumeInformation);
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)EndpointVolumeInformation;
}
