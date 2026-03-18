/*
 * XREFs of KeInitializeTimerTable @ 0x1405A79D0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KiInitializeTimer2Data @ 0x140155320 (KiInitializeTimer2Data.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     KiInitializeForceIdle @ 0x1405A7B08 (KiInitializeForceIdle.c)
 */

__int64 __fastcall KeInitializeTimerTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // rsi
  void *v6; // rdi
  __int64 v7; // rcx
  PVOID PoolWithTag; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = (unsigned __int8)off_14033B570[0]() != 0;
    }
    KiInitializeTimer2Data();
  }
  if ( !KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208) + 1] )
  {
    v5 = 0x4000LL;
    if ( *(_BYTE *)(a1 + 208) )
    {
      if ( KiSerializeTimerExpiration )
      {
        v6 = 0LL;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x4000uLL, 0x6254654Bu);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
          return 3221225626LL;
        memset(PoolWithTag, 0, 0x4000uLL);
      }
    }
    else
    {
      v6 = &KiPendingTimersMask0;
      if ( KiSerializeTimerExpiration )
        v5 = 32LL;
    }
    v7 = 2LL * *(unsigned __int8 *)(a1 + 208);
    KiPendingTimerBitmaps[v7] = 8 * v5;
    KiPendingTimerBitmaps[v7 + 1] = (__int64)v6;
  }
  *(_DWORD *)(a1 + 11892) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 22832), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 22888) )
    *(_WORD *)(a1 + 22834) = *(_DWORD *)(a1 + 36) + 640;
  v2 = a1 + 14472;
  v3 = 256LL;
  do
  {
    *(_QWORD *)(v2 - 8) = 0LL;
    *(_QWORD *)(v2 + 8) = v2;
    *(_QWORD *)v2 = v2;
    *(_DWORD *)(v2 + 20) = -1;
    *(_DWORD *)(v2 + 16) = 0;
    v2 += 32LL;
    --v3;
  }
  while ( v3 );
  KiInitializeForceIdle(a1);
  return 0LL;
}
