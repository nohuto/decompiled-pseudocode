/*
 * XREFs of ResetPointerDevices @ 0x1C00FD5F4
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     EditionDeactivateMitInput @ 0x1C00FD450 (EditionDeactivateMitInput.c)
 *     RitPrepDitTakeOver @ 0x1C00FD5A0 (RitPrepDitTakeOver.c)
 * Callees:
 *     <none>
 */

NTSTATUS ResetPointerDevices()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  result = CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle);
    return ZwClose(Handle);
  }
  return result;
}
