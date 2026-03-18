/*
 * XREFs of ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0005CE4
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0021D78 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0023420 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     ?DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z @ 0x1C0034390 (-DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerComponentFState(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // r15d
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  v4 = a3;
  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)this + 973);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_4;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
      goto LABEL_4;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
LABEL_4:
    v9 = 0;
    goto LABEL_20;
  }
  v9 = *(_DWORD *)(v8 + 136);
LABEL_20:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v23, this);
  v18 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 89))(*((_QWORD *)this + 30), v5, v4);
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  v10 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v10 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v11[3] = 275LL;
    v11[4] = 16LL;
    v11[5] = this;
    v11[6] = CurrentIrql;
    v12 = KeGetCurrentIrql();
    v11[7] = v12;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v9 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v19[3] = 275LL;
    v19[4] = 25LL;
    v20 = *(int *)(v8 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v9;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 973);
  if ( (_DWORD)v18 != -1071775466 && (_DWORD)v18 )
  {
    v21 = WdLogNewEntry5_WdError(v10, v13);
    *(_QWORD *)(v21 + 24) = v18;
    WdLogEvent5_WdError(v21);
  }
  return (unsigned int)v18;
}
