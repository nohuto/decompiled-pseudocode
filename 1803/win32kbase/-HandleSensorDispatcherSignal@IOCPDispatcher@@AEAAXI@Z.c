/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0012758
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C003A340 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C003A258 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C0121C10 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  char *v5; // rbx
  __int64 v6; // rdx

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 642) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v3, *((unsigned int *)this + 642), 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v4 = 5LL * (unsigned int)a2;
    v5 = (char *)this + 40 * (unsigned int)a2;
    v6 = *((_QWORD *)v5 + 3);
    if ( v6 )
    {
      if ( IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v6, *((_QWORD *)v5 + 1), 1LL, v3) == *((_QWORD *)v5 + 3) )
        (*((void (__fastcall **)(_QWORD, _QWORD))v5 + 4))(*((_QWORD *)v5 + 2), *((_QWORD *)v5 + 5));
      else
        IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v5 + 8));
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, 0LL);
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v5 + 8, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
}
