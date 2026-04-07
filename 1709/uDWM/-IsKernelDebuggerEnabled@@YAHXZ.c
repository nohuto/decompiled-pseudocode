/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18009FAA0
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009FB50 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1800BEDC8 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1800C1AE0, 2u, 0LL);
    v1 = byte_1800BEDC8;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1800BEDC8 = v1;
  }
  return (unsigned __int8)byte_1800C1AE0;
}
