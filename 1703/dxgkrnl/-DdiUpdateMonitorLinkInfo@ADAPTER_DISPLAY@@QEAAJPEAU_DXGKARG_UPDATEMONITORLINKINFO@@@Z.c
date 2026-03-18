/*
 * XREFs of ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C01175CC
 * Callers:
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C0107138 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_UPDATEMONITORLINKINFO *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 Value; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  _BYTE v32[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5072);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v25 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v25 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v25);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
LABEL_8:
    v13 = 0;
    goto LABEL_9;
  }
  v13 = *(_DWORD *)(v10 + 136);
LABEL_9:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v32,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_UPDATEMONITORLINKINFO *))(*((_QWORD *)this + 2) + 952LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v13 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v29[3] = 275LL;
    v29[4] = 25LL;
    v30 = *(int *)(v10 + 136);
    v29[7] = 0LL;
    v29[5] = v30;
    v29[6] = v13;
    WdLogEvent5_WdCriticalError(v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v14, v16, v17);
  v19[3] = v15;
  v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  v19[4] = v20;
  v19[5] = a2->VideoPresentTargetId;
  v19[6] = a2->MonitorLinkInfo.UsageHints.Value;
  Value = a2->MonitorLinkInfo.Capabilities.Value;
  v19[7] = Value;
  if ( (_DWORD)v15 != -1073741637 && (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
  {
    v31 = WdLogNewEntry5_WdError(Value, v20);
    *(_QWORD *)(v31 + 24) = v15;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 5072);
  return (unsigned int)v15;
}
