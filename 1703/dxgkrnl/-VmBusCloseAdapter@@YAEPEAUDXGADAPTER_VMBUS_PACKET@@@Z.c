/*
 * XREFs of ?VmBusCloseAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

unsigned __int8 __fastcall VmBusCloseAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned int v1; // edx

  v1 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 16LL);
  if ( v1 )
    DXGADAPTER::DestroyHandle(*(struct DXGPROCESS **)(*((_QWORD *)a1 + 5) + 88LL), v1);
  return 0;
}
