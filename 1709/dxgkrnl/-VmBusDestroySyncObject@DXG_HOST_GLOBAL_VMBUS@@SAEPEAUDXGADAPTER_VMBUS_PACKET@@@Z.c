/*
 * XREFs of ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A1CA0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroySyncObject(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v4; // [rsp+30h] [rbp+8h] BYREF

  v4.hSyncObject = *(_DWORD *)(*((_QWORD *)a1 + 9) + 24LL);
  DxgkDestroySynchronizationObjectInternal(&v4, 0LL, a3);
  return 0;
}
