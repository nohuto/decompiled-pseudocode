/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x1400B378C
 * Callers:
 *     KeConnectInterrupt @ 0x1400B2EEC (KeConnectInterrupt.c)
 *     KeDisconnectInterrupt @ 0x140129340 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140129578 (KeMaskInterrupt.c)
 *     KeUnmaskInterrupt @ 0x140207FF4 (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1403534C0[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
