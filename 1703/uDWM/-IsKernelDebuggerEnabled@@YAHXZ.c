/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800A131C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800A13CC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1800C0D88 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1800C3A30, 2u, 0LL);
    v1 = byte_1800C0D88;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1800C0D88 = v1;
  }
  return (unsigned __int8)byte_1800C3A30;
}
