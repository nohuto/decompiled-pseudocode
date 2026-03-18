/*
 * XREFs of ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214
 * Callers:
 *     ?VmBusSendAdapterStop@DXGADAPTER@@QEAAXXZ @ 0x1C002EB18 (-VmBusSendAdapterStop@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendCloseAdapter@DXGADAPTER@@QEAAXI@Z @ 0x1C002F040 (-VmBusSendCloseAdapter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?VmBusSendCreateAllocation@DXGADAPTER@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEBU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C002F080 (-VmBusSendCreateAllocation@DXGADAPTER@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEBU_D3DDDI_ALLOCAT.c)
 *     ?VmBusSendCreateContextVirtual@DXGADAPTER@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C002F494 (-VmBusSendCreateContextVirtual@DXGADAPTER@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIEN.c)
 *     ?VmBusSendCreateDevice@DXGADAPTER@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@E@Z @ 0x1C002F5F8 (-VmBusSendCreateDevice@DXGADAPTER@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@E@Z.c)
 *     ?VmBusSendCreateNtSharedObject@@YAIPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C002F684 (-VmBusSendCreateNtSharedObject@@YAIPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C002F724 (-VmBusSendCreatePagingQueue@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAN.c)
 *     ?VmBusSendCreateProcess@@YAIPEAVDXGPROCESS@@PEAD@Z @ 0x1C002F7A4 (-VmBusSendCreateProcess@@YAIPEAVDXGPROCESS@@PEAD@Z.c)
 *     ?VmBusSendCreateSyncObject@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C002F8A8 (-VmBusSendCreateSyncObject@DXGADAPTER@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAUDXGK.c)
 *     ?VmBusSendDdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C002F99C (-VmBusSendDdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?VmBusSendDdiGetStandardAllocationDriverData@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C002FA90 (-VmBusSendDdiGetStandardAllocationDriverData@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETST.c)
 *     ?VmBusSendDdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C002FCA0 (-VmBusSendDdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXGADAPTER@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C002FD6C (-VmBusSendDestroyAllocation@DXGADAPTER@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCAT.c)
 *     ?VmBusSendDestroyContext@DXGADAPTER@@QEAAXII@Z @ 0x1C002FE70 (-VmBusSendDestroyContext@DXGADAPTER@@QEAAXII@Z.c)
 *     ?VmBusSendDestroyDevice@DXGADAPTER@@QEAAXII@Z @ 0x1C002FEB4 (-VmBusSendDestroyDevice@DXGADAPTER@@QEAAXII@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@@YAXI@Z @ 0x1C002FEF8 (-VmBusSendDestroyNtSharedObject@@YAXI@Z.c)
 *     ?VmBusSendDestroyPagingQueue@DXGADAPTER@@QEAAXII@Z @ 0x1C002FF44 (-VmBusSendDestroyPagingQueue@DXGADAPTER@@QEAAXII@Z.c)
 *     ?VmBusSendDestroyProcess@@YAXI@Z @ 0x1C002FF88 (-VmBusSendDestroyProcess@@YAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@@YAXII@Z @ 0x1C002FFD0 (-VmBusSendDestroySyncObject@@YAXII@Z.c)
 *     ?VmBusSendEscape@DXGADAPTER@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C003001C (-VmBusSendEscape@DXGADAPTER@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z.c)
 *     ?VmBusSendEvict@DXGADAPTER@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0030184 (-VmBusSendEvict@DXGADAPTER@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z.c)
 *     ?VmBusSendGetDeviceState@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C0030460 (-VmBusSendGetDeviceState@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICEST.c)
 *     ?VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C003056C (-VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z.c)
 *     ?VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C00309F0 (-VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFEREN.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXGADAPTER@@QEAAJIPEAVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0030B80 (-VmBusSendMapGpuVirtualAddress@DXGADAPTER@@QEAAJIPEAVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRES.c)
 *     ?VmBusSendNotifyProcessFreeze@@YAXI@Z @ 0x1C0030D20 (-VmBusSendNotifyProcessFreeze@@YAXI@Z.c)
 *     ?VmBusSendNotifyProcessThaw@@YAXI@Z @ 0x1C0030D68 (-VmBusSendNotifyProcessThaw@@YAXI@Z.c)
 *     ?VmBusSendOpenResource@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z @ 0x1C0030DB0 (-VmBusSendOpenResource@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IIIPEAI2@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@@Z @ 0x1C0030EF0 (-VmBusSendQueryAdapterInfo@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@@Z.c)
 *     ?VmBusSendQueryAllocationResidency@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0030FD0 (-VmBusSendQueryAllocationResidency@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_.c)
 *     ?VmBusSendQueryEtwSession@@YA?AU_GUID@@XZ @ 0x1C00313C4 (-VmBusSendQueryEtwSession@@YA-AU_GUID@@XZ.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXGADAPTER@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0031464 (-VmBusSendQueryVideoMemoryInfo@DXGADAPTER@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXGADAPTER@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0031524 (-VmBusSendReserveGpuVirtualAddress@DXGADAPTER@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z.c)
 *     ?VmBusSendSetQueuedLimit@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C0031664 (-VmBusSendSetQueuedLimit@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLI.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     Template_ppq @ 0x1C0041FF0 (Template_ppq.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VmBusSendSyncMessage(
        struct VMBCHANNEL__ *a1,
        struct DXGKVMB_COMMAND *a2,
        __int64 a3,
        void *a4,
        unsigned int *a5)
{
  __int64 v8; // rax
  unsigned int *v9; // r14
  unsigned int v10; // esi
  void *v11; // rbp
  char v12; // r12
  unsigned int v13; // ebx
  __int64 v14; // rdi
  unsigned int v15; // eax
  signed __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  size_t v20; // r8
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+18h]
  void *v23; // [rsp+98h] [rbp+20h]

  v23 = a4;
  v22 = a3;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2136);
    a3 = v22;
  }
  if ( (unsigned int)a3 < 0x10 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 7783LL;
    WdLogEvent5_WdAssertion(v8);
    a3 = v22;
  }
  v9 = a5;
  if ( a5 )
    v10 = *a5;
  else
    v10 = 0;
  v11 = a4;
  v12 = 0;
  v13 = v10;
  LODWORD(v14) = -1073741823;
  v21 = v10;
  if ( !a1 )
  {
    LODWORD(v14) = -1073741130;
    goto LABEL_25;
  }
  if ( (unsigned int)a3 < 0x10000 && v10 < 0x10000 )
  {
    if ( (v10 & 7) != 0 )
    {
      v13 = (v10 + 7) & 0xFFFFFFF8;
      v21 = v13;
      if ( v13 < v10 )
      {
        LODWORD(v14) = -1073741811;
        goto LABEL_19;
      }
      v11 = operator new[](v13, 0x4B677844u, (enum _POOL_TYPE)512);
      if ( !v11 )
      {
        LODWORD(v14) = -1073741801;
LABEL_18:
        v13 = v21;
        goto LABEL_19;
      }
      v12 = 1;
    }
    v17 = _InterlockedIncrement64(&qword_1C0070C08);
    *(_QWORD *)a2 = v17;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_ppq(v17, (unsigned int)&EventVmBusSendCommandBegin, a3, (_DWORD)a1, v17, *((_DWORD *)a2 + 2));
    v14 = (int)VmbChannelSendSynchronousRequest(a1, a2, v22, 0LL, 1, v11, &v21, 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_ppq(
        (_DWORD)a1,
        (unsigned int)&EventVmBusSendCommandEnd,
        a3,
        (_DWORD)a1,
        *(_QWORD *)a2,
        *((_DWORD *)a2 + 2));
    if ( (int)v14 >= 0 )
    {
      if ( v12 )
      {
        v13 = v21;
        v20 = v21;
        if ( v10 < v21 )
          v20 = v10;
        memmove(v23, v11, v20);
        goto LABEL_19;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(a1, v18);
      *(_QWORD *)(v19 + 24) = v14;
      WdLogEvent5_WdError(v19);
    }
    goto LABEL_18;
  }
LABEL_19:
  if ( v9 )
  {
    v15 = 0;
    if ( (int)v14 >= 0 )
      v15 = v13;
    *v9 = v15;
  }
  if ( v12 )
    operator delete[](v11);
LABEL_25:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, a3, 2136);
  return (unsigned int)v14;
}
