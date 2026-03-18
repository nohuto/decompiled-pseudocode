/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1400088E8
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140008994 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_140012BF2 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_140012BF0, 2u, 0LL);
    v1 = byte_140012BF2;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_140012BF2 = v1;
  }
  return (unsigned __int8)byte_140012BF0;
}
