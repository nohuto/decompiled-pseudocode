/*
 * XREFs of PopUpdateTimeouts @ 0x140420304
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14041DDF0 (PopSessionWinlogonNotification.c)
 *     PopConsoleSessionPassiveInput @ 0x14042020C (PopConsoleSessionPassiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x14042028C (PopConsoleSessionActiveInput.c)
 *     PopActiveLockScreenPowerRequest @ 0x1406D43F0 (PopActiveLockScreenPowerRequest.c)
 * Callees:
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x140420400 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x1404204BC (PopDiagTraceDisplayTimeout.c)
 */

__int64 __fastcall PopUpdateTimeouts(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  int v6; // r10d
  const char *v7; // r8
  const char *v8; // rcx
  const char *v9; // r9
  const char *v10; // rdx
  __int64 result; // rax

  PopDiagTraceDisplayTimeout(*a2, *((unsigned __int8 *)a2 + 5), *((unsigned __int8 *)a2 + 4));
  if ( a3 )
    v6 = *a3;
  else
    v6 = 0;
  v7 = "Zeroed";
  if ( a3 )
  {
    v8 = "Zeroed";
    if ( !*((_BYTE *)a3 + 5) )
      v8 = File;
  }
  else
  {
    v8 = " NULL ";
  }
  v9 = "Computed";
  if ( a3 )
  {
    v10 = "Computed";
    if ( !*((_BYTE *)a3 + 4) )
      v10 = File;
  }
  else
  {
    v10 = "NULL";
  }
  if ( !*((_BYTE *)a2 + 5) )
    v7 = File;
  if ( !*((_BYTE *)a2 + 4) )
    v9 = File;
  PopPrintEx(
    3u,
    (__int64)"PopAdaptive: Console session %u timeouts: %s%s Display:%u,: %s%sInput:%u\n",
    a1,
    v9,
    v7,
    *a2,
    v10,
    v8,
    v6);
  result = *(_QWORD *)a2;
  qword_140349E8C = *(_QWORD *)a2;
  if ( a3 )
  {
    qword_140349E84 = *(_QWORD *)a3;
    result = PopDiagTraceInputTimeout(*a3, *((unsigned __int8 *)a3 + 5), *((unsigned __int8 *)a3 + 4));
  }
  if ( *((_BYTE *)a2 + 4) )
  {
    result = MEMORY[0xFFFFF78000000320];
    dword_140349E9C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
