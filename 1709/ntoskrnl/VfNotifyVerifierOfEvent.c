/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x1407A69D0
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x140796C6C (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140796D74 (KdExitDebugger.c)
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x14082FC9C (IoInitSystem.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x140276548 (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 *     VfNotifyVerifierExtensions @ 0x1407A8F68 (VfNotifyVerifierExtensions.c)
 *     VfInitializeBranchTracing @ 0x1407B5880 (VfInitializeBranchTracing.c)
 *     VfStartBranchTracing @ 0x1407B5A1C (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x1407B5AA4 (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140362048, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140362054, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfClearVerifierSettings();
            }
            VfNotifyVerifierExtensions(0LL, 2LL);
          }
        }
        else
        {
          _InterlockedAdd(&dword_140362050, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_14036204C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140362044, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfInitializeBranchTracing();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
