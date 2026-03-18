/*
 * XREFs of ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0020860
 * Callers:
 *     ?VmBusCreateNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C5C0 (-VmBusCreateNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C800 (-VmBusCreateProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C019A274 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGPROCESS::AllocHandleSafe(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v7; // eax

  v3 = a1 + 168;
  v4 = a1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 168));
  v7 = HMGRTABLE::AllocHandle(v4 + 192, a2, a3);
  *(_QWORD *)(v3 + 8) = 0LL;
  LODWORD(v4) = v7;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
