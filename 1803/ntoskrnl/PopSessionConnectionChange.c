/*
 * XREFs of PopSessionConnectionChange @ 0x140612D8C
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     PopReleaseAdaptiveLock @ 0x140526D74 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140526E68 (PopAcquireAdaptiveLock.c)
 *     PopSessionDisconnected @ 0x1405EEACC (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x140612E30 (PopSessionConnected.c)
 */

_QWORD *__fastcall PopSessionConnectionChange(unsigned int a1, char *a2, _DWORD *a3)
{
  char v3; // bl
  char v5; // bp
  const char *v7; // rax
  const char *v8; // r8
  __int64 v9; // rdx

  v3 = *a2;
  v5 = a2[1];
  PopAcquireAdaptiveLock(1);
  v7 = "Connected";
  if ( !v3 )
    v7 = "Disconnected";
  v8 = "Console";
  if ( !v5 )
    v8 = "Remote";
  PopPrintEx(3u, (__int64)"PopAdaptive:>>>>>%s session %u is %s\n", v8, a1, v7);
  if ( v3 )
  {
    LOBYTE(v9) = v5;
    PopSessionConnected(a1, v9, a3);
  }
  else
  {
    PopSessionDisconnected(a1, a3);
  }
  return PopReleaseAdaptiveLock();
}
