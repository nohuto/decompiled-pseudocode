/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C0090124
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C0090090 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C001A300 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z.c)
 *     ApiSetEditionActivateMitInput @ 0x1C009023C (ApiSetEditionActivateMitInput.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C009AB98 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(
        int (*a1)(struct tagDITCALLBACKSTRUCT *),
        unsigned int a2,
        struct _LIST_ENTRY **a3)
{
  struct IOCPDispatcher **v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // rbx
  __int64 (__fastcall **v10)(); // rbx

  v6 = (struct IOCPDispatcher **)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xAu,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  *a3 = 0LL;
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    goto LABEL_4;
  if ( (int)IOCPDispatcher::CreateInstance(v6) >= 0 )
  {
    *a3 = WPP_MAIN_CB.Queue.ListEntry.Blink[161].Blink;
LABEL_4:
    v7 = ApiSetEditionActivateMitInput(a2);
    if ( v7 )
    {
      if ( !a2 )
      {
        v9 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
        RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
        if ( *(_DWORD *)(v9 + 16) == 1 )
          *(_DWORD *)(v9 + 16) = 2;
        *(_QWORD *)(v9 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v9, 0LL);
        KeLeaveCriticalRegion();
        v10 = s_rgSensorMap;
        do
        {
          CBaseInput::HandleInputThreadStateChange((CBaseInput *)v10[3], 0);
          v10 += 6;
        }
        while ( v10 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
        CSpatialProcessor::_spfnDitCallback = a1;
      }
    }
    else
    {
      WPP_RECORDER_SF_(gBaseLog, 2u, 2u, 0xDu, (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        1u,
        0xEu,
        (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
    return v7;
  }
  WPP_RECORDER_SF_(gBaseLog, 2u, 2u, 0xBu, (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xCu,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  return 0LL;
}
