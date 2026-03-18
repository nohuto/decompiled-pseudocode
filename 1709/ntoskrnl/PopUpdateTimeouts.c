/*
 * XREFs of PopUpdateTimeouts @ 0x1405A0278
 * Callers:
 *     PopConsoleSessionActiveInput @ 0x14059FB14 (PopConsoleSessionActiveInput.c)
 *     PopConsoleSessionPassiveInput @ 0x14059FBC8 (PopConsoleSessionPassiveInput.c)
 *     PopActiveLockScreenPowerRequest @ 0x140709AA0 (PopActiveLockScreenPowerRequest.c)
 *     PopSessionWinlogonNotification @ 0x140709EF4 (PopSessionWinlogonNotification.c)
 * Callees:
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x1405A0374 (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x1405A0434 (PopDiagTraceDisplayTimeout.c)
 */

__int64 __fastcall PopUpdateTimeouts(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  int v6; // r10d
  __int64 *v7; // r8
  const char *v8; // rcx
  __int64 *v9; // r9
  const char *v10; // rdx
  __int64 result; // rax

  PopDiagTraceDisplayTimeout(*a2, *((unsigned __int8 *)a2 + 5), *((unsigned __int8 *)a2 + 4));
  if ( a3 )
    v6 = *a3;
  else
    v6 = 0;
  v7 = (__int64 *)"Zeroed";
  if ( a3 )
  {
    v8 = "Zeroed";
    if ( !*((_BYTE *)a3 + 5) )
      v8 = (const char *)qword_1405FA210;
  }
  else
  {
    v8 = " NULL ";
  }
  v9 = (__int64 *)"Computed";
  if ( a3 )
  {
    v10 = "Computed";
    if ( !*((_BYTE *)a3 + 4) )
      v10 = (const char *)qword_1405FA210;
  }
  else
  {
    v10 = "NULL";
  }
  if ( !*((_BYTE *)a2 + 5) )
    v7 = qword_1405FA210;
  if ( !*((_BYTE *)a2 + 4) )
    v9 = qword_1405FA210;
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
  qword_1403644CC = *(_QWORD *)a2;
  if ( a3 )
  {
    qword_1403644C4 = *(_QWORD *)a3;
    result = PopDiagTraceInputTimeout(*a3, *((unsigned __int8 *)a3 + 5), *((unsigned __int8 *)a3 + 4));
  }
  if ( *((_BYTE *)a2 + 4) )
  {
    result = MEMORY[0xFFFFF78000000320];
    dword_1403644DC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
