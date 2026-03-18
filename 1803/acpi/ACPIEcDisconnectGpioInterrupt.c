/*
 * XREFs of ACPIEcDisconnectGpioInterrupt @ 0x1C007A03C
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0021D28 (ACPIEcInitOpRegionHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcDisconnectGpioInterrupt(__int64 a1)
{
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&Parameters.Version = 0LL;
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 808);
  Parameters.Version = 1;
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 808) = 0LL;
  return 0LL;
}
