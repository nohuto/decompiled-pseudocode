/*
 * XREFs of ResetPointerDevices @ 0x1C0109C28
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     DitPrepRitTakeOver @ 0x1C0109914 (DitPrepRitTakeOver.c)
 *     RitPrepDitTakeOver @ 0x1C0109A88 (RitPrepDitTakeOver.c)
 * Callees:
 *     <none>
 */

NTSTATUS ResetPointerDevices()
{
  NTSTATUS result; // eax
  PRKEVENT v1; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h]

  result = (NTSTATUS)aDeviceTemplate[0];
  v1 = aDeviceTemplate[153];
  if ( v1 )
  {
    result = RawInputManagerObjectCreateKernelHandle(v1, 3LL, 0LL);
    if ( result >= 0 )
    {
      RIMResetPointerDevices(Handle);
      return ZwClose(Handle);
    }
  }
  return result;
}
