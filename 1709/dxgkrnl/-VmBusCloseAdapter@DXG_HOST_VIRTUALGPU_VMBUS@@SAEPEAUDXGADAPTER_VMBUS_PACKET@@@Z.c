/*
 * XREFs of ?VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191610
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00F3984 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCloseAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned int v1; // edx

  v1 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 24LL);
  if ( v1 )
    DXGADAPTER::DestroyHandle(*(struct DXGPROCESS **)(*((_QWORD *)a1 + 5) + 192LL), v1);
  return 0;
}
