/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0020270
 * Callers:
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0011B2C (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0013490 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0018820 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001FA50 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0032C90 (imp_WdfDmaEnablerCreate.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0035AC0 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006EEB8 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(unsigned __int64 Object, IFxHasCallbacks **Callbacks)
{
  FxDeviceBase *v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int v8; // edx
  KIRQL v10; // r15
  unsigned int v11; // edx
  unsigned __int16 v12; // ax
  const void *_a1; // rcx
  FxTagTracker *v14; // rcx
  FxTagTracker *v15; // rcx
  const void *_a2; // rdx
  const void *v17; // r12
  FxQueryInterfaceParams cbParams; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(FxDeviceBase **)(Object + 96);
  v3 = 0LL;
  cbParams.Object = (void **)Callbacks;
  v4 = Object;
  *(_DWORD *)&cbParams.Type = 5379;
  if ( v2 )
  {
    if ( Callbacks )
    {
      *Callbacks = 0LL;
      v8 = _InterlockedIncrement((volatile signed __int32 *)(Object + 12));
      if ( *(char *)(Object + 24) < 0 )
      {
        v14 = *(FxTagTracker **)(Object - 48);
        if ( v14 )
          FxTagTracker::UpdateTagHistory(
            v14,
            (void *)v4,
            254,
            "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp",
            TagAddRef,
            v8);
      }
      while ( 1 )
      {
        if ( (*(int (__fastcall **)(unsigned __int64, FxQueryInterfaceParams *))(*(_QWORD *)v4 + 40LL))(v4, &cbParams) >= 0 )
        {
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64, const char *))(*(_QWORD *)v4 + 16LL))(
            v4,
            Object,
            266LL,
            "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
          return v2;
        }
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 56));
        if ( *(_WORD *)(v4 + 26) == 1 )
        {
          v3 = *(_QWORD *)(v4 + 64);
          if ( v3 )
          {
            v11 = _InterlockedIncrement((volatile signed __int32 *)(v3 + 12));
            if ( *(char *)(v3 + 24) < 0 )
            {
              v15 = *(FxTagTracker **)(v3 - 48);
              if ( v15 )
                FxTagTracker::UpdateTagHistory(
                  v15,
                  (void *)Object,
                  896,
                  "minkernel\\wdf\\framework\\shared\\object\\fxobject.cpp",
                  TagAddRef,
                  v11);
            }
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 56), v10);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64, const char *))(*(_QWORD *)v4 + 16LL))(
          v4,
          Object,
          276LL,
          "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
        v4 = v3;
        if ( !v3 )
          break;
        v3 = 0LL;
      }
      if ( v2->QueryInterface(v2, &cbParams) < 0 )
      {
        _a2 = (const void *)((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v2->m_ObjectSize )
          _a2 = 0LL;
        v17 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(Object + 10) )
          v17 = 0LL;
        WPP_IFR_SF_qq(*(_FX_DRIVER_GLOBALS **)(Object + 16), 2u, 0x14u, 0xCu, WPP_FxDeviceBase_cpp_Traceguids, v17, _a2);
      }
    }
    return v2;
  }
  else
  {
    v12 = *(_WORD *)(Object + 10);
    _a1 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v12 )
      _a1 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v4 + 16), 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
    return 0LL;
  }
}
