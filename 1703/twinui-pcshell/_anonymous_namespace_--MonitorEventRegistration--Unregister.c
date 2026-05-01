/*
 * XREFs of _anonymous_namespace_::MonitorEventRegistration::Unregister @ 0x1801324D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::MonitorEventRegistration::Unregister(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, *(unsigned int *)(a1 + 24));
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
  return result;
}
