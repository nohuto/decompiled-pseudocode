/*
 * XREFs of ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006C7C
 * Callers:
 *     ?VmBusDestroyNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CFC0 (-VmBusDestroyNtSharedObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C008C590 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00D3674 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C0199D60 (--1DXGOVERLAY@@QEAA@XZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::FreeHandleSafe(DXGPROCESS *this, unsigned int a2)
{
  char *v2; // rsi

  v2 = (char *)this + 168;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 168));
  HMGRTABLE::FreeHandle((DXGPROCESS *)((char *)this + 192), a2);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
