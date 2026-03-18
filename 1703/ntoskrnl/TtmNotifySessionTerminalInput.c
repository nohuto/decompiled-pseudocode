/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x1406D9498
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1406D8208 (TtmiResetTerminalTimeouts.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    TtmiLogError("TtmNotifySessionTerminalInput", 2702, v5, -1);
  }
}
