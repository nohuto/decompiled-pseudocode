/*
 * XREFs of ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C008725C (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C2264 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C27FC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016BA84 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkCheckSharedResourceAccess @ 0x1C017FCE0 (DxgkCheckSharedResourceAccess.c)
 *     DxgkGetSharedResourceAdapterLuid @ 0x1C0180760 (DxgkGetSharedResourceAdapterLuid.c)
 *     ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0187198 (-ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z @ 0x1C01A4FB4 (-AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01A6034 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BC984 (-DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetObjectA(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v5; // ebx
  unsigned int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  __int64 v11; // rax

  v4 = a3;
  v5 = a2;
  if ( *(struct _KTHREAD **)(a1 + 144) != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 896LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = (v5 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 192)
    && (v8 = *(_QWORD *)(a1 + 176),
        v9 = *(_DWORD *)(v8 + 16LL * v7 + 8),
        ((v5 >> 26) & 0x30) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x30))
    && (v9 & 0x1000) == 0
    && (v9 & 0xF) != 0
    && v4 == (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0xF) )
  {
    return *(_QWORD *)(v8 + 16LL * v7);
  }
  else
  {
    return 0LL;
  }
}
