/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C0081E2C
 * Callers:
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0091590 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AEB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C018266C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rdi
  struct _KTHREAD **v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  const HANDLE *pAllocationList; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v32[8]; // [rsp+20h] [rbp-88h] BYREF
  struct _KTHREAD **v33; // [rsp+28h] [rbp-80h]
  int v34; // [rsp+30h] [rbp-78h]
  _BYTE v35[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
    return 0LL;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5005);
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( Current )
    v9 = (struct _KTHREAD **)((char *)Current + 112);
  else
    v9 = 0LL;
  v34 = 0;
  v33 = v9;
  if ( v9 && v9[1] == KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( v8 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v9);
    v34 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_24;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_24;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v18 = *(_DWORD *)(v13 + 136);
    goto LABEL_25;
  }
LABEL_24:
  v18 = 0;
LABEL_25:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v20 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 336LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v19, v21);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v19, v21);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v26 = *(int *)(v13 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v18;
    WdLogEvent5_WdCriticalError(v25);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v19);
  v27[3] = v20;
  v27[4] = a2->Flags.Value;
  v27[5] = a2->hResource;
  v27[6] = a2->NumAllocations;
  pAllocationList = a2->pAllocationList;
  if ( pAllocationList )
    pAllocationList = (const HANDLE *)*pAllocationList;
  v27[7] = pAllocationList;
  if ( (_DWORD)v20 )
  {
    v29 = WdLogNewEntry5_WdError(pAllocationList);
    *(_QWORD *)(v29 + 24) = v20;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, 5005);
  return (unsigned int)v20;
}
