/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01C08B8
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00DFE10 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00FC0D0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C014748C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0034974 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00349D4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0147218 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 */

struct DXGADAPTERSYNCOBJECT *__fastcall DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGADAPTERSYNCOBJECT *AdapterObject; // rbx
  __int64 v7; // rax
  DXGADAPTERSYNCOBJECT *v8; // rax

  AdapterObject = DXGSYNCOBJECTCA::FindAdapterObject(this, a2);
  if ( !AdapterObject && v4 )
  {
    if ( (*(_DWORD *)(v5 + 172) & 4) == 0 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v7 + 24) = 1915LL;
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = (DXGADAPTERSYNCOBJECT *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
    AdapterObject = v8;
    if ( v8 )
    {
      *((_QWORD *)v8 + 2) = a2;
      *(_QWORD *)v8 = 0LL;
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      *((_WORD *)v8 + 12) = 0;
      *((_BYTE *)v8 + 26) = 0;
      *((_QWORD *)v8 + 7) = this;
      *((_QWORD *)v8 + 5) = 0LL;
      *((_QWORD *)v8 + 6) = 0LL;
    }
    else
    {
      AdapterObject = 0LL;
    }
    if ( !AdapterObject )
      return 0LL;
    if ( (int)DXGADAPTERSYNCOBJECT::InitializeAdapterObject(AdapterObject, this) < 0 )
    {
      DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(AdapterObject);
      return 0LL;
    }
  }
  return AdapterObject;
}
