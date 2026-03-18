/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C004C868
 * Callers:
 *     ?WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C004C980 (-WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C004C8D8 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUI.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C00906A0 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  __int64 v2; // r8
  char *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h]

  if ( a2 < *((_DWORD *)this + 642) )
  {
    v2 = a2;
    v3 = (char *)this + 40 * a2;
    v4 = *((_QWORD *)v3 + 3);
    if ( v4 )
    {
      v7 = v2;
      v5 = *((_QWORD *)v3 + 1);
      v6 = 1;
      if ( IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v4, v5, 0LL, &v6) == *((_QWORD *)v3 + 3) )
        (*((void (__fastcall **)(_QWORD, _QWORD))v3 + 4))(*((_QWORD *)v3 + 2), *((_QWORD *)v3 + 5));
      else
        IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v3 + 8));
    }
  }
}
