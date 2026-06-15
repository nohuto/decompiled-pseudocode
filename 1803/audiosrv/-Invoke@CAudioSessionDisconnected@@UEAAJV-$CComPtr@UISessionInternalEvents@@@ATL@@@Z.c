/*
 * XREFs of ?Invoke@CAudioSessionDisconnected@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800AA9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionDisconnected::Invoke(__int64 a1, CAudioSessionManager **a2)
{
  unsigned int v3; // edi
  CAudioSessionManager *v4; // rcx
  __int64 (__fastcall *v5)(CAudioSessionManager *); // rax

  v3 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD))(*(_QWORD *)*a2 + 72LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         *(unsigned int *)(a1 + 16));
  v4 = *a2;
  if ( *a2 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v4);
    else
      v5(v4);
  }
  return v3;
}
