/*
 * XREFs of PowerConnectionEvent @ 0x1C00987FC
 * Callers:
 *     SetConnectedState @ 0x1C0098790 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C00987C0 (SetConnectCompletedState.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0011690 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00DC95C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 */

NTSTATUS __fastcall PowerConnectionEvent(int a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  int InputBuffer; // [rsp+40h] [rbp+8h] BYREF
  int OutputBuffer; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+4Ch] [rbp+14h]

  InputBuffer = a1;
  v1 = gbConnected != 0;
  if ( dword_1C0190F2C != v1 )
  {
    dword_1C0190F2C = gbConnected != 0;
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      14);
    LOBYTE(InputBuffer) = v1;
    BYTE1(InputBuffer) = gProtocolType == 0;
    result = ZwPowerInformation(
               PowerInformationLevelMaximum|SystemReserveHiberFile,
               &InputBuffer,
               2u,
               &OutputBuffer,
               8u);
    if ( v1 )
    {
      giPowerSessionActivityTimeOutMs = 1000 * OutputBuffer;
      result = 1000 * v5;
      giPowerOffTimeOutMs = 1000 * v5;
      if ( gSystemIsAoAc )
        return SetInputModeWithCrit(0LL);
    }
    else
    {
      giPowerSessionActivityTimeOutMs = 0;
      giPowerOffTimeOutMs = 0;
    }
  }
  return result;
}
