/*
 * XREFs of ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ACB20
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180004BE4 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800AB950 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ABB14 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x180093704 (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800AC8A4 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct CAudioSession *a6,
        unsigned int a7,
        struct CAudioSessionManager *a8,
        struct ISaDeviceProxy **a9)
{
  struct CAudioSessionManager *v12; // rdi
  int ExclusiveModeAudioSession; // eax
  CAudioResourceManager *v14; // rcx
  struct CAudioSession *v15; // rbx
  int SaDeviceForExclusive; // edi
  LPVOID *v18; // [rsp+28h] [rbp-50h]
  CAudioResourceManager *v19; // [rsp+80h] [rbp+8h] BYREF

  v19 = this;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids);
  }
  a6 = 0LL;
  v12 = a8;
  ExclusiveModeAudioSession = CAudioSessionManager::FindExclusiveModeAudioSession(a8, &a6);
  v15 = a6;
  if ( ExclusiveModeAudioSession < 0 )
  {
    SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(v14, a2, a3, a4, a5, v18, a7, v12, a9);
  }
  else
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct CAudioSession *, CAudioResourceManager **))(*(_QWORD *)a6 + 24LL))(a6, &v19);
    if ( !(*(unsigned int (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v19 + 96LL))(v19)
      || (*(unsigned int (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v19 + 104LL))(v19) )
    {
      SaDeviceForExclusive = -2005139364;
    }
    else
    {
      (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v19 + 160LL))(v19);
      (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v15 + 2) + 40LL))((_QWORD *)v15 + 2, 0xFFFFFFFFLL);
      SaDeviceForExclusive = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, _QWORD, unsigned int, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                               g_DeviceGraphManager,
                               a2,
                               a3,
                               a4,
                               a5,
                               0LL,
                               a7,
                               a9);
    }
    if ( v19 )
      (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( SaDeviceForExclusive < 0
    && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
      SaDeviceForExclusive);
  }
  if ( v15 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)SaDeviceForExclusive;
}
