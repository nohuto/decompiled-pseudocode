/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1400082E0
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000838C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_140011B42 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_140011B40, 2u, 0LL);
    v1 = byte_140011B42;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_140011B42 = v1;
  }
  return (unsigned __int8)byte_140011B40;
}
