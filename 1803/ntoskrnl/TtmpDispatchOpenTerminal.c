/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x140774220
 * Callers:
 *     TtmDispatchApi @ 0x140773A58 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiOpenDefaultTerminal @ 0x140771C84 (TtmiOpenDefaultTerminal.c)
 *     TtmiAcquireCurrentSession @ 0x140773184 (TtmiAcquireCurrentSession.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, HANDLE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  HANDLE *v7; // r9
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = TtmiAcquireCurrentSession(&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = a2;
    v6 = v9;
    v5 = TtmiOpenDefaultTerminal(v9, *(_DWORD *)(a1 + 8), KeGetCurrentThread()->PreviousMode, v7);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal", 154, v4, v4);
    v6 = v9;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v5;
}
