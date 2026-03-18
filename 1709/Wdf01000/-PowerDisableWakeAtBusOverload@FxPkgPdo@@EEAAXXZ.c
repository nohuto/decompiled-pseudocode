/*
 * XREFs of ?PowerDisableWakeAtBusOverload@FxPkgPdo@@EEAAXXZ @ 0x1C000DED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPdo::PowerDisableWakeAtBusOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  __int64 v2; // rdx
  FxDeviceBase *v3; // rdx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v6; // rdx

  if ( this->m_EnableWakeAtBusInvoked )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 0;
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 648LL) + 880LL);
    if ( v2 )
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 520));
    v3 = this->m_DeviceBase;
    m_Method = this->m_DeviceDisableWakeAtBus.m_Method;
    m_ObjectSize = v3->m_ObjectSize;
    if ( m_Method )
    {
      v6 = (unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v6 = 0LL;
      m_Method((WDFDEVICE__ *)v6);
    }
  }
}
