/*
 * XREFs of ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1801FE8DC
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801F79C8 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1801FE894 (-ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___ @ 0x1801FEB74 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1801FED14 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicInteropTaskQueue::ClearMessage(CHolographicInteropTaskQueue *this, struct MESSAGE *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a2 + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  memset_0(a2, 0, 0x40uLL);
}
