/*
 * XREFs of ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C008374C
 * Callers:
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095C5C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095E9C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00AC3EC (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C0182F24 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192700 (-VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACK.c)
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
 *     ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0196044 (-VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PE.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  struct DXGPROCESS *v10; // rax
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _BYTE v30[24]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v31[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5004);
  v5 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(v5 + 185) )
  {
    Current = DXGPROCESS::GetCurrent();
    LODWORD(v8) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v5 + 3888),
                    Current,
                    a2);
    goto LABEL_28;
  }
  v10 = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v30, v10);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_16;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v18 = *(_DWORD *)(v13 + 136);
    goto LABEL_17;
  }
LABEL_16:
  v18 = 0;
LABEL_17:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v31,
    *((struct DXGADAPTER **)this + 2));
  v8 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *))(*((_QWORD *)this + 2) + 352LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
         a2);
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v24[3] = 275LL;
    v24[4] = 25LL;
    v25 = *(int *)(v13 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v18;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  v26 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v26[3] = v8;
  v26[4] = a2->AllocationPrivateDriverDataSize;
  v26[5] = a2->ResourcePrivateDriverDataSize;
  WdLogEvent5_WdEvent(v26);
  if ( (_DWORD)v8 != -1073741801 && (_DWORD)v8 )
  {
    v28 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v28 + 24) = v8;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
LABEL_28:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v9, 5004);
  return (unsigned int)v8;
}
