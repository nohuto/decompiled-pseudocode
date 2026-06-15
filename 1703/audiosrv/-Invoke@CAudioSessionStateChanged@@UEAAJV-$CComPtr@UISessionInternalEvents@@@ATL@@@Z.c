/*
 * XREFs of ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180022E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180020C90 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180021120 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180021760 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionStateChanged::Invoke(__int64 a1, CServerAudioSessionControl **a2)
{
  CServerAudioSessionControl *v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  struct IAudioSessionInfo *v6; // rdx
  __int64 (__fastcall *v7)(CServerAudioSessionControl *, struct IAudioSessionInfo *, __int64, __int64); // rax
  unsigned int v8; // ebx
  CServerAudioSessionControl *v9; // rcx
  void (*v10)(void); // rax
  unsigned int v12; // eax

  v3 = *a2;
  v4 = *(unsigned int *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(struct IAudioSessionInfo **)(a1 + 8);
  v7 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, struct IAudioSessionInfo *, __int64, __int64))(*(_QWORD *)v3 + 56LL);
  if ( (char *)v7 == (char *)CServerAudioSessionControl::OnStateChanged )
  {
    v12 = CServerAudioSessionControl::OnStateChanged(v3, v6, (enum _AudioSessionState)v5, v4);
  }
  else if ( (char *)v7 == (char *)CAudioSessionManager::OnStateChanged )
  {
    v12 = CAudioSessionManager::OnStateChanged(
            v3,
            (__int64 (__fastcall ***)(CAudioSession *, const struct _GUID *, void **))v6,
            (enum _AudioSessionState)v5,
            (enum _AudioSessionState)v4);
  }
  else
  {
    v12 = v7(v3, v6, v5, v4);
  }
  v8 = v12;
  v9 = *a2;
  if ( *a2 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v10 == (char *)CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v9);
    }
    else if ( (char *)v10 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v9);
    }
    else
    {
      v10();
    }
  }
  return v8;
}
