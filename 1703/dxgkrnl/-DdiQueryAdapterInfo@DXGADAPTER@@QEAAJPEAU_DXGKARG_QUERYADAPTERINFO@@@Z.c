/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC
 * Callers:
 *     DXGADAPTER_DdiQueryAdapterInfo @ 0x1C0012DC0 (DXGADAPTER_DdiQueryAdapterInfo.c)
 *     ?VmBusDdiQueryAdapterInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CD80 (-VmBusDdiQueryAdapterInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00FB684 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0106620 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C010A22C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C010DDB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0112030 (DpiFdoCreateRelatedObjects.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C017B2C0 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001EF4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0006D88 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendDdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C002FCA0 (-VmBusSendDdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(DXGADAPTER *this, struct _DXGKARG_QUERYADAPTERINFO *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v15; // r14d
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
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  _BYTE v32[24]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v33[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5000);
  if ( *((_BYTE *)this + 186) )
  {
    LODWORD(v18) = DXGADAPTER::VmBusSendDdiQueryAdapterInfo(this, a2);
    goto LABEL_28;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
  if ( (a2->Flags.Value & 1) == 0 )
    a2->Flags.Value ^= (a2->Flags.Value ^ (unsigned __int8)DXGPROCESS::IsVmProcessOrVmValidation(Current, this)) & 1;
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedAdd((volatile signed __int32 *)this + 973, 1u);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_31;
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
      goto LABEL_31;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
LABEL_31:
    v15 = 0;
    goto LABEL_15;
  }
  v15 = *(_DWORD *)(v11 + 136);
LABEL_15:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v33, this);
  v18 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))this + 39))(*((_QWORD *)this + 30), a2);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v19);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v15 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v19);
    v29[3] = 275LL;
    v29[4] = 25LL;
    v30 = *(int *)(v11 + 136);
    v29[7] = 0LL;
    v29[5] = v30;
    v29[6] = v15;
    WdLogEvent5_WdCriticalError(v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 973);
  v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v17);
  v20[3] = v18;
  v20[4] = a2->Type;
  v20[5] = a2->InputDataSize;
  v20[6] = a2->OutputDataSize;
  WdLogEvent5_WdEvent(v20);
  if ( (_DWORD)v18 != -1073741811 && (_DWORD)v18 != -1073741822 && (_DWORD)v18 != -1073741801 && (_DWORD)v18 )
  {
    v31 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v31 + 24) = v18;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
LABEL_28:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 5000);
  return (unsigned int)v18;
}
