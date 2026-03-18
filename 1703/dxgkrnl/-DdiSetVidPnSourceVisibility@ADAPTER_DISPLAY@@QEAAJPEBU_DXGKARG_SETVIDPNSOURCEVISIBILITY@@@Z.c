/*
 * XREFs of ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00E5FF8
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_pqt @ 0x1C0024E8C (Template_pqt.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEVISIBILITY *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  _BYTE v31[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_pqt((__int64)this, (__int64)a2, a3, this, a2->VidPnSourceId, a2->Visible != 0);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5011);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_28;
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
      goto LABEL_28;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v14 = *(_DWORD *)(v10 + 136);
    goto LABEL_13;
  }
LABEL_28:
  v14 = 0;
LABEL_13:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v31,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEVISIBILITY *))(*((_QWORD *)this + 2) + 504LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = this;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v14 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v15, v17);
    v28[3] = 275LL;
    v28[4] = 25LL;
    v29 = *(int *)(v10 + 136);
    v28[7] = 0LL;
    v28[5] = v29;
    v28[6] = v14;
    WdLogEvent5_WdCriticalError(v28);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
  v19[3] = v16;
  v19[4] = a2->VidPnSourceId;
  v19[5] = a2->Visible;
  WdLogEvent5_WdEvent(v19);
  if ( (_DWORD)v16 != -1073741801 && (_DWORD)v16 )
  {
    v30 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v30 + 24) = v16;
    WdLogEvent5_WdError(v30);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (int)v16 >= 0 )
  {
    v22 = *((_QWORD *)this + 14);
    *(_BYTE *)(3208LL * a2->VidPnSourceId + v22 + 721) = a2->Visible;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 5011);
  return (unsigned int)v16;
}
