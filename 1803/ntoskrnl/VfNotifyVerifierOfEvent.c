/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x140813B50
 * Callers:
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x140803C74 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140803DB4 (KdExitDebugger.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x1408A6040 (IoInitSystem.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x1402A95D4 (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     VfNotifyVerifierExtensions @ 0x140815FA0 (VfNotifyVerifierExtensions.c)
 *     VfInitializeBranchTracing @ 0x140823574 (VfInitializeBranchTracing.c)
 *     VfStartBranchTracing @ 0x140823710 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140823798 (VfStopBranchTracing.c)
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
        _InterlockedAdd(&dword_1403A5688, 1u);
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
            _InterlockedAdd(&dword_1403A5694, 1u);
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
          _InterlockedAdd(&dword_1403A5690, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_1403A568C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_1403A5684, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfInitializeBranchTracing();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
