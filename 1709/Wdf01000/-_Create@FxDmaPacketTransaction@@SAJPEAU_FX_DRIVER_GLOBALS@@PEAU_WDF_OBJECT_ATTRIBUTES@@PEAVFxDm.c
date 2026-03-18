/*
 * XREFs of ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006A160
 * Callers:
 *     imp_WdfDmaTransactionCreate @ 0x1C0066B90 (imp_WdfDmaTransactionCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0033744 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z @ 0x1C0068AF8 (--0FxDmaPacketTransaction@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGPEAVFxDmaEnabler@@@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDmaEnabler *DmaEnabler,
        WDFDMATRANSACTION__ **Transaction)
{
  $BB7947A73680E5122718DEC0A57BB44D *DmaDescription; // rax
  unsigned __int16 ExtraSize; // r10
  unsigned __int16 v10; // bx
  FxDmaPacketTransaction *v11; // r10
  FxObject *v12; // rax
  FxObject *v13; // rbx
  int v15; // edi
  void *hTransaction; // [rsp+40h] [rbp-28h] BYREF

  DmaDescription = FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice);
  ExtraSize = 0;
  v10 = 128;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    ExtraSize = 128;
  if ( FxObjectHandleAlloc(
         FxDriverGlobals,
         ExDefaultNonPagedPoolType,
         0x138uLL,
         0,
         Attributes,
         ExtraSize,
         FxObjectTypeExternal) )
  {
    if ( FxDmaEnabler::GetDmaDescription(DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
      v10 = 0;
    FxDmaPacketTransaction::FxDmaPacketTransaction(v11, FxDriverGlobals, 0x138u, v10, DmaEnabler);
    v13 = v12;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v15 = FxObject::Commit(v13, (_FX_DRIVER_GLOBALS *)Attributes, &hTransaction, DmaEnabler, 1u);
    if ( v15 < 0 )
      FxObject::DeleteFromFailedCreate(v13);
    else
      *Transaction = (WDFDMATRANSACTION__ *)hTransaction;
    return (unsigned int)v15;
  }
  else
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionPacket_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
