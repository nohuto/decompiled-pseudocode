/*
 * XREFs of ?VmBusDestroyNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006C7C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveNtSharedObject@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002AAA0 (-RemoveNtSharedObject@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

unsigned __int8 __fastcall VmBusDestroyNtSharedObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  DXGGLOBAL *Global; // rax

  v1 = *((_QWORD *)a1 + 7);
  v3 = *((_QWORD *)a1 + 9);
  v4 = *(_DWORD *)(v3 + 16);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v1 + 168));
  v5 = (v4 >> 6) & 0xFFFFFF;
  if ( v5 < *(_DWORD *)(v1 + 208)
    && (v6 = *(_QWORD *)(v1 + 192),
        v7 = *(_DWORD *)(v6 + 16LL * v5 + 8),
        ((v4 >> 26) & 0x30) == (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x30))
    && (v7 & 0x1000) == 0
    && (v7 & 0xF) != 0
    && (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0xF) == 0xD )
  {
    v8 = *(_QWORD *)(v6 + 16LL * v5);
  }
  else
  {
    v8 = 0LL;
  }
  ExReleasePushLockSharedEx(v1 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *(struct DXGSYNCOBJECT **)(v8 + 16), 0);
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)a1 + 7), *(_DWORD *)(v3 + 16));
    DXGPROCESS::RemoveNtSharedObject(*((DXGPROCESS **)a1 + 7), (struct _LIST_ENTRY *)v8);
    operator delete((void *)v8);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = *(unsigned int *)(v3 + 16);
    WdLogEvent5_WdError(v11);
  }
  return 0;
}
