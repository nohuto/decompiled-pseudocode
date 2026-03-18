/*
 * XREFs of CmpDoFlushNextHive @ 0x1404D8270
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14048D310 (CmpDoQueueLateUnloadWorker.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // di
  unsigned __int64 v6; // rcx
  __int64 NextActiveHive; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 UnbiasedInterruptTime; // r11

  v2 = -1LL;
  v3 = 0;
  if ( CmpNoWrite )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v8 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 144) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 88) || *(_BYTE *)(NextActiveHive + 175) )
        {
          UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
          v6 = *(_QWORD *)(NextActiveHive + 5384) + 10000000LL * (unsigned int)dword_14033B840;
          if ( UnbiasedInterruptTime >= v6 )
          {
            if ( (int)CmpFlushHive(NextActiveHive, 0x12u) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v8 = 10000000LL * (unsigned int)dword_14033B84C;
            }
          }
          else
          {
            v3 = 1;
            v8 = v6 - UnbiasedInterruptTime;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 5488) & 4) == 0 )
        {
          CmpFlushHive(NextActiveHive, 0x22u);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 4112) == 1 )
      {
        LOCK_HIVE_LOAD(v6);
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 4112) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
      }
      if ( v8 < v2 )
        v2 = v8;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v2;
  }
  return v3;
}
