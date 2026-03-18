/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x1400E08C8
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14074AF90 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400E078C (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     EtwpCompressionDpc @ 0x140281390 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x140281B58 (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 4u);
      if ( !*(_DWORD *)(a1 + 2328) && *(_QWORD *)(a1 + 2424) >= 2LL * *(_QWORD *)(a1 + 2432) )
        EtwpReenableCompression(a1);
      LODWORD(v5) = *(_DWORD *)(a1 + 2328);
      if ( (_DWORD)v5 )
      {
        LODWORD(v5) = _InterlockedExchange((volatile __int32 *)(a1 + 2296), 2);
        if ( !(_DWORD)v5 )
        {
          if ( KeGetEffectiveIrql() > 2u )
            LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(a1 + 2352), 0LL, 0LL);
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
