/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017E2A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D36C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  DXGADAPTER ***v6; // rbp
  void *v7; // rdi
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int SynchronizationObjectImpl; // eax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  _QWORD v21[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = *(unsigned int *)(v2 + 32);
  if ( (_DWORD)v4 == 6 )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v5 + 24) = 2583LL;
LABEL_29:
    WdLogEvent5_WdError(v5);
    return 0;
  }
  v6 = 0LL;
  if ( !*(_DWORD *)(v2 + 24) )
  {
    if ( (_DWORD)v4 == 5 )
    {
      v5 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v5 + 24) = 2591LL;
      goto LABEL_29;
    }
    if ( (*(_DWORD *)(v2 + 36) & 1) == 0 )
    {
      v5 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v5 + 24) = 2596LL;
      goto LABEL_29;
    }
    v6 = *(DXGADAPTER ****)(*((_QWORD *)a1 + 5) + 16LL);
  }
  v7 = 0LL;
  if ( (_DWORD)v4 == 4 )
  {
    if ( !*(_QWORD *)(v2 + 40) )
    {
      v5 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v5 + 24) = 2606LL;
      goto LABEL_29;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v10 + 24) = 2613LL;
      WdLogEvent5_WdLowResource(v10);
      return 0;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 216LL) + 88LL);
    *((_WORD *)PoolWithTag + 8) = 256;
    PoolWithTag[1] = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(v3 + 40) = PoolWithTag;
  }
  SynchronizationObjectImpl = DxgkCreateSynchronizationObjectImpl(
                                (struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)(v3 + 24),
                                0,
                                v6);
  v13 = SynchronizationObjectImpl;
  if ( SynchronizationObjectImpl < 0 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    v5 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v5 + 24) = v13;
    goto LABEL_29;
  }
  memset(v21, 0, sizeof(v21));
  LODWORD(v21[0]) = *(_DWORD *)(v3 + 112);
  v15 = *(_DWORD *)(v3 + 32);
  if ( v15 == 5 )
  {
    LODWORD(v21[3]) = *(_DWORD *)(v3 + 48);
    v21[2] = *(_QWORD *)(v3 + 48);
    v16 = *(_QWORD *)(v3 + 56);
LABEL_21:
    v21[1] = v16;
    goto LABEL_22;
  }
  if ( v15 == 6 )
  {
    LODWORD(v21[3]) = *(_DWORD *)(v3 + 56);
    v21[2] = *(_QWORD *)(v3 + 48);
    v16 = *(_QWORD *)(v3 + 64);
    goto LABEL_21;
  }
LABEL_22:
  v17 = *(_DWORD *)(v3 + 36);
  v18 = *(_DWORD *)(v3 + 104);
  HIDWORD(v21[0]) = v18;
  if ( (v17 & 1) != 0 && !v18 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v19 + 24) = 2648LL;
    WdLogEvent5_WdAssertion(v19);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v21, 0x20u);
  return 1;
}
