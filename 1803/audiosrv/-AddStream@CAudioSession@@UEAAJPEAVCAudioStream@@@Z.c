/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034980
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800A86F0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x1800180BC (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B6D0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v2; // rbx
  CAudioSession *v3; // rsi
  unsigned __int64 v4; // r14
  __int64 (__fastcall *v5)(CAudioStream *); // rax
  __int64 (__fastcall *v6)(CAudioStream *, struct IAudioProcess **); // rax
  int v7; // r14d
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // r15d
  bool (__fastcall *v12)(CAudioStream *); // rax
  unsigned int v13; // r14d
  __int64 v14; // rdi
  int v15; // eax
  int v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(CAudioSession *); // rax
  volatile signed __int32 *v20; // rsi
  const char *v21; // r9
  void (__fastcall *v23)(CAudioSession *__hidden); // rax
  ATL::CAtlException *v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // [rsp+20h] [rbp-A8h]
  _QWORD v28[2]; // [rsp+40h] [rbp-88h] BYREF
  ATL::CAtlException *v29; // [rsp+50h] [rbp-78h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-70h] BYREF
  char v31; // [rsp+60h] [rbp-68h]
  void (__fastcall **v32[12])(_QWORD, __int64 *); // [rsp+68h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned int v35; // [rsp+D0h] [rbp+8h]
  __int64 v37; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v38; // [rsp+E8h] [rbp+20h] BYREF

  v28[1] = -2LL;
  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 240LL))(g_PolicyManager);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 48);
  v31 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, v3, v2);
  }
  try
  {
    v4 = *((_QWORD *)v3 + 13);
    if ( v4 >= *((_QWORD *)v3 + 14)
      && !ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
            (__int64)v3 + 96,
            v4 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    *(_QWORD *)(*((_QWORD *)v3 + 12) + 8 * v4) = v2;
    ++*((_QWORD *)v3 + 13);
  }
  catch ( ATL::CAtlException *v29 )
  {
    v24 = v29;
    if ( *(_DWORD *)v29 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v37) = *(_DWORD *)v24;
    v16 = v37;
    if ( (int)v37 < 0 )
    {
      if ( v31 )
        LeaveCriticalSection(lpCriticalSection);
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 248LL))(g_PolicyManager);
      goto LABEL_43;
    }
    v3 = this;
    v2 = a2;
  }
  if ( *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v2 + 56LL) == CAudioStream::AddClientReference )
  {
    v5 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v2 + 8LL);
    if ( v5 == CAudioStream::AddRef )
      _InterlockedIncrement((volatile signed __int32 *)v2 + 8);
    else
      v5(v2);
    _InterlockedIncrement((volatile signed __int32 *)v2 + 11);
  }
  else
  {
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v2 + 56LL))(v2);
  }
  v38 = 0LL;
  v6 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioProcess **))(*((_QWORD *)v2 + 1) + 24LL);
  if ( v6 == CAudioStream::GetProcess )
  {
    v38 = *((_QWORD *)v2 + 10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
  }
  else
  {
    v6((struct CAudioStream *)((char *)v2 + 8), (struct IAudioProcess **)&v38);
  }
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 112LL))(g_PolicyManager);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v38 + 96LL))(v38) && *((_DWORD *)v2 + 138) == v7 )
    *((_DWORD *)v3 + 120) = 1;
  if ( g_DuckingManager
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v38 + 96LL))(v38)
    && *((_DWORD *)v3 + 120) )
  {
    *((_DWORD *)v2 + 138) = v7;
  }
  v8 = *(__int64 (__fastcall **)(__int64))(*((_QWORD *)v2 + 1) + 56LL);
  if ( v8 == CAudioStream::GetType )
    v9 = *((_DWORD *)v2 + 139);
  else
    v9 = v8((__int64)v2 + 8);
  if ( !v9 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v38 + 352LL))(v38) )
    *((_DWORD *)v2 + 138) = 19;
  v10 = (unsigned int)(*((_DWORD *)v3 + 22) + 1);
  *((_DWORD *)v3 + 22) = v10;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, v10);
  }
  v28[0] = 0LL;
  v11 = *((_DWORD *)v2 + 105);
  v35 = -1;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 136LL))(g_PolicyManager) )
  {
    v17 = 0;
    v35 = 0;
    goto LABEL_32;
  }
  v12 = *(bool (__fastcall **)(CAudioStream *))(*((_QWORD *)v2 + 1) + 64LL);
  if ( v12 != CAudioStream::IsCaptureStream )
  {
    if ( !v12((struct CAudioStream *)((char *)v2 + 8)) )
      goto LABEL_29;
LABEL_66:
    v13 = 1;
    goto LABEL_30;
  }
  if ( (unsigned int)(*((_DWORD *)v2 + 139) - 1) <= 1 )
    goto LABEL_66;
LABEL_29:
  v13 = 0;
LABEL_30:
  v14 = *(_QWORD *)g_PolicyManager;
  v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 10) + 120LL))(*((_QWORD *)v2 + 10));
  v15 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(v14 + 64))(
          g_PolicyManager,
          v13,
          *((unsigned int *)v2 + 138),
          *((unsigned __int8 *)v2 + 416));
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v15,
      v27);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v28);
    goto LABEL_34;
  }
  v17 = -1;
LABEL_32:
  if ( v17 != *((_DWORD *)v2 + 105) )
  {
    *((_DWORD *)v2 + 105) = v17;
    v25 = *((_QWORD *)v2 + 8);
    v37 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 80LL))(v25, &v37);
    v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v37 + 216LL))(v37, 1LL, v35, v11);
    v16 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C5,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v26,
        v27);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v28);
      goto LABEL_34;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v37);
  }
  v16 = 0;
LABEL_34:
  *((_DWORD *)v2 + 22) = *((_DWORD *)v3 + 70);
  v18 = *((_QWORD *)v2 + 26);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 248LL))(g_PolicyManager);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 8LL))(v3);
  v32[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioStreamCreate::`vftable';
  v32[1] = (void (__fastcall **)(_QWORD, __int64 *))v3;
  v32[2] = (void (__fastcall **)(_QWORD, __int64 *))v2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v3 + 496), v32);
  v19 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 16LL);
  if ( v19 == CAudioSession::Release )
  {
    v20 = (volatile signed __int32 *)((char *)v3 + 32);
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      v23 = *(void (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v20 + 32LL);
      if ( v23 == CAudioSession::FinalRelease )
        CAudioSession::FinalRelease((CAudioSession *)v20);
      else
        v23((CAudioSession *)v20);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
    }
  }
  else
  {
    v19(v3);
  }
  if ( !SetEvent(*((HANDLE *)v2 + 67)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86F,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      v21);
    __debugbreak();
  }
LABEL_43:
  if ( v16 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::AddStream", 0xB61u, v16);
  return (unsigned int)v16;
}
