/*
 * XREFs of ?DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z @ 0x1C017C378
 * Callers:
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C001F578 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerPState(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)this + 981);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_11;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_11:
      v12 = 0;
      goto LABEL_12;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_11;
  v12 = *(_DWORD *)(v7 + 136);
LABEL_12:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v23, this);
  v14 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 95))(*((_QWORD *)this + 30), a2, a3);
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v13, v15);
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v13, v15);
    v19[3] = 275LL;
    v19[4] = 25LL;
    v20 = *(int *)(v7 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v12;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 981);
  if ( (_DWORD)v14 && (_DWORD)v14 != 259 )
  {
    v21 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v21 + 24) = v14;
    WdLogEvent5_WdError(v21);
  }
  return (unsigned int)v14;
}
