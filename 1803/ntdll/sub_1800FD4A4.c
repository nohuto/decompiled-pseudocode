/*
 * XREFs of sub_1800FD4A4 @ 0x1800FD4A4
 * Callers:
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18001ECD0 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall sub_1800FD4A4(__int64 a1, int a2, PVOID *a3)
{
  __int64 v3; // rax
  _RTL_RUN_ONCE *v5; // rcx
  NTSTATUS result; // eax
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  v3 = 352LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 368LL;
  v5 = (_RTL_RUN_ONCE *)(v3 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(v5, (PRTL_RUN_ONCE_INIT_FN)sub_1800FC890, 0LL, &Context);
  else
    result = RtlRunOnceBeginInitialize(v5, 1u, &Context);
  if ( result >= 0 )
  {
    *a3 = Context;
    return 0;
  }
  return result;
}
