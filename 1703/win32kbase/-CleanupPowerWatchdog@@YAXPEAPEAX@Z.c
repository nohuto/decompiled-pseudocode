/*
 * XREFs of ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C0063CF4
 * Callers:
 *     CleanupPowerRequestList @ 0x1C0063C90 (CleanupPowerRequestList.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CleanupPowerWatchdog(void **a1)
{
  __int64 v1; // rdi
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    memset(InputBuffer, 0, 0x60uLL);
    *a1 = 0LL;
    LODWORD(InputBuffer[0]) = 21;
    LOBYTE(InputBuffer[11]) = 1;
    InputBuffer[1] = v1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
  }
}
