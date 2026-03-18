/*
 * XREFs of ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1C0176568
 * Callers:
 *     ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C0199E98 (-FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiFlipOverlay(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_FLIPOVERLAY *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  HANDLE hSource; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v33[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5034);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v8, v9);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
LABEL_13:
      v16 = 0;
      goto LABEL_14;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    goto LABEL_13;
  v16 = *(_DWORD *)(v11 + 136);
LABEL_14:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v18 = (*(int (__fastcall **)(void *, struct _DXGKARG_FLIPOVERLAY *))(*((_QWORD *)this + 2) + 624LL))(a2, a3);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
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
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v17, v19);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v25 = *(int *)(v11 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v16;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v17, v19, v20);
  v26[3] = v18;
  hSource = a3->hSource;
  v26[4] = a3->hSource;
  v26[5] = a2;
  if ( (_DWORD)v18 != -1073741811 && (_DWORD)v18 != -1073741801 && (_DWORD)v18 )
  {
    v29 = WdLogNewEntry5_WdError(hSource, v27);
    *(_QWORD *)(v29 + 24) = v18;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 5034);
  return (unsigned int)v18;
}
