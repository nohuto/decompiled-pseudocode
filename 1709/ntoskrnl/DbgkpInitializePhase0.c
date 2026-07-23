/*
 * XREFs of DbgkpInitializePhase0 @ 0x14083EE54
 * Callers:
 *     DbgkInitialize @ 0x14083EDD4 (DbgkInitialize.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     DbgkpGetServerSiloState @ 0x1405C4A00 (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase0SiloState @ 0x1405C4A1C (DbgkpInitializePhase0SiloState.c)
 *     RtlRunOnceInitialize @ 0x1405C6200 (RtlRunOnceInitialize.c)
 *     ObCreateObjectType @ 0x1405C6D70 (ObCreateObjectType.c)
 */

void DbgkpInitializePhase0()
{
  char *ServerSiloState; // rax
  __int64 v1; // rbx
  _RTL_RUN_ONCE *v2; // rcx
  _RTL_RUN_ONCE *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-49h]
  UNICODE_STRING v5; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v6[16]; // [rsp+40h] [rbp-29h] BYREF

  *(_DWORD *)&v5.Length = 1572886;
  v5.Buffer = L"DebugObject";
  memset(v6, 0, 0x78uLL);
  DbgkpProcessDebugPortMutex.Owner = 0LL;
  DbgkpProcessDebugPortMutex.Contention = 0;
  DbgkpProcessDebugPortMutex.Event.Header.SignalState = 0;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Blink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Flink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  *(_QWORD *)&v4 = 0x2000200020001LL;
  *((_QWORD *)&v4 + 1) = 0x1F000F00120000LL;
  DbgkpProcessDebugPortMutex.Count = 1;
  LOWORD(DbgkpProcessDebugPortMutex.Event.Header.Lock) = 1;
  DbgkpProcessDebugPortMutex.Event.Header.Size = 6;
  ServerSiloState = DbgkpGetServerSiloState(0LL);
  if ( (int)DbgkpInitializePhase0SiloState(ServerSiloState) >= 0 )
  {
    LODWORD(v6[1]) = 0;
    v6[5] = 0LL;
    v6[9] = CmpMarkLockTryAcquired;
    LOWORD(v6[0]) = 120;
    v1 = 8LL;
    v6[8] = DbgkpCloseObject;
    BYTE2(v6[0]) |= 8u;
    HIDWORD(v6[4]) = 512;
    HIDWORD(v6[3]) = 2031631;
    *(_OWORD *)((char *)&v6[1] + 4) = v4;
    if ( (int)ObCreateObjectType(&v5, (__int64)v6, 0LL, (__int64)&DbgkDebugObjectType) >= 0 )
    {
      if ( !DbgkpMaxModuleMsgs )
        DbgkpMaxModuleMsgs = 500;
      v2 = &RunOnce;
      do
      {
        RtlRunOnceInitialize(v2);
        v2 = v3 + 2;
        --v1;
      }
      while ( v1 );
    }
  }
}
