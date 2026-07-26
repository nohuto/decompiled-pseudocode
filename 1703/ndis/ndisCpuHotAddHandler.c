/*
 * XREFs of ndisCpuHotAddHandler @ 0x1C00D92E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     ndisDmaAddCpuNotify @ 0x1C004D53C (ndisDmaAddCpuNotify.c)
 *     ndisPeriodicReceivesAddCpu @ 0x1C0050B8C (ndisPeriodicReceivesAddCpu.c)
 */

void __fastcall ndisCpuHotAddHandler(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  unsigned int v5; // r8d
  int v6; // eax
  NTSTATUS v7; // ebx

  if ( ChangeContext->State )
  {
    if ( ChangeContext->State == KeProcessorAddCompleteNotify )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_d(0x14u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, *OperationStatus);
      ndisPeriodicReceivesAddCpu(ChangeContext->NtNumber);
      v5 = 0;
    }
    else
    {
      if ( ChangeContext->State != KeProcessorAddFailureNotify )
        return;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_d(0x15u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, *OperationStatus);
      v5 = -1073741823;
    }
    ndisDmaAddCpuNotify(0, ChangeContext->NtNumber, v5);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_dd(0x12u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, *OperationStatus, ChangeContext->NtNumber);
    v6 = ndisDmaAddCpuNotify(1, ChangeContext->NtNumber, *OperationStatus);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_d(0x13u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v6);
      *OperationStatus = v7;
    }
  }
}
