/*
 * XREFs of ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18000A610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180009050 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcRegisterAudioStateMonitor(
        CWindowsPolicyManager *this,
        void *a2,
        enum AUDIO_DIRECTION *a3,
        enum _AUDIO_STREAM_CATEGORY *a4,
        const unsigned __int16 *a5,
        unsigned __int64 *a6)
{
  int Process; // eax
  struct IAudioProcess *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioProcess *v16; // [rsp+40h] [rbp+8h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v16 = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, a2, &v16);
  v11 = v16;
  v12 = Process;
  if ( Process < 0 )
  {
    v13 = 820LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Process);
    goto LABEL_7;
  }
  Process = (*(__int64 (__fastcall **)(struct IAudioProcess *, enum AUDIO_DIRECTION *, enum _AUDIO_STREAM_CATEGORY *, const unsigned __int16 *, unsigned __int64 *))(*(_QWORD *)v16 + 408LL))(
              v16,
              a3,
              a4,
              a5,
              a6);
  v12 = Process;
  if ( Process < 0 )
  {
    v13 = 821LL;
    goto LABEL_5;
  }
  v12 = 0;
LABEL_7:
  if ( v11 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v11 + 16LL))(v11);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v12;
}
