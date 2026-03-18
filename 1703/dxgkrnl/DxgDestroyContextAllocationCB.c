/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C00FE3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DxgAdapter; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  struct _KTHREAD **Current; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v23[8]; // [rsp+28h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v23);
  if ( KeGetCurrentIrql() )
  {
    v20 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v20 + 24) = 211LL;
    WdLogEvent5_WdAssertion(v20);
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !*(_QWORD *)(DxgAdapter + 2288) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v11);
    v21[5] = 0LL;
    v21[6] = 0LL;
    v21[7] = 0LL;
    v21[3] = 275LL;
    v21[4] = 7LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  v12 = *(_QWORD *)(DxgAdapter + 2288);
  v13 = *(_QWORD *)(v12 + 440);
  v14 = *(_QWORD *)(v12 + 432);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v22, Current);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v14 + 8) + 656LL))(v13, a2);
  v17 = v22;
  v18 = v16;
  if ( v22 )
  {
    *(_QWORD *)(v22 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v17 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  return v18;
}
