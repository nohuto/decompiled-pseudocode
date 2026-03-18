/*
 * XREFs of ACPIEcDisconnectInterrupt @ 0x1C007A084
 * Callers:
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C00223D0 (ACPIEcStopRemoveDeviceCommon.c)
 * Callees:
 *     ACPIEcDisconnectGpeVector @ 0x1C007A010 (ACPIEcDisconnectGpeVector.c)
 */

__int64 __fastcall ACPIEcDisconnectInterrupt(__int64 a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 805) )
  {
    *(_QWORD *)&v5.Version = 0LL;
    v3 = *(void **)(a1 + 808);
    v5.Version = 1;
    v5.ConnectionContext.Generic = v3;
    IoDisconnectInterruptEx(&v5);
    *(_QWORD *)(a1 + 808) = 0LL;
  }
  else
  {
    return (unsigned int)ACPIEcDisconnectGpeVector(a1);
  }
  return v1;
}
