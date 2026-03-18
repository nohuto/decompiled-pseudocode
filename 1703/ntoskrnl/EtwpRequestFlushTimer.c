/*
 * XREFs of EtwpRequestFlushTimer @ 0x14002AE2C
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x140140080 (EtwpLoggerDpc.c)
 *     EtwpFlushActiveBuffers @ 0x1404F1E3C (EtwpFlushActiveBuffers.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, char a2)
{
  unsigned int v3; // ecx
  ULONG v4; // r9d
  __int64 v5; // rdx
  unsigned int v6; // ecx

  if ( (*(_DWORD *)(a1 + 820) & 0x400) == 0 )
  {
    if ( a2 || (unsigned __int8)KeGetEffectiveIrql() > 2u )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 820), 9u) )
        KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
      return 1;
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 820), 0xAu) )
    {
      v3 = *(_DWORD *)(a1 + 208);
      if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
        v3 *= 1000;
      v4 = 500;
      v5 = EtwpOneMs * v3;
      v6 = v3 >> 2;
      if ( v6 < 0x1F4 )
        v4 = v6;
      KeSetCoalescableTimer((PKTIMER)(a1 + 504), (LARGE_INTEGER)v5, 0, v4, 0LL);
      return 1;
    }
  }
  return 0;
}
