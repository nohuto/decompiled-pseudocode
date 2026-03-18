/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1801892CC
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18018937C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_180241C0A )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_180241C08, 2u, 0LL);
    v1 = byte_180241C0A;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_180241C0A = v1;
  }
  return (unsigned __int8)byte_180241C08;
}
