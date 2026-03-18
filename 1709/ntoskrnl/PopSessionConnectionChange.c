/*
 * XREFs of PopSessionConnectionChange @ 0x1405ED750
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     PopReleaseAdaptiveLock @ 0x14059FD4C (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x14059FDE4 (PopAcquireAdaptiveLock.c)
 *     PopSessionConnected @ 0x1405ED7F0 (PopSessionConnected.c)
 *     PopSessionDisconnected @ 0x140709E74 (PopSessionDisconnected.c)
 */

_QWORD *__fastcall PopSessionConnectionChange(unsigned int a1, char *a2, __int64 a3)
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
