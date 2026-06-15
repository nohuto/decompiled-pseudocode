/*
 * XREFs of ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800AABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionVolumeChanged::Invoke(__int64 a1, CAudioSessionManager **a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  CAudioSessionManager *v6; // rcx
  void (*v7)(void); // rax

  LOBYTE(a4) = *(_BYTE *)(a1 + 20);
  v5 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)*a2 + 40LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 24),
         a4,
         *(_QWORD *)(a1 + 24));
  v6 = *a2;
  if ( *a2 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)CAudioSessionManager::Release )
      CAudioSessionManager::Release(v6);
    else
      v7();
  }
  return v5;
}
