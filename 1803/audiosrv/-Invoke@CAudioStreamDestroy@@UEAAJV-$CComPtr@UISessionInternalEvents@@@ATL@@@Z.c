/*
 * XREFs of ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180043810
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamDestroy::Invoke(__int64 a1, CAudioSessionManager **a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  unsigned int v6; // edi
  CAudioSessionManager *v7; // rcx
  __int64 (__fastcall *v8)(CAudioSessionManager *); // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    v4 = v3 + 8;
  else
    v4 = 0LL;
  result = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, __int64))(*(_QWORD *)*a2 + 96LL))(
             *a2,
             *(_QWORD *)(a1 + 8),
             v4);
  v6 = result;
  v7 = *a2;
  if ( *a2 )
  {
    v8 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v7 + 16LL);
    if ( v8 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v7);
      return v6;
    }
    else
    {
      v8(v7);
      return v6;
    }
  }
  return result;
}
