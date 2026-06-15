/*
 * XREFs of ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001B590
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800190E0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000DC60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180011EC0 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::CloseAudioHandle(CAudioStream *this)
{
  struct IAudioStreamInfo *v2; // r8
  struct ISubmixProxy *v3; // rdx
  __int64 (__fastcall *v4)(CAudioResourceManager *, struct ISubmixProxy *, struct IAudioStreamInfo *); // rax
  int v5; // eax
  int v6; // edi
  CProcessSubmixProxy *v7; // rcx
  __int64 (__fastcall *v8)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, unsigned int, unsigned int, unsigned int); // rax
  __int64 v11; // rcx
  char *v12; // rcx
  struct IUnknown **v14; // rdi
  struct IStreamGroupProxy *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 33) == 2 )
  {
    v14 = (struct IUnknown **)((char *)this + 176);
    if ( *((_QWORD *)this + 22) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 22);
      if ( *v14 )
        ATL::AtlComPtrAssign(v14, 0LL);
    }
    if ( *((_QWORD *)this + 23) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 23);
      if ( *((_QWORD *)this + 23) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 23, 0LL);
    }
    if ( *((_QWORD *)this + 24) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 24);
      if ( *((_QWORD *)this + 24) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 24, 0LL);
    }
  }
  v2 = (CAudioStream *)((char *)this + 8);
  v3 = (struct ISubmixProxy *)*((_QWORD *)this + 7);
  v4 = *(__int64 (__fastcall **)(CAudioResourceManager *, struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)g_AudioResourceManager + 32LL);
  if ( v4 == CAudioResourceManager::DestroyStream )
    v5 = CAudioResourceManager::DestroyStream(g_AudioResourceManager, v3, v2);
  else
    v5 = v4(g_AudioResourceManager, v3, v2);
  v6 = v5;
  v7 = (CProcessSubmixProxy *)*((_QWORD *)this + 7);
  v15 = 0LL;
  v8 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v7 + 80LL);
  if ( v8 == CProcessSubmixProxy::GetConnectedStreamGroup )
    CProcessSubmixProxy::GetConnectedStreamGroup(v7, &v15);
  else
    v8(v7, &v15);
  v9 = *((unsigned int *)this + 101);
  v10 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v15 + 216LL);
  if ( v10 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
    CBaseStreamGroupProxy::UpdateStreamResourcePriority((__int64)v15, 2u, 0xFFFFFFFF, v9);
  else
    v10((__int64)v15, 2u, 0xFFFFFFFF, v9);
  if ( v15 )
    (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v15 + 16LL))(v15);
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::CloseAudioHandle", 0x1E6u, v6);
  v12 = (char *)*((_QWORD *)this + 64);
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v12);
  return (unsigned int)v6;
}
