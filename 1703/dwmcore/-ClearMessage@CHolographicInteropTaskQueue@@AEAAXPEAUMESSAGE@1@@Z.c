/*
 * XREFs of ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1801A8B84
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801A5954 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___ @ 0x1801A7320 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1801A74A0 (--1CHolographicClient@@MEAA@XZ.c)
 *     ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1801A8B40 (-ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicInteropTaskQueue::ClearMessage(CHolographicInteropTaskQueue *this, struct MESSAGE *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a2 + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  memset_0(a2, 0, 0x40uLL);
}
