/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x140031420
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExTimerResume @ 0x14003155C (ExTimerResume.c)
 *     ExpTimerPause @ 0x1400315B0 (ExpTimerPause.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  KIRQL v5; // r12
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 *i; // rdi
  signed __int32 v9; // eax
  int v10; // r8d
  signed __int32 v11; // edx

  v2 = *(_QWORD *)(a1 + 944);
  if ( (*(_DWORD *)(a1 + 772) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 772) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1304) & 0x40000) != 0
    && (**(_DWORD **)a2 & 1) != 0
    && *(_DWORD *)(v2 + 856) <= 1u )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1992));
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = MEMORY[0xFFFFF78000000014];
    for ( i = *(__int64 **)(a1 + 2000); i != (__int64 *)(a1 + 2000); i = (__int64 *)*i )
    {
      if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
      {
        if ( (i[2] & 8) == 0 )
          ExpTimerPause(i - 36, v7, v6, 0LL);
      }
      else
      {
        ExTimerResume(i, v6);
      }
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 1992));
    __writecr8(v5);
  }
  v9 = *(_DWORD *)(a1 + 768);
  v10 = a2[2] << 28;
  do
  {
    v11 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 768), v10 | v9 & 0xCFFFFFFF, v9);
  }
  while ( v9 != v11 );
  return 0LL;
}
