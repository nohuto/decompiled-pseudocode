/*
 * XREFs of ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01129C0
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0111244 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001224 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0195F50 (-VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiGetNodeMetadata(DXGADAPTER *this, __int64 a2, struct _DXGK_NODEMETADATA *a3)
{
  __int64 v4; // r12
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _BYTE v29[24]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v30[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v4 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 5053);
  if ( *((_BYTE *)this + 185) )
  {
    LODWORD(v7) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata((DXGADAPTER *)((char *)this + 3888), v4, a3);
    goto LABEL_28;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v29, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 981);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
      goto LABEL_16;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v17 = *(_DWORD *)(v12 + 136);
    goto LABEL_17;
  }
LABEL_16:
  v17 = 0;
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v30, this);
  a3->FriendlyName[0] = 0;
  v7 = (*((int (__fastcall **)(_QWORD, _QWORD, struct _DXGK_NODEMETADATA *))this + 94))(
         *((_QWORD *)this + 30),
         (unsigned int)v4,
         a3);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v24[5] = *(int *)(v12 + 136);
    v24[6] = v17;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 981);
  v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
  v25[3] = v7;
  v25[4] = v4;
  v25[5] = a3->EngineType;
  WdLogEvent5_WdEvent(v25);
  if ( (_DWORD)v7 != -1073741811 && (_DWORD)v7 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = v7;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
LABEL_28:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v8, 5053);
  return (unsigned int)v7;
}
