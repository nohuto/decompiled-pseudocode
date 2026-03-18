/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186C00
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D40C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  void *v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // r9d
  unsigned int v8; // edx
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  unsigned int v11; // r8d
  _QWORD *PoolWithTag; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 *v15; // rdx
  int v16; // eax
  int v18; // [rsp+88h] [rbp+10h] BYREF
  void *v19; // [rsp+90h] [rbp+18h] BYREF

  v18 = -1073741811;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(unsigned int *)(v2 + 24);
    v5 = 0LL;
    v19 = 0LL;
    if ( !(_DWORD)v4 && (*(_DWORD *)(v2 + 28) & 2) == 0 || (unsigned int)v4 > 0xFFFF )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v6 + 24) = *(unsigned int *)(v3 + 24);
LABEL_19:
      WdLogEvent5_WdAssertion(v6);
      goto LABEL_20;
    }
    v7 = *(_DWORD *)(v2 + 32);
    if ( v7 - 1 > 0xFFFE )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v6 + 24) = *(unsigned int *)(v3 + 32);
      goto LABEL_19;
    }
    v8 = *((_DWORD *)a1 + 20);
    v9 = 4 * (v7 + v4) + 56;
    v10 = 8 * v4;
    if ( v8 < v9 )
    {
LABEL_20:
      if ( v18 < 0 && v5 )
        ExFreePoolWithTag(v5, 0);
      goto LABEL_23;
    }
    v11 = *(_DWORD *)(v2 + 32);
    if ( (*(_DWORD *)(v2 + 28) & 2) != 0 )
    {
      if ( !*(_QWORD *)(v2 + 48) )
      {
        v6 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v6 + 24) = 2693LL;
        goto LABEL_19;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      v19 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v14 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v14 + 24) = 2699LL;
        WdLogEvent5_WdLowResource(v14);
        v18 = -1073741801;
LABEL_23:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v18, 4u);
        LOBYTE(v2) = 1;
        return v2;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *((_BYTE *)PoolWithTag + 16) = 1;
      *PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 216LL) + 88LL);
      PoolWithTag[1] = *(_QWORD *)(v3 + 48);
      v7 = *(_DWORD *)(v3 + 32);
      v11 = v7;
      v4 = *(unsigned int *)(v3 + 24);
      v8 = *((_DWORD *)a1 + 20);
    }
    if ( v8 - v9 >= v10 )
    {
      v7 = v11;
      v15 = (unsigned __int64 *)(v3 + 56 + 4LL * (unsigned int)v4 + 4LL * v11);
    }
    else
    {
      v15 = 0LL;
    }
    v16 = SignalSynchronizationObjectInternal(
            v4,
            (unsigned int *)(v3 + 56),
            *(struct _D3DDDICB_SIGNALFLAGS *)(v3 + 28),
            v7,
            (unsigned int *)(v3 + 56 + 4LL * (unsigned int)v4),
            v15,
            *(_QWORD *)(v3 + 40),
            &v19,
            *((struct DXGPROCESS **)a1 + 6),
            0,
            0);
    v5 = v19;
    v18 = v16;
    goto LABEL_20;
  }
  return v2;
}
