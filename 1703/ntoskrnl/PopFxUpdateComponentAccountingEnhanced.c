/*
 * XREFs of PopFxUpdateComponentAccountingEnhanced @ 0x140149A14
 * Callers:
 *     PopPepDeviceDState @ 0x140145904 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140149950 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x14014A6F0 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopFxUpdateComponentAccountingEnhanced(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  KIRQL v7; // bp
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned __int64 v10; // rcx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8LL * a2) + 200LL;
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
          v10 = *(_QWORD *)(v6 + 24);
          if ( *(_BYTE *)(v6 + 8) && MEMORY[0xFFFFF78000000008] >= v10 )
            *(_QWORD *)(v6 + 40) += MEMORY[0xFFFFF78000000008] - v10;
          *(_BYTE *)(v6 + 8) = 0;
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
