/*
 * XREFs of ?VmBusQueryAdapterInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E6F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  char v2; // di
  unsigned int v4; // eax
  void *v5; // rax
  int v6; // eax
  void *pPrivateDriverData; // rbx
  struct _D3DKMT_QUERYADAPTERINFO v9; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  memset(&v9, 0, sizeof(v9));
  v2 = 0;
  v9.Type = *(_DWORD *)(v1 + 16);
  v4 = *(_DWORD *)(v1 + 20);
  if ( v4 )
  {
    v9.PrivateDriverDataSize = *(_DWORD *)(v1 + 20);
    v5 = operator new[](v4, 0x4B677844u, (enum _POOL_TYPE)512);
    v9.pPrivateDriverData = v5;
    if ( !v5 )
      return v2;
    memmove(v5, (const void *)(v1 + 24), *(unsigned int *)(v1 + 20));
  }
  v6 = DxgkQueryAdapterInfoInternal(&v9, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 8LL));
  pPrivateDriverData = v9.pPrivateDriverData;
  if ( v6 >= 0 )
  {
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v9.pPrivateDriverData, v9.PrivateDriverDataSize);
    v2 = 1;
  }
  if ( pPrivateDriverData )
    operator delete[](pPrivateDriverData);
  return v2;
}
