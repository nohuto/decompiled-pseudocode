/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C00C02E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0006E10 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 DxgAdapter; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  struct _KTHREAD **Current; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v17);
  if ( KeGetCurrentIrql() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 211LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  v7 = *(_QWORD *)(DxgAdapter + 2464);
  if ( !v7 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5);
    v15[5] = 0LL;
    v15[6] = 0LL;
    v15[7] = 0LL;
    v15[3] = 275LL;
    v15[4] = 7LL;
    WdLogEvent5_WdCriticalError(v15);
    v7 = *(_QWORD *)(DxgAdapter + 2464);
  }
  v8 = *(_QWORD *)(v7 + 552);
  v9 = *(_QWORD *)(v7 + 544);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16, Current);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v9 + 8) + 656LL))(v8, a2);
  if ( v16 )
  {
    v12 = v16 + 144;
    *(_QWORD *)(v16 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v17[0] )
    KeUnstackDetachProcess(&ApcState);
  return v11;
}
