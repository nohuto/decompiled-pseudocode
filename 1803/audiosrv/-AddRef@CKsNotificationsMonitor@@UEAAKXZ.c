/*
 * XREFs of ?AddRef@CKsNotificationsMonitor@@UEAAKXZ @ 0x180018360
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x1800554DC (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKsNotificationsMonitor::AddRef(CKsNotificationsMonitor *this)
{
  signed __int32 v1; // eax

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 1u);
  ++CKsNotificationsMonitor::m_cRefAll;
  return (unsigned int)(v1 + 1);
}
