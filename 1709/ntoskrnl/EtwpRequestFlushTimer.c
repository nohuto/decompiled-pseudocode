/*
 * XREFs of EtwpRequestFlushTimer @ 0x1400E0C64
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x14027DFA0 (EtwpLoggerDpc.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, char a2)
{
  unsigned int v3; // ecx
  ULONG v4; // r9d
  __int64 v5; // rdx
  unsigned int v6; // ecx

  if ( (*(_DWORD *)(a1 + 836) & 0x400) == 0 )
  {
    if ( a2 || KeGetEffectiveIrql() > 2u )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 9u) )
        KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
      return 1;
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 0xAu) )
    {
      v3 = *(_DWORD *)(a1 + 224);
      if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
        v3 *= 1000;
      v4 = 500;
      v5 = EtwpOneMs * v3;
      v6 = v3 >> 2;
      if ( v6 < 0x1F4 )
        v4 = v6;
      KeSetCoalescableTimer((PKTIMER)(a1 + 520), (LARGE_INTEGER)v5, 0, v4, 0LL);
      return 1;
    }
  }
  return 0;
}
