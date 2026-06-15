/*
 * XREFs of ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800C64C0
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x1800C6BDC (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamInfo@@@Z @ 0x180007950 (--4-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamI.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x1800C5C98 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 *     ?LogOnHmdAdded@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@H@Z @ 0x1800C61F0 (-LogOnHmdAdded@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@H@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1800C7488 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CExclusiveModeListener::OnHmdAdded(
        CExclusiveModeListener *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  __int64 v6; // r15
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  CSpatialAudioResourceManagerTraceLogger *v14; // rcx
  const GUID *v15; // r9
  unsigned __int8 v16; // al
  int updated; // eax
  __int64 v18; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-80h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-78h] BYREF
  __int64 v21; // [rsp+58h] [rbp-70h]
  __int64 v22; // [rsp+60h] [rbp-68h]
  char *v23; // [rsp+68h] [rbp-60h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-58h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+80h] [rbp-48h]
  __int64 v27; // [rsp+88h] [rbp-40h] BYREF
  struct _GUID v28; // [rsp+98h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v25 = -2LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  v23 = (char *)this + 80;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  v26 = v5;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=((__int64 *)&v20, (__int64)a3);
  v18 = 0LL;
  v6 = (__int64)v20;
  v7 = (**v20)(v20, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (__int64)"internal\\sdk\\inc\\wil/resultmacros.h",
      (const char *)(unsigned int)v7);
    v9 = 175LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v18 + 48LL))(v18, &v28);
  if ( v8 < 0 )
  {
    v9 = 178LL;
    goto LABEL_3;
  }
  v19 = 0;
  v11 = RtlQueryWnfStateData(
          &v19,
          WNF_HOLO_SHELL_STATE_INTERACTIVE_USER,
          CExclusiveModeListener::HoloshellStateChangeCallback,
          this,
          0LL);
  v8 = v11 | 0x10000000;
  if ( v11 < 0 )
  {
    v9 = 188LL;
    goto LABEL_3;
  }
  v12 = RtlSubscribeWnfStateChangeNotification(
          (char *)this + 360,
          WNF_HOLO_SHELL_STATE_INTERACTIVE_USER,
          v19,
          CExclusiveModeListener::HoloshellStateChangeCallback,
          this,
          0LL,
          0,
          0);
  v8 = v12 | 0x10000000;
  if ( v12 < 0 )
  {
    v9 = 197LL;
    goto LABEL_3;
  }
  try
  {
    std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>((__int64 *)this + 20, (__int64)&v27, &v28);
    v13 = v27;
    wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=((__int64 *)(v27 + 48), v6);
    *(_QWORD *)(v13 + 56) = v21;
    v16 = v22;
    *(_BYTE *)(v13 + 64) = v22;
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8007000ELL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    if ( v23 )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942414LL;
  }
  CSpatialAudioResourceManagerTraceLogger::LogOnHmdAdded(v14, &v28, (const GUID *)v16, v15);
  *(struct _GUID *)((char *)this + 136) = v28;
  updated = CExclusiveModeListener::UpdateExclusiveViewingMode(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)updated);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
