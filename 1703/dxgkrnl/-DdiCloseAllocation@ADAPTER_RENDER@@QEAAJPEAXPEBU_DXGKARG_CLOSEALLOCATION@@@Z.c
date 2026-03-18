/*
 * XREFs of ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C00CD764
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C755C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C017ED98 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCloseAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_CLOSEALLOCATION *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *v11; // rdi
  struct _KTHREAD **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  const HANDLE *pOpenHandleList; // rcx
  HANDLE v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int8 v37; // cl
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  _BYTE v41[8]; // [rsp+20h] [rbp-98h] BYREF
  struct _KTHREAD **v42; // [rsp+28h] [rbp-90h]
  int v43; // [rsp+30h] [rbp-88h]
  _BYTE v44[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5029);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v11 = Current;
  if ( Current )
    v12 = (struct _KTHREAD **)((char *)Current + 88);
  else
    v12 = 0LL;
  v43 = 0;
  v42 = v12;
  if ( v12 && v12[1] == KeGetCurrentThread() )
  {
    v34 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v34 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( v11 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v12);
    v43 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v35 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v35 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v35);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v18 = 0LL;
LABEL_16:
      v22 = 0;
      goto LABEL_17;
    }
    v18 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
    goto LABEL_16;
  v22 = *(_DWORD *)(v18 + 136);
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v44,
    *((struct DXGADAPTER **)this + 2));
  v24 = (*(int (__fastcall **)(void *, const struct _DXGKARG_CLOSEALLOCATION *))(*((_QWORD *)this + 2) + 592LL))(a2, a3);
  if ( v44[0] )
    KeUnstackDetachProcess(&ApcState);
  v27 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v27 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v23, v25);
    v36[3] = 275LL;
    v36[4] = 16LL;
    v36[5] = this;
    v36[6] = CurrentIrql;
    v37 = KeGetCurrentIrql();
    v36[7] = v37;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v22 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v23, v25);
    v38[3] = 275LL;
    v38[4] = 25LL;
    v39 = *(int *)(v18 + 136);
    v38[7] = 0LL;
    v38[5] = v39;
    v38[6] = v22;
    WdLogEvent5_WdCriticalError(v38);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v23, v25, v26);
  v28[3] = v24;
  v28[4] = a2;
  v28[5] = a3->NumAllocations;
  pOpenHandleList = a3->pOpenHandleList;
  v30 = *pOpenHandleList;
  v28[6] = *pOpenHandleList;
  if ( (_DWORD)v24 )
  {
    v40 = WdLogNewEntry5_WdError(pOpenHandleList, v30);
    *(_QWORD *)(v40 + 24) = v24;
    WdLogEvent5_WdError(v40);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v31, &EventProfilerExit, v32, 5029);
  return (unsigned int)v24;
}
