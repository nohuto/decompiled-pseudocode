/*
 * XREFs of ?VmBusCreateNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0020860 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?InsertNtSharedObject@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002A560 (-InsertNtSharedObject@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall VmBusCreateNtSharedObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // r15
  struct DXGPROCESS *v4; // rbp
  struct _LIST_ENTRY *v5; // rdi
  char *v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // edx
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _LIST_ENTRY *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+40h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v3 = *((_QWORD *)a1 + 9);
  v4 = Current;
  v21 = 0;
  v5 = 0LL;
  v6 = (char *)Current + 168;
  v7 = *(_DWORD *)(v3 + 16);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
  v8 = (v7 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)v4 + 52)
    && (v9 = *((_QWORD *)v4 + 24),
        v10 = *(_DWORD *)(v9 + 16LL * v8 + 8),
        ((v7 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x30))
    && (v10 & 0x1000) == 0
    && (v10 & 0xF) != 0
    && (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0xF) == 8 )
  {
    v11 = *(_QWORD *)(v9 + 16LL * v8);
  }
  else
  {
    v11 = 0LL;
  }
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(v3 + 16);
LABEL_10:
    WdLogEvent5_WdError(v14);
    goto LABEL_16;
  }
  v15 = (struct _LIST_ENTRY *)operator new(0x20uLL, 0x4B677844u, PagedPool);
  v5 = v15;
  if ( v15 )
  {
    v21 = DXGPROCESS::AllocHandleSafe(*((_QWORD *)a1 + 7), (__int64)v15, 0xDu);
    if ( !v21 )
    {
      v14 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v14 + 24) = 6381LL;
      goto LABEL_10;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 24));
    v5[1].Flink = (struct _LIST_ENTRY *)v11;
    LODWORD(v5[1].Blink) = v21;
    DXGPROCESS::InsertNtSharedObject(*((DXGPROCESS **)a1 + 7), v5);
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v17 + 24) = 6375LL;
    WdLogEvent5_WdLowResource(v17);
  }
LABEL_16:
  if ( !v21 )
    operator delete(v5);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v21, 4u);
  return 1;
}
