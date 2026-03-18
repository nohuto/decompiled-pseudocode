/*
 * XREFs of ?VmBusDestroySyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D250
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00D73B0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

unsigned __int8 __fastcall VmBusDestroySyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v2; // [rsp+30h] [rbp+8h] BYREF

  v2.hSyncObject = *(_DWORD *)(*((_QWORD *)a1 + 9) + 16LL);
  DxgkDestroySynchronizationObjectInternal(&v2, 0);
  return 0;
}
