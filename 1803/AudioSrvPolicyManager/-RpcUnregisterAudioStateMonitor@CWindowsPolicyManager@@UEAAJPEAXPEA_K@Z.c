/*
 * XREFs of ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18000A700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180009050 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcUnregisterAudioStateMonitor(
        CWindowsPolicyManager *this,
        void *a2,
        unsigned __int64 *a3)
{
  int Process; // eax
  struct IAudioProcess *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAudioProcess *v12; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v12 = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, a2, &v12);
  v7 = v12;
  v8 = Process;
  if ( Process < 0 )
  {
    v9 = 832LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Process);
    goto LABEL_7;
  }
  Process = (*(__int64 (__fastcall **)(struct IAudioProcess *, unsigned __int64 *))(*(_QWORD *)v12 + 416LL))(v12, a3);
  v8 = Process;
  if ( Process < 0 )
  {
    v9 = 833LL;
    goto LABEL_5;
  }
  v8 = 0;
LABEL_7:
  if ( v7 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 16LL))(v7);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v8;
}
