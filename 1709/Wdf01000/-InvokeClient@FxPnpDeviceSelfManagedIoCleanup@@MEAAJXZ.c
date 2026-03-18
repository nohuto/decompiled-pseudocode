/*
 * XREFs of ?InvokeClient@FxPnpDeviceSelfManagedIoCleanup@@MEAAJXZ @ 0x1C009A740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoCleanup::InvokeClient(FxPnpDeviceSurpriseRemoval *this)
{
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  m_Method = this->m_Method;
  if ( m_Method )
    m_Method(this->m_Device);
  return 0LL;
}
