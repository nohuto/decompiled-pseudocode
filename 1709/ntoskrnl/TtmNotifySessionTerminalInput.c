/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x14070F820
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x14070E590 (TtmiResetTerminalTimeouts.c)
 */

void __fastcall TtmNotifySessionTerminalInput(int a1, int a2, char a3)
{
  int v5; // eax
  __int64 i; // rdx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v5 = TtmpAcquireSessionById(&v7, a1);
  if ( v5 >= 0 )
  {
    for ( i = *(_QWORD *)(v7 + 40); i != v7 + 40; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 28) == a2 )
      {
        TtmiResetTerminalTimeouts(v7, i, 4, 1950962771, a3);
        break;
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    TtmiLogError("TtmNotifySessionTerminalInput", 2702, v5, -1);
  }
}
