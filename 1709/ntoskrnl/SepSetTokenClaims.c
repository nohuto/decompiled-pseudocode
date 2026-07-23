/*
 * XREFs of SepSetTokenClaims @ 0x14045CDB4
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     SepCreateClaimAttributes @ 0x14045CE28 (SepCreateClaimAttributes.c)
 *     SepCompareClaimAttributes @ 0x14059589C (SepCompareClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x14073100C (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  bool v2; // r15
  __int64 result; // rax
  unsigned int v4; // ebp
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rsi
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF

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
        v8 = *(_QWORD *)(v7 + 112);
        if ( !v8 )
          *(PVOID *)(v7 + 112) = P[0];
        v2 = v8 == 0;
        v9 = *(_QWORD *)(a1 + 216);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 104));
        KeAbPostRelease(v9 + 104);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v5 = P[0];
        if ( !v8 )
          goto LABEL_13;
      }
      if ( !(unsigned __int8)SepCompareClaimAttributes(v5, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
      {
        *(_DWORD *)(a1 + 200) |= 0x8000u;
        *(_QWORD *)(a1 + 1096) = v5;
      }
      else
      {
LABEL_13:
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
        if ( !v2 )
          SepDeleteClaimAttributes(v5);
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
