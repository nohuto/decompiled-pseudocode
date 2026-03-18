/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140169730
 * Callers:
 *     KeUnmaskInterrupt @ 0x140155330 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1401686D8 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x1401688E4 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140168E80 (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140398860[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
