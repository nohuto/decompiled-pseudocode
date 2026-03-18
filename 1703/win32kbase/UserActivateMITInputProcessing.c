/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C008B110
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C008AFE0 (NtMITActivateInputProcessing.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0IOCPDispatcher@@IEAA@XZ @ 0x1C004C764 (--0IOCPDispatcher@@IEAA@XZ.c)
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C004CF70 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C004F8CC (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ApiSetEditionActivateMitInput @ 0x1C008B258 (ApiSetEditionActivateMitInput.c)
 *     CreateKernelIocp @ 0x1C0091EA0 (CreateKernelIocp.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(int (*a1)(struct tagDITCALLBACKSTRUCT *), unsigned int a2)
{
  unsigned int v2; // esi
  int v4; // edx
  unsigned int v5; // edi
  __int64 v7; // rbx
  __int64 (__fastcall **v8)(); // rbx
  IOCPDispatcher *v9; // rax
  int v10; // edx
  struct _LIST_ENTRY *v11; // rbx
  __int64 KernelIocp; // rax
  int v13; // edx

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      10,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
  }
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    goto LABEL_4;
  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  v9 = (IOCPDispatcher *)Win32AllocPool(2688LL, 0x70694843u);
  if ( v9 )
    v11 = (struct _LIST_ENTRY *)IOCPDispatcher::IOCPDispatcher(v9);
  else
    v11 = 0LL;
  if ( v11 )
  {
    KernelIocp = CreateKernelIocp(1u);
    v11[161].Flink = (struct _LIST_ENTRY *)KernelIocp;
    if ( KernelIocp )
    {
      WPP_MAIN_CB.Queue.ListEntry.Blink = v11;
LABEL_4:
      v5 = ApiSetEditionActivateMitInput(v2);
      if ( v5 )
      {
        if ( !v2 )
        {
          v7 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
          RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
          if ( *(_DWORD *)(v7 + 16) == 1 )
            *(_DWORD *)(v7 + 16) = 2;
          *(_QWORD *)(v7 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v7, 0LL);
          KeLeaveCriticalRegion();
          v8 = s_rgSensorMap;
          do
          {
            CBaseInput::HandleInputThreadStateChange((CBaseInput *)v8[3], 0);
            v8 += 6;
          }
          while ( v8 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
          CSpatialProcessor::_spfnDitCallback = a1;
        }
      }
      else
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_(gBaseLog, v4, 2, 13, (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v4) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          1,
          14,
          (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
      }
      return v5;
    }
    IOCPDispatcher::`scalar deleting destructor'((HANDLE *)&v11->Flink);
  }
  LOBYTE(v10) = 2;
  WPP_RECORDER_SF_(gBaseLog, v10, 2, 11, (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      1,
      12,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
  }
  return 0LL;
}
