/*
 * XREFs of ?GetLastTarget@MPCInputProviderBase@@UEBA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@XZ @ 0x180044D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall MPCInputProviderBase::GetLastTarget(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 2240);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
