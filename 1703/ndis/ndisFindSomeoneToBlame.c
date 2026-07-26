/*
 * XREFs of ndisFindSomeoneToBlame @ 0x1C00F0134
 * Callers:
 *     ndisWaitForExternalDriver @ 0x1C00BF894 (ndisWaitForExternalDriver.c)
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C00F0074 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C00F0274 (ndisReportTimeoutWaitingForExternalDriver.c)
 */

void __fastcall ndisFindSomeoneToBlame(unsigned int a1, __int64 a2, _LIST_ENTRY *a3)
{
  _LIST_ENTRY **v3; // rbx
  __int64 v6; // r14
  unsigned int v7; // ebp
  struct _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY **p_Blink; // rdi
  unsigned int v10; // eax
  KLockHolder v11; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0LL;
  v11.m_State = Unlocked;
  v11.m_Lock = (KPushLockBase *)&g_ndisWatchdogLock;
  v11.m_Region.m_Entered = 0;
  v6 = a2;
  v7 = -1;
  KLockHolder::AcquireExclusive(&v11);
  Flink = g_ndisWatchdogList.Flink;
  if ( g_ndisWatchdogList.Flink == &g_ndisWatchdogList )
    goto LABEL_14;
  do
  {
    p_Blink = &Flink[-17].Blink;
    if ( !KeReadStateEvent((PRKEVENT)&Flink[-6])
      && p_Blink[29] == a3
      && 10000LL * (MEMORY[0xFFFFF78000000008] - (_QWORD)p_Blink[28]) >= (unsigned __int64)*((unsigned int *)p_Blink + 51) >> 2 )
    {
      v10 = g_ndisWatchdogSequenceNumber - *((_DWORD *)p_Blink + 41);
      if ( v10 >= v7 )
      {
        *((_DWORD *)p_Blink + 40) = 0;
      }
      else
      {
        if ( v3 )
          *((_DWORD *)v3 + 40) = 0;
        v3 = &Flink[-17].Blink;
        v7 = v10;
      }
    }
    Flink = Flink->Flink;
  }
  while ( Flink != &g_ndisWatchdogList );
  v6 = a2;
  if ( !v3 )
  {
LABEL_14:
    ndisReportTimeoutWaitingForExternalDriver(a1, v6);
  }
  else if ( *((_DWORD *)v3 + 40) )
  {
    ndisReportTimeoutWaitingForExternalDriver(*((unsigned int *)v3 + 48), v3 + 25);
    *((_DWORD *)v3 + 40) = 0;
  }
  KLockHolder::~KLockHolder(&v11);
}
