/*
 * XREFs of PopDiagIdleWakeAccountingStart @ 0x1407657F8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void PopDiagIdleWakeAccountingStart()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx

  if ( !PopDiagGlobalIdleWakeAccounting )
  {
    memset(&PopDiagGlobalIdleWakeAccounting, 0, 0xAA8uLL);
    v0 = &unk_1403A8AF0;
    dword_1403A8A48 = 3;
    v1 = 64LL;
    dword_1403A8A70 = 2;
    dword_1403A8A98 = 4;
    dword_1403A8AC0 = 5;
    do
    {
      *v0 = -1LL;
      v0 += 5;
      --v1;
    }
    while ( v1 );
    PopDiagGlobalIdleWakeAccounting = 1;
  }
}
