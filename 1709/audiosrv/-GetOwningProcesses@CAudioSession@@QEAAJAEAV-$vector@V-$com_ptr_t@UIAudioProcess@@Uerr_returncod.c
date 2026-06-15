/*
 * XREFs of ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18001A3D0
 * Callers:
 *     ?ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z @ 0x18001A330 (-ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009BB5C (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ??$emplace_back@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18006FABC (--$emplace_back@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$c.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetOwningProcesses(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rsi
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 800);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 800));
    v8 = *(_QWORD *)(a1 + 840);
    v5 = *(_QWORD *)(a1 + 848);
    while ( v8 != v5 )
    {
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
        a2,
        v8);
      v8 += 8LL;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8B6,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
