/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x180194174
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180194224 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_180272EF4 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_180272EF8, 2u, 0LL);
    v1 = byte_180272EF4;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_180272EF4 = v1;
  }
  return (unsigned __int8)byte_180272EF8;
}
