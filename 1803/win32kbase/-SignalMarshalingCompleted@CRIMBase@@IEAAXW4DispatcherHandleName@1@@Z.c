/*
 * XREFs of ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C003AED0
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003ACE0 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C012479C (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SignalMarshalingCompleted(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  CRIMBase::SensorDispatcherObject::MarshalingCompletion *v4; // rcx

  v2 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0xE )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_DWORD *)((v2 << 6) + a1 + 160) != (_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = (CRIMBase::SensorDispatcherObject::MarshalingCompletion *)((v2 << 6) + a1 + 200);
  if ( *(_QWORD *)v4 )
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(v4);
}
