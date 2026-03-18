/*
 * XREFs of MiComputeAgeDistribution @ 0x1400F506C
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1400F4B60 (MiComputeSystemTrimCriteria.c)
 *     MiOrderTrimList @ 0x14021D9B0 (MiOrderTrimList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateClaimDistribution @ 0x1400F51D0 (MiUpdateClaimDistribution.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiComputeAgeDistribution(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 i; // r11
  __int64 *v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  int v11; // ecx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Src[64]; // [rsp+40h] [rbp-58h] BYREF

  memset(Src, 0, sizeof(Src));
  v4 = *(_QWORD **)(a1 + 5680);
  if ( a2 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    for ( i = *(_QWORD *)(a1 + 5688); i != a1 + 5688; i = *v6 )
      MiUpdateClaimDistribution(i - 24, Src);
    memmove(v4 + 303, Src, 0x40uLL);
    v7 = v4 + 309;
    v8 = 2LL;
    v9 = 0LL;
    do
    {
      v9 += *v7++;
      --v8;
    }
    while ( v8 );
    v4[302] = v9;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    v9 = v4[302];
  }
  v10 = 5;
  v11 = 0;
  while ( v9 < 4LL * v4[299] )
  {
    ++v11;
    v9 += v4[v10 + 303];
    if ( v10 == 1 )
      break;
    --v10;
  }
  v12 = v4[295];
  if ( v12 )
  {
    v13 = (unsigned int)(1000 * v11) / v12;
    if ( (unsigned __int16)v13 > 0x3E8u )
      LOWORD(v13) = 1000;
    return (unsigned __int16)v13;
  }
  else if ( v11 )
  {
    return 1000LL;
  }
  else
  {
    return 0LL;
  }
}
