/*
 * XREFs of __chkstk @ 0x18009F810
 * Callers:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     RtlWow64GetProcessMachines @ 0x18007BFC0 (RtlWow64GetProcessMachines.c)
 *     RtlQueryWnfStateData @ 0x18007C1B0 (RtlQueryWnfStateData.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007E420 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180081FA0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     sub_180099480 @ 0x180099480 (sub_180099480.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     RtlValidateProcessHeaps @ 0x1800EBD00 (RtlValidateProcessHeaps.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _chkstk()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
      StackLimit -= 4096;
    while ( v1 != StackLimit );
  }
  return result;
}
