/*
 * XREFs of ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00B2450
 * Callers:
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00ACCF0 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B820C (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00B2380 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(
        NDIS_BIND_DRIVER_BASE *this,
        bool a2,
        enum CallRunMode a3)
{
  void (__fastcall *v5)(_LIST_ENTRY *); // rdx

  this->DriverReady = a2;
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  NDIS_BIND_DRIVER_BASE::ForEachLink(
    this,
    (void (__fastcall *)(_LIST_ENTRY *))lambda_6f963cc78749a40f491d93071c0901d2_::_lambda_invoker_cdecl_);
  v5 = (void (__fastcall *)(_LIST_ENTRY *))lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_;
  if ( a3 )
    v5 = (void (__fastcall *)(_LIST_ENTRY *))lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_;
  NDIS_BIND_DRIVER_BASE::ForEachLink(this, v5);
  Ndis::BindEngine::EndBindOperation();
}
