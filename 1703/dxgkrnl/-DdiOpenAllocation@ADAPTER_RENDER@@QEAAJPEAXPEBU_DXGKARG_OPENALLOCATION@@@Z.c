/*
 * XREFs of ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C016C418
 * Callers:
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00C6700 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001EF4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiOpenAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_OPENALLOCATION *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  DXGK_OPENALLOCATIONINFO *pOpenAllocation; // rcx
  HANDLE hDeviceSpecificAllocation; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  _BYTE v39[24]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v40[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5028);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v39, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
LABEL_13:
      v17 = 0;
      goto LABEL_14;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    goto LABEL_13;
  v17 = *(_DWORD *)(v12 + 136);
LABEL_14:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v40,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(void *, const struct _DXGKARG_OPENALLOCATION *))(*((_QWORD *)this + 2) + 584LL))(a2, a3);
  if ( v40[0] )
    KeUnstackDetachProcess(&ApcState);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v26 = *(int *)(v12 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v17;
    WdLogEvent5_WdCriticalError(v25);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v18, v20, v21);
  v27[3] = v19;
  v27[4] = a2;
  v27[5] = a3->pOpenAllocation->hAllocation;
  v27[6] = a3->pOpenAllocation->pPrivateDriverData;
  pOpenAllocation = a3->pOpenAllocation;
  hDeviceSpecificAllocation = pOpenAllocation->hDeviceSpecificAllocation;
  v27[7] = hDeviceSpecificAllocation;
  if ( (_DWORD)v19 != -1073741811 && (_DWORD)v19 != -1073741801 && (_DWORD)v19 )
  {
    v30 = WdLogNewEntry5_WdError(pOpenAllocation, hDeviceSpecificAllocation);
    *(_QWORD *)(v30 + 24) = v19;
    WdLogEvent5_WdError(v30);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( !a3->pOpenAllocation->hDeviceSpecificAllocation && (int)v19 >= 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
    *(_QWORD *)(v35 + 24) = 2369LL;
    WdLogEvent5_WdAssertion(v35);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v36, &EventProfilerExit, v37, 5028);
  return (unsigned int)v19;
}
