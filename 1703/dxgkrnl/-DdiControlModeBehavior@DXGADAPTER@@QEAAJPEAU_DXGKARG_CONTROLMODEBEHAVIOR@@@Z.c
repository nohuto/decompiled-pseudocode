/*
 * XREFs of ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C010B7B0
 * Callers:
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C010DD28 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
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

__int64 __fastcall DXGADAPTER::DdiControlModeBehavior(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLMODEBEHAVIOR *a2,
        __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 Value; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  _BYTE v33[24]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v34[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5071);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v33, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 973);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v26 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v8, v9);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
      goto LABEL_8;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
LABEL_8:
    v14 = 0;
    goto LABEL_9;
  }
  v14 = *(_DWORD *)(v11 + 136);
LABEL_9:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v34, this);
  v16 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLMODEBEHAVIOR *))this + 118))(*((_QWORD *)this + 30), a2);
  if ( v34[0] )
    KeUnstackDetachProcess(&ApcState);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15, v17);
    v28[3] = 275LL;
    v28[4] = 16LL;
    v28[5] = this;
    v28[6] = CurrentIrql;
    v29 = KeGetCurrentIrql();
    v28[7] = v29;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v14 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15, v17);
    v30[3] = 275LL;
    v30[4] = 25LL;
    v31 = *(int *)(v11 + 136);
    v30[7] = 0LL;
    v30[5] = v31;
    v30[6] = v14;
    WdLogEvent5_WdCriticalError(v30);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 973);
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v15, v17, v18);
  v20[3] = v16;
  v20[4] = *((_QWORD *)this + 30);
  v20[5] = a2->Request.Value;
  v20[6] = a2->Satisfied.Value;
  Value = a2->NotSatisfied.Value;
  v20[7] = Value;
  if ( (_DWORD)v16 != -1073741637 && (_DWORD)v16 != -1073741801 && (_DWORD)v16 )
  {
    v32 = WdLogNewEntry5_WdError(Value, v21);
    *(_QWORD *)(v32 + 24) = v16;
    WdLogEvent5_WdError(v32);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 5071);
  return (unsigned int)v16;
}
