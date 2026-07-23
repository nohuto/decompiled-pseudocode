/*
 * XREFs of SepSetTokenClaims @ 0x140544808
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SepCreateClaimAttributes @ 0x14054487C (SepCreateClaimAttributes.c)
 *     SepCompareClaimAttributes @ 0x14057D960 (SepCompareClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x1407948F8 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // r14
  __int64 result; // rax
  unsigned int v4; // ebp
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
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
        v10 = *(_QWORD *)(a1 + 216);
        if ( !*(_QWORD *)(v10 + 112) )
        {
          v2 = 1;
          *(PVOID *)(v10 + 112) = P[0];
          v10 = *(_QWORD *)(a1 + 216);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 104), v7, v8, v9);
        KeAbPostRelease(v10 + 104);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v5 = P[0];
        if ( v2 )
          goto LABEL_13;
      }
      if ( (unsigned __int8)SepCompareClaimAttributes(v5, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
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
