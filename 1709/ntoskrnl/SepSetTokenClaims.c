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

__int64 __fastcall SepSetTokenClaims(__int64 a1, int a2, int a3, int a4, void *a5)
{
  bool v6; // r15
  __int64 result; // rax
  unsigned int v8; // ebp
  PVOID v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
  PVOID P; // [rsp+30h] [rbp-28h] BYREF

  P = 0LL;
  v6 = 0;
  result = SepCreateClaimAttributes((int)&P, a2, a3, a4, a5);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v9 = P;
    if ( P )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
        v11 = *(_QWORD *)(a1 + 216);
        v12 = *(_QWORD *)(v11 + 112);
        if ( !v12 )
          *(_QWORD *)(v11 + 112) = P;
        v6 = v12 == 0;
        v13 = *(_QWORD *)(a1 + 216);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 104));
        KeAbPostRelease(v13 + 104);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v9 = P;
        if ( !v12 )
          goto LABEL_13;
      }
      if ( !(unsigned __int8)SepCompareClaimAttributes(v9, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
      {
        *(_DWORD *)(a1 + 200) |= 0x8000u;
        *(_QWORD *)(a1 + 1096) = v9;
      }
      else
      {
LABEL_13:
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
        if ( !v6 )
          SepDeleteClaimAttributes(v9);
      }
      return v8;
    }
    else
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
  }
  return result;
}
