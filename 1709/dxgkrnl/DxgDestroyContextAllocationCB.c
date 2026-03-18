/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C00BF2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0008C00 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 DxgAdapter; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  struct _KTHREAD **Current; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v19[8]; // [rsp+28h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v19);
  if ( KeGetCurrentIrql() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v16 + 24) = 211LL;
    WdLogEvent5_WdAssertion(v16);
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !*(_QWORD *)(DxgAdapter + 2312) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v8);
    v17[5] = 0LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    v17[3] = 275LL;
    v17[4] = 7LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  v9 = *(_QWORD *)(DxgAdapter + 2312);
  v10 = *(_QWORD *)(v9 + 536);
  v11 = *(_QWORD *)(v9 + 528);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v18, Current);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v11 + 8) + 656LL))(v10, a2);
  if ( v18 )
  {
    v14 = v18 + 136;
    *(_QWORD *)(v18 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  return v13;
}
