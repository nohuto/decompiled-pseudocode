/*
 * XREFs of ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BB50 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00D8DD8 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00D93C4 (ndisHandleBindNotification.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00AF260 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B1584 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00B1BBC (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00B1C04 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00B1E3C (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B8E78 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8F74 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00F1C14 (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::Reload(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum Ndis::ReadBindingsOptions::Flags a3)
{
  unsigned int v4; // ebp
  _DEVICE_OBJECT *PhysicalDeviceObject; // rbx
  unsigned int v6; // edi
  enum CallRunMode v7; // r8d
  Ndis::BindStack v9; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned int)a2;
  Ndis::BindStack::BindStack(&v9);
  PhysicalDeviceObject = this->PhysicalDeviceObject;
  v6 = 0;
  if ( ndisIsInNetSetupMode() && Ndis::BindStack::ReadV2InterfaceBindings(&v9, &this->InterfaceGuid)
    || Ndis::BindStack::ReadV1InterfaceBindings(&v9, PhysicalDeviceObject) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this->BindEngine.m_lock, 0LL);
    Ndis::BindRegistry::UpdateProtocols((__int64)this, (__int64)&this->Bindings, (__int64)&v9, v4);
    Ndis::BindRegistry::UpdateFilters(this, &this->Bindings.Filters, &v9.Filters, v4);
    ++this->Bindings.ChangeEpoch;
    Ndis::BindEngine::EndPolicyUpdates(&this->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&this->BindEngine, RunSynchronous, 0);
    Ndis::Initmode::DisableIfNeeded(this, RunSynchronous, v7);
  }
  else
  {
    v6 = -1073741823;
  }
  Ndis::BindStack::~BindStack(&v9);
  return v6;
}
