/*
 * XREFs of ?VmBusNotifyProcessThaw@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00D7020 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall VmBusNotifyProcessThaw(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent();
  DXGPROCESS::NotifyProcessThaw(Current);
  return 0;
}
