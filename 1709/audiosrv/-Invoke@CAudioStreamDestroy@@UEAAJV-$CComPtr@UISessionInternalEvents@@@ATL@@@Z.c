/*
 * XREFs of ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180013FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamDestroy::Invoke(__int64 a1, CAudioSessionManager **a2)
{
  unsigned int v3; // edi
  CAudioSessionManager *v4; // rcx
  unsigned int (__fastcall *v5)(CServerAudioSessionControl *__hidden); // rax

  v3 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, __int64))(*(_QWORD *)*a2 + 96LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         (*(_QWORD *)(a1 + 16) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 16) != 0LL));
  v4 = *a2;
  if ( *a2 )
  {
    v5 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v4);
    }
    else if ( v5 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v4);
    }
    else
    {
      v5(v4);
    }
  }
  return v3;
}
