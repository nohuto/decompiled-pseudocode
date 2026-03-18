/*
 * XREFs of DpiAgpSetAgpCommand @ 0x1C01E7080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpSetAgpCommand(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int (__fastcall *v2)(_QWORD); // rax
  unsigned int v3; // ebx
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1
    && *(_DWORD *)(v1 + 16) == 1953656900
    && *(_DWORD *)(v1 + 20) == 2
    && (v2 = *(unsigned int (__fastcall **)(_QWORD))(v1 + 752)) != 0LL )
  {
    return v2(*(_QWORD *)(v1 + 680));
  }
  else
  {
    v3 = -1073741811;
    v4 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
  }
  return v3;
}
