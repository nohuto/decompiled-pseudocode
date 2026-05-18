/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x180003D84
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003C54 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_18001185A )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_180011858, 2u, 0LL);
    v1 = byte_18001185A;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_18001185A = v1;
  }
  return (unsigned __int8)byte_180011858;
}
