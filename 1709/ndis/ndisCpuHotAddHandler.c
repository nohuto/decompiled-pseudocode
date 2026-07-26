/*
 * XREFs of ndisCpuHotAddHandler @ 0x1C00E36A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     ndisDmaAddCpuNotify @ 0x1C004B05C (ndisDmaAddCpuNotify.c)
 *     ndisPeriodicReceivesAddCpu @ 0x1C004F75C (ndisPeriodicReceivesAddCpu.c)
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
        WPP_SF_d(0x13u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, *OperationStatus);
      ndisPeriodicReceivesAddCpu(ChangeContext->NtNumber);
      v5 = 0;
    }
    else
    {
      if ( ChangeContext->State != KeProcessorAddFailureNotify )
        return;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_d(0x14u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, *OperationStatus);
      v5 = -1073741823;
    }
    ndisDmaAddCpuNotify(0, ChangeContext->NtNumber, v5);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_dd(0x11u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, *OperationStatus, ChangeContext->NtNumber);
    v6 = ndisDmaAddCpuNotify(1, ChangeContext->NtNumber, *OperationStatus);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_d(0x12u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, v6);
      *OperationStatus = v7;
    }
  }
}
