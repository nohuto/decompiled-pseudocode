/*
 * XREFs of ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005B698 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E319C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00E3784 (ndisHandleBindNotification.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B07D8 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B4154 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B418C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00BE4BC (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00BE504 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00BE634 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00FB0F4 (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::Reload(
        _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum Ndis::ReadBindingsOptions::Flags a3)
{
  char v4; // bp
  _DEVICE_OBJECT *PhysicalDeviceObject; // rbx
  unsigned int v6; // edi
  enum CallRunMode v7; // r8d
  Ndis::BindStack v9; // [rsp+20h] [rbp-78h] BYREF

  v4 = (char)a2;
  Ndis::BindStack::BindStack(&v9);
  PhysicalDeviceObject = this->PhysicalDeviceObject;
  v6 = 0;
  if ( ndisIsInNetSetupMode() && Ndis::BindStack::ReadV2InterfaceBindings(&v9, &this->InterfaceGuid)
    || Ndis::BindStack::ReadV1InterfaceBindings(&v9, PhysicalDeviceObject) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this->BindEngine.m_lock, 0LL);
    Ndis::BindRegistry::UpdateProtocols(this, &this->Bindings.Protocols.m_bufferSize, (__int64)&v9, v4);
    Ndis::BindRegistry::UpdateFilters(this, (__int64)&this->Bindings.Filters, (__int64)&v9.Filters, v4);
    ++this->Bindings.ChangeEpoch;
    Ndis::BindEngine::EndPolicyUpdates(&this->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&this->BindEngine, RunSynchronous, 0);
    Ndis::Initmode::DisableIfNeeded((Ndis::Initmode *)this, 0LL, v7);
  }
  else
  {
    v6 = -1073741823;
  }
  Ndis::BindStack::~BindStack(&v9);
  return v6;
}
