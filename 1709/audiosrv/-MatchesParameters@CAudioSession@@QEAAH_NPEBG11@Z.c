/*
 * XREFs of ?MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z @ 0x18007361C
 * Callers:
 *     ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007A9FC (-RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180007BC0 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::MatchesParameters(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *lpsz)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 *DebugInfo; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned int v12; // edi
  const WCHAR *v13; // rax
  const WCHAR *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18[2]; // [rsp+30h] [rbp-58h] BYREF
  GUID pclsid; // [rsp+40h] [rbp-48h] BYREF

  v18[1] = -2LL;
  v18[0] = 0LL;
  v8 = this + 20;
  EnterCriticalSection(this + 20);
  DebugInfo = (__int64 *)this[21].DebugInfo;
  if ( *(_QWORD *)&this[21].LockCount - (_QWORD)DebugInfo < 8uLL || (v10 = *DebugInfo) == 0 )
  {
    if ( v8 )
      LeaveCriticalSection(v8);
    goto LABEL_22;
  }
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v18, v10);
  if ( v8 )
    LeaveCriticalSection(v8);
  v11 = v18[0];
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18[0] + 112LL))(v18[0]) )
    goto LABEL_22;
  v12 = 1;
  if ( a3 )
  {
    v13 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
    if ( !v13 || CompareStringOrdinal(a3, -1, v13, -1, 1) != 2 )
      goto LABEL_22;
  }
  if ( a4 )
  {
    v14 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
    if ( CompareStringOrdinal(a4, -1, v14, -1, 1) != 2 )
      goto LABEL_22;
  }
  if ( lpsz )
  {
    if ( CLSIDFromString(lpsz, &pclsid) < 0 )
      goto LABEL_22;
    v15 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&DEVINTERFACE_AUDIO_RENDER.Data1;
    if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&DEVINTERFACE_AUDIO_RENDER.Data1 )
      v15 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)DEVINTERFACE_AUDIO_RENDER.Data4;
    if ( v15 )
    {
      v16 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&DEVINTERFACE_AUDIO_CAPTURE.Data1;
      if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&DEVINTERFACE_AUDIO_CAPTURE.Data1 )
        v16 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)DEVINTERFACE_AUDIO_CAPTURE.Data4;
      if ( v16 )
LABEL_22:
        v12 = 0;
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v18);
  return v12;
}
