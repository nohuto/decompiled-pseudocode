/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C003B34C
 * Callers:
 *     ?WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C003B460 (-WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C003B3B8 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUI.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C0099710 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  char *v2; // rbx
  __int64 v3; // rdx

  if ( a2 < *((_DWORD *)this + 642) )
  {
    v2 = (char *)this + 40 * a2;
    v3 = *((_QWORD *)v2 + 3);
    if ( v3 )
    {
      if ( IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v3, *((_QWORD *)v2 + 1)) == *((_QWORD *)v2 + 3) )
        (*((void (__fastcall **)(_QWORD, _QWORD))v2 + 4))(*((_QWORD *)v2 + 2), *((_QWORD *)v2 + 5));
      else
        IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v2 + 8));
    }
  }
}
