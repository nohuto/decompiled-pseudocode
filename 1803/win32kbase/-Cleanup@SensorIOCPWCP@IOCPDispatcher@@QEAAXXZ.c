/*
 * XREFs of ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C0121C10
 * Callers:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0012758 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C0121CE8 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall IOCPDispatcher::SensorIOCPWCP::Cleanup(IOCPDispatcher::SensorIOCPWCP *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
