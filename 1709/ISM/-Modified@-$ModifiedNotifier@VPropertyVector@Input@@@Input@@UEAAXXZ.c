/*
 * XREFs of ?Modified@?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAXXZ @ 0x180023E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::ModifiedNotifier<Input::PropertyVector>::Modified(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rcx
  __int128 v3; // xmm0
  __int64 v4; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  result = a1;
  v2 = *(__int64 **)(a1 + 56);
  if ( v2 )
  {
    v3 = *(_OWORD *)(result + 8);
    v4 = *v2;
    v5 = v3;
    return (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v4 + 24))(v2, &v5);
  }
  return result;
}
