/*
 * XREFs of ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D29D0
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001FE74 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D18B0 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D1A70 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180047A6C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800B2224 (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D2804 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct CAudioSessionManager *a7,
        struct ISaDeviceProxy **a8)
{
  struct CAudioSessionManager *v11; // rdi
  int ExclusiveModeAudioSession; // eax
  CAudioResourceManager *v13; // rcx
  struct CAudioSession *v14; // rbx
  __int64 *v15; // rdi
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 *i; // rsi
  __int64 *j; // rbp
  int SaDeviceForExclusive; // eax
  void *v24[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CAudioSession *v27; // [rsp+80h] [rbp+8h] BYREF

  v27 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids);
  }
  v27 = 0LL;
  v11 = a7;
  ExclusiveModeAudioSession = CAudioSessionManager::FindExclusiveModeAudioSession(a7, &v27);
  v14 = v27;
  if ( ExclusiveModeAudioSession < 0 )
  {
    SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(v13, a2, a3, a4, a5, a6, v11, a8);
    v17 = SaDeviceForExclusive;
    if ( SaDeviceForExclusive < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C9,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SaDeviceForExclusive);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  CAudioSession::GetOwningProcesses((__int64)v27, (__int64)v24);
  v15 = (__int64 *)v24[0];
  if ( ((char *)v24[1] - (char *)v24[0]) >> 3 == 1
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v24[0] + 96LL))(*(_QWORD *)v24[0])
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v15 + 104LL))(*v15) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v15 + 168LL))(*v15);
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v14 + 2) + 40LL))((__int64)v14 + 16, 0xFFFFFFFFLL);
    v16 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
            g_DeviceGraphManager,
            a2,
            a3,
            a4,
            a5,
            a6,
            a8);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = (unsigned int)v16;
      v19 = 2233LL;
      goto LABEL_19;
    }
    for ( i = v15; i != v24[1]; ++i )
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(i);
    std::_Deallocate(v15, (v25 - (__int64)v15) >> 3, 8uLL);
LABEL_14:
    v17 = 0;
    goto LABEL_15;
  }
  v17 = -2005139364;
  v18 = 2289827932LL;
  v19 = 2238LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v18);
  if ( v15 )
  {
    for ( j = v15; j != v24[1]; ++j )
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(j);
    std::_Deallocate(v15, (v25 - (__int64)v15) >> 3, 8uLL);
  }
LABEL_15:
  if ( v14 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v14 + 16LL))(v14);
  return v17;
}
