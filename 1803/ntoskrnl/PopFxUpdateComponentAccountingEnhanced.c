/*
 * XREFs of PopFxUpdateComponentAccountingEnhanced @ 0x14016C0E4
 * Callers:
 *     PopPepDeviceDState @ 0x140166F3C (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14016C020 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x14016CDA0 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140078894 (PopFxUpdateAccountingActiveTime.c)
 */

__int64 __fastcall PopFxUpdateComponentAccountingEnhanced(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  KIRQL v7; // bp
  __int64 result; // rax
  unsigned int v9; // ecx
  char v10; // r9

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL * a2) + 200LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
  if ( *(int *)(v6 + 16) <= 0 )
  {
    v9 = *(_DWORD *)(v6 + 12);
    if ( v9 != -1 )
    {
      if ( a4 )
      {
        if ( a3 >= v9 )
        {
          PopFxUpdateAccountingActiveTime(v6, MEMORY[0xFFFFF78000000008], 0LL);
          *(_BYTE *)(v6 + 8) = v10;
        }
      }
      else if ( !a3 && !*(_BYTE *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v6 + 8) = 1;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v6);
  result = v7;
  __writecr8(v7);
  return result;
}
