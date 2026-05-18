/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x18000412C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003FFC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_18001281A )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_180012818, 2u, 0LL);
    v1 = byte_18001281A;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_18001281A = v1;
  }
  return (unsigned __int8)byte_180012818;
}
