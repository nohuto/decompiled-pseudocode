/*
 * XREFs of ACPIPepWorker @ 0x1C0085650
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     ACPIPepGetNextPlatformNotification @ 0x1C0085108 (ACPIPepGetNextPlatformNotification.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00853E4 (ACPIPepPlatformEntryExitNotify.c)
 */

void __fastcall ACPIPepWorker(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v3; // rdi
  char v5[4]; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+34h] [rbp-1Ch] BYREF
  _QWORD InputBuffer[2]; // [rsp+38h] [rbp-18h] BYREF

  v3 = (struct _FAST_MUTEX *)(a1 + 184);
  while ( 1 )
  {
    ExAcquireFastMutex(v3);
    if ( !ACPIPepGetNextPlatformNotification((_BYTE *)a1, &v6, v5) )
      break;
    ExReleaseFastMutex(v3);
    ACPIPepPlatformEntryExitNotify(a1, v6, v5[0]);
  }
  if ( *(_BYTE *)(a1 + 247) )
  {
    *(_BYTE *)(a1 + 247) = 0;
    InputBuffer[1] = 0LL;
    InputBuffer[0] = 40LL;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x10u, 0LL, 0);
  }
  ExReleaseFastMutex(v3);
  if ( (a2 & 1) != 0 )
    KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
}
