/*
 * XREFs of ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C017D67C
 * Callers:
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C01B105C (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiUpdateOverlay(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_UPDATEOVERLAY *a3)
{
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  _BYTE v29[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 5033);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_14;
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
LABEL_14:
      v13 = 0;
      goto LABEL_15;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_14;
  v13 = *(_DWORD *)(v8 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v29,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(void *, struct _DXGKARG_UPDATEOVERLAY *))(*((_QWORD *)this + 2) + 616LL))(a2, a3);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v14, v16);
    v21[3] = 275LL;
    v21[4] = 25LL;
    v22 = *(int *)(v8 + 136);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v13;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v14, v16, v17);
  v23[3] = v15;
  v23[4] = a3->OverlayInfo.hAllocation;
  v23[5] = a2;
  WdLogEvent5_WdEvent(v23);
  if ( (_DWORD)v15 != -1073741811 && (_DWORD)v15 != -1073741801 && (_DWORD)v15 != -1073741670 && (_DWORD)v15 )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v25 + 24) = v15;
    WdLogEvent5_WdError(v25);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, 5033);
  return (unsigned int)v15;
}
