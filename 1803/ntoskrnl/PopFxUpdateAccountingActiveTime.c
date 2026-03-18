/*
 * XREFs of PopFxUpdateAccountingActiveTime @ 0x140078894
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140078414 (PopFxIdleWorkerTail.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x14016C0E4 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopFxPauseDeviceAccounting @ 0x14027593C (PopFxPauseDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140276A14 (PopFxStopDeviceAccounting.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x140276DFC (PopFxUpdateDeviceAccountingEnhanced.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxUpdateAccountingActiveTime(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 *i; // r8

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v5 = a2 - v4;
      *(_QWORD *)(a1 + 40) += v5;
      if ( v5 >= a3 )
      {
        for ( i = PopFxAccountingBucketLimits; v5 < *i || v5 >= PopFxAccountingBucketLimits[(unsigned int)(v3 + 1)]; ++i )
        {
          v3 = (unsigned int)(v3 + 1);
          if ( (unsigned int)v3 >= 5 )
            return;
        }
        ++*(_QWORD *)(a1 + 8 * v3 + 48);
      }
    }
  }
}
