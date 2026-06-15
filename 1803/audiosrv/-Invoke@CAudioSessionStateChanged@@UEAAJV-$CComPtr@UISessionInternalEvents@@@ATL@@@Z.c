/*
 * XREFs of ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800321B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180004AF0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180004BF0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180032BE0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionStateChanged::Invoke(__int64 a1, CAudioSessionManager **a2)
{
  CAudioSessionManager *v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  struct IAudioSessionInfo *v6; // rdx
  __int64 (__fastcall *v7)(CServerAudioSessionControl *, struct IAudioSessionInfo *, enum _AudioSessionState, enum _AudioSessionState); // rax
  unsigned int v8; // eax
  unsigned int v9; // edi
  volatile signed __int32 *v10; // rcx
  unsigned int (__fastcall *v11)(CAudioSessionManager *__hidden); // rax
  volatile signed __int32 *v13; // rbx

  v3 = *a2;
  v4 = *(unsigned int *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(struct IAudioSessionInfo **)(a1 + 8);
  v7 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, struct IAudioSessionInfo *, enum _AudioSessionState, enum _AudioSessionState))(*(_QWORD *)v3 + 56LL);
  if ( v7 == CAudioSessionManager::OnStateChanged )
  {
    v8 = CAudioSessionManager::OnStateChanged(v3, v6, (enum _AudioSessionState)v5, (enum _AudioSessionState)v4);
  }
  else if ( v7 == CServerAudioSessionControl::OnStateChanged )
  {
    v8 = CServerAudioSessionControl::OnStateChanged(v3, v6, (enum _AudioSessionState)v5, (enum _AudioSessionState)v4);
  }
  else
  {
    v8 = v7(v3, v6, (enum _AudioSessionState)v5, (enum _AudioSessionState)v4);
  }
  v9 = v8;
  v10 = (volatile signed __int32 *)*a2;
  if ( !*a2 )
    return v9;
  v11 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v10 + 16LL);
  if ( v11 == CAudioSessionManager::Release )
  {
    v13 = v10 + 2;
    if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 32LL))(v10 + 2);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
    }
    return v9;
  }
  if ( (char *)v11 != (char *)CServerAudioSessionControl::Release )
  {
    ((void (*)(void))v11)();
    return v9;
  }
  CServerAudioSessionControl::Release((CServerAudioSessionControl *)v10);
  return v9;
}
