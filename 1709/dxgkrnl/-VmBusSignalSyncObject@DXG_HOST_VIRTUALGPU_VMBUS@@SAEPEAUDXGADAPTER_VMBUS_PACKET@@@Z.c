/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199E50
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  PVOID v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  _QWORD *PoolWithTag; // rax
  __int64 v11; // rax
  __int64 v12; // r11
  unsigned __int64 *v13; // rcx
  int v14; // eax
  int v16; // [rsp+80h] [rbp+8h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v2 = 0LL;
  v16 = -1073741811;
  P = 0LL;
  v4 = *(unsigned int *)(v1 + 24);
  if ( !(_DWORD)v4 && (*(_DWORD *)(v1 + 28) & 2) == 0 || (unsigned int)v4 > 0xFFFF )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    v6 = *(unsigned int *)(v1 + 24);
LABEL_18:
    *(_QWORD *)(v5 + 24) = v6;
    goto LABEL_19;
  }
  v7 = *(_DWORD *)(v1 + 32);
  if ( (unsigned int)(v7 - 1) > 0xFFFE )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    v6 = *(unsigned int *)(v1 + 32);
    goto LABEL_18;
  }
  v8 = 8 * v4;
  v9 = 4 * (v7 + v4) + 56;
  if ( *((_DWORD *)a1 + 20) < v9 )
    goto LABEL_23;
  if ( (*(_DWORD *)(v1 + 28) & 2) == 0 )
  {
LABEL_13:
    v12 = *(unsigned int *)(v1 + 24);
    if ( *((_DWORD *)a1 + 20) - v9 >= v8 )
      v13 = (unsigned __int64 *)(v1 + 56 + 4 * v12 + 4LL * *(unsigned int *)(v1 + 32));
    else
      v13 = 0LL;
    v14 = SignalSynchronizationObjectInternal(
            (unsigned int)v12,
            (unsigned int *)(v1 + 56),
            *(struct _D3DDDICB_SIGNALFLAGS *)(v1 + 28),
            *(_DWORD *)(v1 + 32),
            (unsigned int *)(v1 + 56 + 4 * v12),
            v13,
            *(_QWORD *)(v1 + 40),
            &P,
            *((struct DXGPROCESS **)a1 + 6),
            0,
            0);
    v2 = P;
    v16 = v14;
    goto LABEL_20;
  }
  if ( *(_QWORD *)(v1 + 48) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v11 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v11 + 24) = 2294LL;
      WdLogEvent5_WdLowResource(v11);
      v16 = -1073741801;
      goto LABEL_23;
    }
    *((_BYTE *)PoolWithTag + 16) = 1;
    *PoolWithTag = *((_QWORD *)a1 + 4);
    PoolWithTag[1] = *(_QWORD *)(v1 + 48);
    goto LABEL_13;
  }
  v5 = WdLogNewEntry5_WdAssertion(v4);
  *(_QWORD *)(v5 + 24) = 2288LL;
LABEL_19:
  WdLogEvent5_WdAssertion(v5);
LABEL_20:
  if ( v16 < 0 && v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_23:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v16, 4u);
  return 1;
}
