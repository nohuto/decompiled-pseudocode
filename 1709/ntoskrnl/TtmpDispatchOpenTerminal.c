/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x1407109A4
 * Callers:
 *     TtmDispatchApi @ 0x1407101DC (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmiAcquireCurrentSession @ 0x1405EA044 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiOpenDefaultTerminal @ 0x14070E4C8 (TtmiOpenDefaultTerminal.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, HANDLE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  HANDLE *v7; // r9
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = TtmiAcquireCurrentSession((__int64)&v9);
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
