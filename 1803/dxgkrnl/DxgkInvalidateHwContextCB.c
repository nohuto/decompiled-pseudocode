/*
 * XREFs of DxgkInvalidateHwContextCB @ 0x1C002EE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkInvalidateHwContextCB(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rax

  if ( KeGetCurrentIrql() )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 1228LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = *(_QWORD *)(v3 + 3728);
  v5 = *(_QWORD *)(v4 + 2464);
  if ( !v5 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3);
    v6[5] = 0LL;
    v6[6] = 0LL;
    v6[7] = 0LL;
    v6[3] = 275LL;
    v6[4] = 7LL;
    WdLogEvent5_WdCriticalError(v6);
    v5 = *(_QWORD *)(v4 + 2464);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 520) + 8LL) + 256LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 256LL),
           *(unsigned int *)(a1 + 16));
}
