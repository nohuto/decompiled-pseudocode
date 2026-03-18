/*
 * XREFs of ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C010E16C
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C010A22C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001EF4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendDdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C002F99C (-VmBusSendDdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiGetNodeMetadata(DXGADAPTER *this, unsigned int a2, struct _DXGK_NODEMETADATA *a3)
{
  __int64 v4; // r12
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rax
  _BYTE v32[24]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v33[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 5053);
  if ( *((_BYTE *)this + 186) )
  {
    LODWORD(v18) = DXGADAPTER::VmBusSendDdiGetNodeMetadata(this, v4, a3);
    goto LABEL_19;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 973);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_9;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v26 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
      goto LABEL_9;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v15 = *(_DWORD *)(v12 + 136);
    goto LABEL_10;
  }
LABEL_9:
  v15 = 0;
LABEL_10:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v33, this);
  a3->FriendlyName[0] = 0;
  v18 = (*((int (__fastcall **)(_QWORD, _QWORD, struct _DXGK_NODEMETADATA *))this + 94))(
          *((_QWORD *)this + 30),
          (unsigned int)v4,
          a3);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v19);
    v28[3] = 275LL;
    v28[4] = 16LL;
    v28[5] = this;
    v28[6] = CurrentIrql;
    v29 = KeGetCurrentIrql();
    v28[7] = v29;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v15 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v19);
    v30[3] = 275LL;
    v30[4] = 25LL;
    v30[5] = *(int *)(v12 + 136);
    v30[6] = v15;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 973);
  v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v17);
  v20[3] = v18;
  v20[4] = v4;
  v20[5] = a3->EngineType;
  WdLogEvent5_WdEvent(v20);
  if ( (_DWORD)v18 != -1073741811 && (_DWORD)v18 )
  {
    v31 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v31 + 24) = v18;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
LABEL_19:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 5053);
  return (unsigned int)v18;
}
