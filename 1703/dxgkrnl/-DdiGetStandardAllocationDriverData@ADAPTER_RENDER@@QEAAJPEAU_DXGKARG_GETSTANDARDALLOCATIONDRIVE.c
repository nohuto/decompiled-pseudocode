/*
 * XREFs of ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00CFEFC
 * Callers:
 *     ?VmBusDdiGetStandardAllocationDriverData@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CB90 (-VmBusDdiGetStandardAllocationDriverData@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C25BC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C27FC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00E6C44 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001EF4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendDdiGetStandardAllocationDriverData@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C002FA90 (-VmBusSendDdiGetStandardAllocationDriverData@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETST.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2,
        __int64 a3)
{
  DXGADAPTER *v5; // rbx
  struct DXGPROCESS *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE v35[24]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v36[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5004);
  v5 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( *((_BYTE *)v5 + 186) )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    LODWORD(v19) = DXGADAPTER::VmBusSendDdiGetStandardAllocationDriverData(v5, Current, a2, v28);
    goto LABEL_24;
  }
  v6 = DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, v6);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_27;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v29 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v29 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v29);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v12 = 0LL;
      goto LABEL_27;
    }
    v12 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
LABEL_27:
    v16 = 0;
    goto LABEL_13;
  }
  v16 = *(_DWORD *)(v12 + 136);
LABEL_13:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *))(*((_QWORD *)this + 2) + 352LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v20);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v16 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v20);
    v32[3] = 275LL;
    v32[4] = 25LL;
    v33 = *(int *)(v12 + 136);
    v32[7] = 0LL;
    v32[5] = v33;
    v32[6] = v16;
    WdLogEvent5_WdCriticalError(v32);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
  v21[3] = v19;
  v21[4] = a2->AllocationPrivateDriverDataSize;
  v21[5] = a2->ResourcePrivateDriverDataSize;
  WdLogEvent5_WdEvent(v21);
  if ( (_DWORD)v19 != -1073741801 && (_DWORD)v19 )
  {
    v34 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v34 + 24) = v19;
    WdLogEvent5_WdError(v34);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
LABEL_24:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 5004);
  return (unsigned int)v19;
}
