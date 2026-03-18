/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x1400D4574
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400D40D0 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x140591300 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1407AD440 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400D4438 (EtwpEnqueueAvailableBuffer.c)
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     EtwpCompressionDpc @ 0x1402B3620 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1402B3DEC (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 4u);
      if ( !*(_DWORD *)(a1 + 1184) && *(_QWORD *)(a1 + 1280) >= 2LL * *(_QWORD *)(a1 + 1288) )
        EtwpReenableCompression(a1);
      LODWORD(v5) = *(_DWORD *)(a1 + 1184);
      if ( (_DWORD)v5 )
      {
        LODWORD(v5) = _InterlockedExchange((volatile __int32 *)(a1 + 1152), 2);
        if ( !(_DWORD)v5 )
        {
          if ( (unsigned __int8)KeGetEffectiveIrql(v7, v6) > 2u )
            LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(a1 + 1208), 0LL, 0LL);
          else
            LOBYTE(v5) = EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      LOBYTE(v5) = EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 3;
    v5 = (*(__int64 (**)(void))(a1 + 40))();
    *(_QWORD *)(a2 + 16) = v5;
  }
  return v5;
}
