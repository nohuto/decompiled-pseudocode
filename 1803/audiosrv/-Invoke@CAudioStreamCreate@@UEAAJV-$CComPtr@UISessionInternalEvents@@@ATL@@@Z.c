/*
 * XREFs of ?Invoke@CAudioStreamCreate@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800354E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180004AF0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamCreate::Invoke(__int64 a1, volatile signed __int32 **a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rdx
  __int64 (__fastcall *v8)(CServerAudioSessionControl *); // rax
  CServerAudioSessionControl *v9; // rcx
  volatile signed __int32 *v10; // rbx

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
    v8 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v7 + 16LL);
    if ( v8 == CAudioSessionManager::Release )
    {
      v10 = v7 + 2;
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 32LL))(v7 + 2);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
      }
    }
    else
    {
      v9 = (CServerAudioSessionControl *)*a2;
      if ( v8 == CServerAudioSessionControl::Release )
      {
        CServerAudioSessionControl::Release(v9);
        return v6;
      }
      v8(v9);
    }
    return v6;
  }
  return result;
}
