/*
 * XREFs of __chkstk @ 0x1800A9EF0
 * Callers:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     RtlWow64GetProcessMachines @ 0x180068580 (RtlWow64GetProcessMachines.c)
 *     RtlQueryWnfStateData @ 0x180081350 (RtlQueryWnfStateData.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180084FA0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180087AE0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800A3EC8 @ 0x1800A3EC8 (sub_1800A3EC8.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     RtlValidateProcessHeaps @ 0x1800EFD20 (RtlValidateProcessHeaps.c)
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
