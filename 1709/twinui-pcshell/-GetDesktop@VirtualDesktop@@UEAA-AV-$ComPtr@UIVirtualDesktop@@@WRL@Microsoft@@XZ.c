/*
 * XREFs of ?GetDesktop@VirtualDesktop@@UEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x1801B86D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall VirtualDesktop::GetDesktop(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 88);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
