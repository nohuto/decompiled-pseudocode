/*
 * XREFs of ?VmBusDestroyContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CF60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyContext @ 0x1C00FBE40 (DxgkDestroyContext.c)
 */

unsigned __int8 __fastcall VmBusDestroyContext(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 16LL);
  DxgkDestroyContext(&v2);
  return 0;
}
