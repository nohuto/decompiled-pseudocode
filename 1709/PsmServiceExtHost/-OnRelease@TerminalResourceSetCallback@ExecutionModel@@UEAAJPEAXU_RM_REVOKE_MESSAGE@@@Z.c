/*
 * XREFs of ?OnRelease@TerminalResourceSetCallback@ExecutionModel@@UEAAJPEAXU_RM_REVOKE_MESSAGE@@@Z @ 0x18003D970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::OnRelease(__int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  *((_BYTE *)a1 + 28) = 1;
  (*(void (**)(void))(v1 + 8))();
  TpPostWork(a1[2]);
  return 0LL;
}
