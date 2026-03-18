/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00CE7A8
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C755C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C00FED6C (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C017ED98 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // rdi
  char *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v19; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  const HANDLE *pAllocationList; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rax
  _QWORD *v38; // rax
  unsigned __int8 v39; // cl
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  char v43[8]; // [rsp+20h] [rbp-88h] BYREF
  char *v44; // [rsp+28h] [rbp-80h]
  int v45; // [rsp+30h] [rbp-78h]
  char v46[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 186LL) )
    return 0LL;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5005);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v10 = Current;
  if ( Current )
    v11 = (char *)Current + 88;
  else
    v11 = 0LL;
  v45 = 0;
  v44 = v11;
  if ( v11 && *((struct _KTHREAD **)v11 + 1) == KeGetCurrentThread() )
  {
    v35 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v35 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( v10 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v36 = *((_DWORD *)v11 + 4);
        if ( v36 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v12, &EventBlockThread, v13, v36);
      }
      ExAcquirePushLockExclusiveEx(v11, 0LL);
    }
    *((_QWORD *)v11 + 1) = KeGetCurrentThread();
    v45 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v19 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v37 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v37 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v37);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15, v14, v16, v17);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v19 = 0LL;
      goto LABEL_18;
    }
    v19 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    v23 = *(_DWORD *)(v19 + 136);
    goto LABEL_19;
  }
LABEL_18:
  v23 = 0;
LABEL_19:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v46,
    *((struct DXGADAPTER **)this + 2));
  v25 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 336LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v46[0] )
    KeUnstackDetachProcess(&ApcState);
  v28 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v28 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v24, v26);
    v38[3] = 275LL;
    v38[4] = 16LL;
    v38[5] = this;
    v38[6] = CurrentIrql;
    v39 = KeGetCurrentIrql();
    v38[7] = v39;
    WdLogEvent5_WdCriticalError(v38);
  }
  if ( v19 && *(_DWORD *)(v19 + 136) != v23 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v24, v26);
    v40[3] = 275LL;
    v40[4] = 25LL;
    v41 = *(int *)(v19 + 136);
    v40[7] = 0LL;
    v40[5] = v41;
    v40[6] = v23;
    WdLogEvent5_WdCriticalError(v40);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v24, v26, v27);
  v29[3] = v25;
  v29[4] = a2->Flags.Value;
  v29[5] = a2->hResource;
  v29[6] = a2->NumAllocations;
  pAllocationList = a2->pAllocationList;
  if ( pAllocationList )
    pAllocationList = (const HANDLE *)*pAllocationList;
  v29[7] = pAllocationList;
  if ( (_DWORD)v25 )
  {
    v42 = WdLogNewEntry5_WdError(pAllocationList, v30);
    *(_QWORD *)(v42 + 24) = v25;
    WdLogEvent5_WdError(v42);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 5005);
  return (unsigned int)v25;
}
