/*
 * XREFs of ?VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01941C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0088D0C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusNotifyProcessFreeze(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2)
{
  struct DXGFASTMUTEX **Current; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  Current = (struct DXGFASTMUTEX **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  DXGPROCESS::NotifyProcessFreeze(Current, v3, v4);
  return 0;
}
