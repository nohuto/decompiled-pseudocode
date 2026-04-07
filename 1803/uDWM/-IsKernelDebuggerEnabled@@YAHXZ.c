/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800A89EC
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800A8A9C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_1800C9D58 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1800CCAF0, 2u, 0LL);
    v1 = byte_1800C9D58;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_1800C9D58 = v1;
  }
  return (unsigned __int8)byte_1800CCAF0;
}
