/*
 * XREFs of ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C0099710
 * Callers:
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C003B294 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C003B34C (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
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
