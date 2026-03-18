/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x14014CAA4
 * Callers:
 *     KeUnmaskInterrupt @ 0x14013CD98 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14014B958 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14014BBAC (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14014C108 (KeConnectInterrupt.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_14033B490[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
