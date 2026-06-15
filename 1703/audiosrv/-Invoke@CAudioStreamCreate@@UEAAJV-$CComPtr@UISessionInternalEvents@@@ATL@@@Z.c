/*
 * XREFs of ?Invoke@CAudioStreamCreate@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180022820
 * Callers:
 *     <none>
 * Callees:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180020E50 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180021120 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamCreate::Invoke(__int64 a1, volatile signed __int32 **a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rdx
  __int64 (__fastcall *v8)(CAudioSessionManager *); // rax
  volatile signed __int32 *v9; // rbx
  CAudioSessionManager *v10; // rcx
  void (__fastcall *v11)(CServerAudioSessionControl *); // rax
  CServerAudioSessionControl *v12; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    v4 = v3 + 8;
  else
    v4 = 0LL;
  result = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, __int64))(*(_QWORD *)*a2 + 88LL))(
             *a2,
             *(_QWORD *)(a1 + 8),
             v4);
  v6 = result;
  v7 = *a2;
  if ( *a2 )
  {
    v8 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v7 + 16LL);
    if ( v8 == CServerAudioSessionControl::Release )
    {
      v9 = v7 + 2;
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
      {
        v11 = *(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v9 + 32LL);
        v12 = (CServerAudioSessionControl *)(v7 + 2);
        if ( v11 == CServerAudioSessionControl::FinalRelease )
          CServerAudioSessionControl::FinalRelease(v12);
        else
          v11(v12);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      }
    }
    else
    {
      v10 = (CAudioSessionManager *)*a2;
      if ( v8 == CAudioSessionManager::Release )
        CAudioSessionManager::Release(v10);
      else
        v8(v10);
    }
    return v6;
  }
  return result;
}
