/*
 * XREFs of ?DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C0024650
 * Callers:
 *     ?ADAPTER_RENDER_DdiResetEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C0034360 (-ADAPTER_RENDER_DdiResetEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETENGINE@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiResetEngine(ADAPTER_RENDER *this, struct _DXGKARG_RESETENGINE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v15; // esi
  __int64 v16; // rbp
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _BYTE v25[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5051);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
LABEL_13:
      v15 = 0;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_13;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_14:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_RESETENGINE *))(*((_QWORD *)this + 2) + 696LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v19[3] = 275LL;
    v19[4] = 25LL;
    v20 = *(int *)(v10 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v15;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v21[3] = v16;
  v21[4] = a2->NodeOrdinal;
  v21[5] = a2->EngineOrdinal;
  v21[6] = a2->LastAbortedFenceId;
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 5051);
  return (unsigned int)v16;
}
