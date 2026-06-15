/*
 * XREFs of ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180016CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015CC0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016E80 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionStateChanged::Invoke(__int64 a1, CServerAudioSessionControl **a2)
{
  CServerAudioSessionControl *v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  struct IAudioSessionInfo *v6; // rdx
  __int64 (__fastcall *v7)(CAudioSessionManager *, __int64 (__fastcall ***)(CAudioSession *__hidden, const struct _GUID *, void **), enum _AudioSessionState, enum _AudioSessionState); // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  CServerAudioSessionControl *v10; // rcx
  void (*v11)(void); // rax

  v3 = *a2;
  v4 = *(unsigned int *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(struct IAudioSessionInfo **)(a1 + 8);
  v7 = *(__int64 (__fastcall **)(CAudioSessionManager *, __int64 (__fastcall ***)(CAudioSession *__hidden, const struct _GUID *, void **), enum _AudioSessionState, enum _AudioSessionState))(*(_QWORD *)v3 + 56LL);
  if ( (char *)v7 == (char *)CServerAudioSessionControl::OnStateChanged )
  {
    v8 = CServerAudioSessionControl::OnStateChanged(v3, v6, (enum _AudioSessionState)v5, (enum _AudioSessionState)v4);
  }
  else if ( v7 == CAudioSessionManager::OnStateChanged )
  {
    v8 = CAudioSessionManager::OnStateChanged(
           v3,
           (__int64 (__fastcall ***)(CAudioSession *__hidden, const struct _GUID *, void **))v6,
           (enum _AudioSessionState)v5,
           (enum _AudioSessionState)v4);
  }
  else
  {
    v8 = v7(
           v3,
           (__int64 (__fastcall ***)(CAudioSession *__hidden, const struct _GUID *, void **))v6,
           (enum _AudioSessionState)v5,
           (enum _AudioSessionState)v4);
  }
  v9 = v8;
  v10 = *a2;
  if ( *a2 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
    if ( (char *)v11 == (char *)CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v10);
    }
    else if ( (char *)v11 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v10);
    }
    else
    {
      v11();
    }
  }
  return v9;
}
