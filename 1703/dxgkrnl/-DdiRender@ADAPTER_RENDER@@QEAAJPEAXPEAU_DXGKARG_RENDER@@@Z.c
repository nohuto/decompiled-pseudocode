/*
 * XREFs of ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0177DBC
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001EF4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRender(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDER *a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGADAPTER *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v19; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v21; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  DXGK_ALLOCATIONLIST *pAllocationList; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  _BYTE v40[24]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v41[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5030);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v40, Current);
  v7 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  Global = DXGGLOBAL::GetGlobal(v9, v8, v10, v11);
  if ( *((_BYTE *)Global + 1113)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1108), v7) )
  {
    LODWORD(v13) = -1073741637;
    goto LABEL_35;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v19 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v21 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v21 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15, v14, v16, v17);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v19 = 0LL;
      goto LABEL_16;
    }
    v19 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    v24 = *(_DWORD *)(v19 + 136);
    goto LABEL_17;
  }
LABEL_16:
  v24 = 0;
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v41,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(void *, struct _DXGKARG_RENDER *))(*((_QWORD *)this + 2) + 600LL))(a2, a3);
  if ( v41[0] )
    KeUnstackDetachProcess(&ApcState);
  v28 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v28 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v25, v26);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v19 && *(_DWORD *)(v19 + 136) != v24 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v25, v26);
    v31[3] = 275LL;
    v31[4] = 25LL;
    v32 = *(int *)(v19 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v24;
    WdLogEvent5_WdCriticalError(v31);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v25, v26, v27);
  v33[3] = v13;
  v33[4] = a2;
  v33[5] = a3->pDmaBuffer;
  v33[6] = a3->DmaSize;
  pAllocationList = a3->pAllocationList;
  v33[7] = pAllocationList;
  if ( (_DWORD)v13 != -1073741816
    && (_DWORD)v13 != -1073741811
    && (_DWORD)v13 != -1073741801
    && (_DWORD)v13 != -1073741795
    && (_DWORD)v13 != -1073741674
    && (_DWORD)v13 != -1073741592
    && (_DWORD)v13 != -1071775743
    && (_DWORD)v13 != -1071775232
    && (_DWORD)v13 )
  {
    v36 = WdLogNewEntry5_WdError(pAllocationList, v34);
    *(_QWORD *)(v36 + 24) = v13;
    WdLogEvent5_WdError(v36);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
LABEL_35:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v37, &EventProfilerExit, v38, 5030);
  return (unsigned int)v13;
}
