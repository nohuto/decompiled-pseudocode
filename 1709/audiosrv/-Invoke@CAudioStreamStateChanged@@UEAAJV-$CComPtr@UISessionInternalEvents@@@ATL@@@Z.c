/*
 * XREFs of ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800173C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamStateChanged::Invoke(__int64 a1, CServerAudioSessionControl **a2)
{
  unsigned int v3; // edi
  CServerAudioSessionControl *v4; // rcx
  void (*v5)(void); // rax

  v3 = (*(__int64 (__fastcall **)(CServerAudioSessionControl *, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 80LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         *(unsigned int *)(a1 + 16),
         *(unsigned int *)(a1 + 20),
         (*(_QWORD *)(a1 + 24) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 24) != 0LL));
  v4 = *a2;
  if ( *a2 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v4);
    }
    else if ( (char *)v5 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v4);
    }
    else
    {
      v5();
    }
  }
  return v3;
}
