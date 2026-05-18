/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x180004050
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180003F20 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_18000EFAA )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_18000EFA8, 2u, 0LL);
    v1 = byte_18000EFAA;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_18000EFAA = v1;
  }
  return (unsigned __int8)byte_18000EFA8;
}
