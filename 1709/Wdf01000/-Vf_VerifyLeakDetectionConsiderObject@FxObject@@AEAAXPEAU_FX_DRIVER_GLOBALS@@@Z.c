/*
 * XREFs of ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C0003BB0 (imp_WdfMemoryCreate.c)
 *     imp_WdfRequestCreate @ 0x1C0006A00 (imp_WdfRequestCreate.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0014C30 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0019320 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0019FB0 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C001C710 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     imp_WdfObjectCreate @ 0x1C001F010 (imp_WdfObjectCreate.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     imp_WdfSpinLockCreate @ 0x1C00203C0 (imp_WdfSpinLockCreate.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00227C0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002A790 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00313E0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031860 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0032E40 (imp_WdfCommonBufferCreateWithConfig.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxVerifierIsDebugInfoFlagSetForType @ 0x1C00809B0 (FxVerifierIsDebugInfoFlagSetForType.c)
 *     WPP_IFR_SF_DDD @ 0x1C0082050 (WPP_IFR_SF_DDD.c)
 */

void __fastcall FxObject::Vf_VerifyLeakDetectionConsiderObject(FxObject *this, _FX_DRIVER_GLOBALS *a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rbx
  __int16 v5; // dx
  unsigned int level; // esi
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  m_Globals = this->m_Globals;
  FxVerifyLeakDetection = m_Globals->FxVerifyLeakDetection;
  if ( FxVerifyLeakDetection
    && FxVerifyLeakDetection->Enabled
    && (FxVerifierIsDebugInfoFlagSetForType(
          m_Globals->DebugExtension->ObjectDebugInfo,
          this->m_Type,
          FxObjectDebugTrackObjectCount)
     || v5 == 4098) )
  {
    if ( v5 == 4098 )
    {
      if ( v5 == 4098 && _InterlockedIncrement(&FxVerifyLeakDetection->DeviceCnt) >= 2 )
        _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, FxVerifyLeakDetection->Limit);
      goto LABEL_12;
    }
    if ( v5 != 4104 || BYTE5(this[2].__vftable) == 2 )
    {
LABEL_12:
      BYTE4(this[-1].m_ChildEntry.Blink) = 1;
      level = _InterlockedIncrement(&FxVerifyLeakDetection->ObjectCnt);
      if ( level == FxVerifyLeakDetection->LimitScaled )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0x14u, 0xBu, WPP_FxObject_cpp_Traceguids);
        WPP_IFR_SF_DDD(
          this->m_Globals,
          v7,
          v8,
          v9,
          traceGuid,
          level,
          FxVerifyLeakDetection->Limit,
          FxVerifyLeakDetection->LimitScaled);
        FxVerifierDbgBreakPoint(this->m_Globals);
        FxVerifyLeakDetection->Enabled = 0;
      }
    }
  }
}
