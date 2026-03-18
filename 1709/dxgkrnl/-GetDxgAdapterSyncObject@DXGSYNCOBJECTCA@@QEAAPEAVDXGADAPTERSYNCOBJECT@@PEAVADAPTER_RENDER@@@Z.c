/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01BF7D0
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00AF600 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C00E9300 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 * Callees:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0029888 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00298D8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0170208 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 */

struct DXGADAPTERSYNCOBJECT *__fastcall DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGADAPTERSYNCOBJECTCA *AdapterObject; // rbx
  __int64 v7; // rax
  DXGADAPTERSYNCOBJECTCA *v8; // rax

  AdapterObject = DXGSYNCOBJECTCA::FindAdapterObject(this, a2);
  if ( !AdapterObject && v4 )
  {
    if ( (*(_DWORD *)(v5 + 164) & 4) == 0 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v7 + 24) = 1767LL;
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = (DXGADAPTERSYNCOBJECTCA *)operator new(0x40uLL, 0x4B677844u, PagedPool);
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
