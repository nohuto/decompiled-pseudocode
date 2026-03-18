/*
 * XREFs of ?DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C0175E3C
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C0034230 (-ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATE.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  HANDLE hNotification; // rcx
  __int64 v29; // rax
  _BYTE v31[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5074);
  v5 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v5 + 1024) || *(int *)(v5 + 1944) < 8704 )
  {
    LODWORD(v19) = -1073741822;
    goto LABEL_33;
  }
  DXGADAPTER::AcquireDdiSync(v5, 1);
  v9 = *(void **)(*((_QWORD *)this + 2) + 240LL);
  a2->hAdapter = v9;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v6, v7, v8);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v6, v7, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
      goto LABEL_15;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v16 = *(_DWORD *)(v11 + 136);
    goto LABEL_16;
  }
LABEL_15:
  v16 = 0;
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v31,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *))(*((_QWORD *)this + 2) + 1024LL))(a2);
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v20);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v20);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v25 = *(int *)(v11 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v16;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v20, v21);
  v26[3] = v19;
  v26[4] = a2->hAdapter;
  v26[5] = a2->VidPnTargetId;
  v26[6] = a2->NotificationID;
  hNotification = a2->hNotification;
  v26[7] = hNotification;
  if ( (_DWORD)v19 != -1073741823 && (_DWORD)v19 != -1073741811 && (_DWORD)v19 != -1073741801 && (_DWORD)v19 )
  {
    v29 = WdLogNewEntry5_WdError(hNotification, v27);
    *(_QWORD *)(v29 + 24) = v19;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
LABEL_33:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v5, &EventProfilerExit, a3, 5074);
  return (unsigned int)v19;
}
