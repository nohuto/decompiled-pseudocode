/*
 * XREFs of ?VmBusSignalSyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033390
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

unsigned __int8 __fastcall VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  const unsigned int *v7; // r14
  const unsigned __int64 *v8; // rsi
  struct DXGPROCESS *Current; // rax
  int v11; // [rsp+80h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v11 = -1073741811;
  v3 = *(unsigned int *)(v1 + 16);
  if ( (unsigned int)(v3 - 1) <= 0xFFFE )
  {
    v4 = *(unsigned int *)(v1 + 24);
    if ( (unsigned int)(v4 - 1) <= 0xFFFE )
    {
      v5 = *((_DWORD *)a1 + 20);
      v6 = 4 * (v4 + v3) + 48;
      if ( v5 >= v6 )
      {
        v7 = (const unsigned int *)(v1 + 48 + 4 * v3);
        if ( v5 - v6 >= 8 * (int)v3 )
          v8 = (const unsigned __int64 *)&v7[v4];
        else
          v8 = 0LL;
        Current = DXGPROCESS::GetCurrent();
        v11 = SignalSynchronizationObjectInternal(
                *(_DWORD *)(v1 + 16),
                (const unsigned int *)(v1 + 48),
                *(struct _D3DDDICB_SIGNALFLAGS *)(v1 + 20),
                *(_DWORD *)(v1 + 24),
                v7,
                v8,
                *(_QWORD *)(v1 + 32),
                0LL,
                Current,
                0,
                0);
      }
    }
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v11, 4u);
  return 1;
}
