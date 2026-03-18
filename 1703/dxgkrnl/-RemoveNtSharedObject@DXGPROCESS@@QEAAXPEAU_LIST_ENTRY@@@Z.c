/*
 * XREFs of ?RemoveNtSharedObject@DXGPROCESS@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002AAA0
 * Callers:
 *     ?VmBusDestroyNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CFC0 (-VmBusDestroyNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESS::RemoveNtSharedObject(DXGPROCESS *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = (char *)this + 464;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  Flink = a2->Flink;
  Blink = a2->Blink;
  if ( a2->Flink->Blink != a2 || Blink->Flink != a2 )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  a2->Blink = 0LL;
  a2->Flink = 0LL;
}
