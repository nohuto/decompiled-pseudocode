/*
 * XREFs of ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1C017AD28
 * Callers:
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C0172DB4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(DXGADAPTER *this)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int8 v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  if ( !*((_QWORD *)this + 91) )
    return 3221225474LL;
  _InterlockedIncrement((volatile signed __int32 *)this + 981);
  CurrentIrql = KeGetCurrentIrql();
  v4 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v4 = 0LL;
      goto LABEL_13;
    }
    v4 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v9 = *(_DWORD *)(v4 + 136);
    goto LABEL_14;
  }
LABEL_13:
  v9 = 0;
LABEL_14:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v19, this);
  v11 = (*((int (__fastcall **)(_QWORD, _QWORD))this + 91))(*((_QWORD *)this + 30), *((_QWORD *)this + 294));
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  v13 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v10, v12);
    v14[3] = 275LL;
    v14[4] = 16LL;
    v14[5] = this;
    v14[6] = CurrentIrql;
    v15 = KeGetCurrentIrql();
    v14[7] = v15;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( v4 && *(_DWORD *)(v4 + 136) != v9 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v10, v12);
    v16[3] = 275LL;
    v16[4] = 25LL;
    v17 = *(int *)(v4 + 136);
    v16[7] = 0LL;
    v16[5] = v17;
    v16[6] = v9;
    WdLogEvent5_WdCriticalError(v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 981);
  if ( (_DWORD)v11 )
  {
    v18 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v18 + 24) = v11;
    WdLogEvent5_WdError(v18);
  }
  return (unsigned int)v11;
}
