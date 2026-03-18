/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x140087D7C
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1404F1E3C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14070F288 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140087C44 (EtwpEnqueueAvailableBuffer.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     EtwpCompressionDpc @ 0x140257940 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1402580F8 (EtwpReenableCompression.c)
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
      if ( !*(_DWORD *)(a1 + 1016) && *(_QWORD *)(a1 + 1112) >= 2LL * *(_QWORD *)(a1 + 1120) )
        EtwpReenableCompression(a1);
      LODWORD(v5) = *(_DWORD *)(a1 + 1016);
      if ( (_DWORD)v5 )
      {
        LODWORD(v5) = _InterlockedExchange((volatile __int32 *)(a1 + 984), 2);
        if ( !(_DWORD)v5 )
        {
          if ( (unsigned __int8)KeGetEffectiveIrql(v7, v6) > 2u )
            LOBYTE(v5) = KeInsertQueueDpc((PRKDPC)(a1 + 1040), 0LL, 0LL);
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
