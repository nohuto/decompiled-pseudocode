/*
 * XREFs of ?DdiCreatePeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C017972C
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C0025320 (-ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATE.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  void *v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 hNotification; // rcx
  __int64 v24; // rax
  _BYTE v26[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5074);
  v5 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v5 + 1024) || *(int *)(v5 + 1968) < 8704 )
  {
    LODWORD(v16) = -1073741822;
    goto LABEL_33;
  }
  DXGADAPTER::AcquireDdiSync(v5, 1);
  v6 = *(void **)(*((_QWORD *)this + 2) + 240LL);
  a2->hAdapter = v6;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
      goto LABEL_16;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v13 = *(_DWORD *)(v8 + 136);
    goto LABEL_17;
  }
LABEL_16:
  v13 = 0;
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v26,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *))(*((_QWORD *)this + 2) + 1024LL))(a2);
  if ( v26[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v17);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v17);
    v20[3] = 275LL;
    v20[4] = 25LL;
    v21 = *(int *)(v8 + 136);
    v20[7] = 0LL;
    v20[5] = v21;
    v20[6] = v13;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
  v22[3] = v16;
  v22[4] = a2->hAdapter;
  v22[5] = a2->VidPnTargetId;
  v22[6] = a2->NotificationID;
  hNotification = (__int64)a2->hNotification;
  v22[7] = hNotification;
  if ( (unsigned int)(v16 + 0x3FFFFFFF) > 0x16
    || (hNotification = 4198401LL, !_bittest((const int *)&hNotification, v16 + 0x3FFFFFFF)) )
  {
    if ( (_DWORD)v16 )
    {
      v24 = WdLogNewEntry5_WdError(hNotification);
      *(_QWORD *)(v24 + 24) = v16;
      WdLogEvent5_WdError(v24);
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
LABEL_33:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerExit, a3, 5074);
  return (unsigned int)v16;
}
