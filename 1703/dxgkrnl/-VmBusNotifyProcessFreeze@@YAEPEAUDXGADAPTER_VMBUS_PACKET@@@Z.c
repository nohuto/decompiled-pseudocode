/*
 * XREFs of ?VmBusNotifyProcessFreeze@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00D6ECC (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall VmBusNotifyProcessFreeze(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent();
  DXGPROCESS::NotifyProcessFreeze(Current);
  return 0;
}
