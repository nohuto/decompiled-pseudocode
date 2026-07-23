/*
 * XREFs of SepSetTokenClaims @ 0x14046F334
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x14045C1C4 (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x14046F3A8 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x1406F95BC (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // r14
  __int64 result; // rax
  unsigned int v4; // ebp
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  v2 = 0;
  result = SepCreateClaimAttributes(P);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = P[0];
    if ( P[0] )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
        v7 = *(_QWORD *)(a1 + 216);
        if ( !*(_QWORD *)(v7 + 112) )
        {
          v2 = 1;
          *(PVOID *)(v7 + 112) = P[0];
        }
        v8 = *(_QWORD *)(a1 + 216);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 104));
        KeAbPostRelease(v8 + 104);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v5 = P[0];
        if ( v2 )
          goto LABEL_13;
      }
      if ( SepCompareClaimAttributes((__int64)v5, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
      {
LABEL_13:
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
        if ( !v2 )
          SepDeleteClaimAttributes(v5);
      }
      else
      {
        *(_DWORD *)(a1 + 200) |= 0x8000u;
        *(_QWORD *)(a1 + 1096) = v5;
      }
      return v4;
    }
    else
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
  }
  return result;
}
