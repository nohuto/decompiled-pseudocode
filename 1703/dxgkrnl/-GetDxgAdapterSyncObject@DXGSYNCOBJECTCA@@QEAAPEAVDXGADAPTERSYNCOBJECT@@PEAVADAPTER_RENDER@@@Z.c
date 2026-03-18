/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5C5C
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C008A0B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016CC10 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0039440 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0039490 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C016CA6C (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 */

struct DXGADAPTERSYNCOBJECT *__fastcall DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGADAPTERSYNCOBJECTCA *AdapterObject; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DXGADAPTERSYNCOBJECTCA *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9

  AdapterObject = DXGSYNCOBJECTCA::FindAdapterObject(this, a2);
  if ( !AdapterObject && v4 )
  {
    if ( (*(_DWORD *)(v5 + 148) & 4) == 0 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5, v4, v7, v8);
      *(_QWORD *)(v9 + 24) = 1743LL;
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = (DXGADAPTERSYNCOBJECTCA *)operator new(0x40uLL, 0x4B677844u, PagedPool);
    AdapterObject = v10;
    if ( v10 )
    {
      *((_QWORD *)v10 + 2) = a2;
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_WORD *)v10 + 12) = 0;
      *((_BYTE *)v10 + 26) = 0;
      *((_QWORD *)v10 + 7) = this;
      *((_QWORD *)v10 + 5) = 0LL;
      *((_QWORD *)v10 + 6) = 0LL;
    }
    else
    {
      AdapterObject = 0LL;
    }
    if ( !AdapterObject )
      return 0LL;
    if ( (int)DXGADAPTERSYNCOBJECT::InitializeAdapterObject(AdapterObject, this, v11, v12) < 0 )
    {
      DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(AdapterObject);
      return 0LL;
    }
  }
  return AdapterObject;
}
