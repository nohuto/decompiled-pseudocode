/*
 * XREFs of PopUpdateTimeouts @ 0x1405265A0
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14048B920 (PopSessionWinlogonNotification.c)
 *     PopConsoleSessionActiveInput @ 0x140527168 (PopConsoleSessionActiveInput.c)
 *     PopConsoleSessionPassiveInput @ 0x1405847B8 (PopConsoleSessionPassiveInput.c)
 *     PopActiveLockScreenPowerRequest @ 0x14076D730 (PopActiveLockScreenPowerRequest.c)
 * Callees:
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     PopDiagTraceInputTimeout @ 0x14052669C (PopDiagTraceInputTimeout.c)
 *     PopDiagTraceDisplayTimeout @ 0x140526A4C (PopDiagTraceDisplayTimeout.c)
 */

char __fastcall PopUpdateTimeouts(int a1, unsigned int *a2, unsigned int *a3)
{
  int v6; // r10d
  const char *v7; // r8
  const char *v8; // rcx
  const char *v9; // r9
  const char *v10; // rdx
  unsigned __int64 v11; // rax

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
      v8 = (const char *)qword_14065D480;
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
      v10 = (const char *)qword_14065D480;
  }
  else
  {
    v10 = "NULL";
  }
  if ( !*((_BYTE *)a2 + 5) )
    v7 = (const char *)qword_14065D480;
  if ( !*((_BYTE *)a2 + 4) )
    v9 = (const char *)qword_14065D480;
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
  qword_1403A7B6C = *(_QWORD *)a2;
  v11 = HIDWORD(qword_1403A7B6C);
  if ( a3 )
  {
    qword_1403A7B64 = *(_QWORD *)a3;
    PopDiagTraceInputTimeout(*a3, *((unsigned __int8 *)a3 + 5), *((unsigned __int8 *)a3 + 4));
    LOBYTE(v11) = *((_BYTE *)a2 + 4);
  }
  if ( (_BYTE)v11 )
  {
    LOBYTE(v11) = MEMORY[0xFFFFF78000000320];
    dword_1403A7B7C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return v11;
}
