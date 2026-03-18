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

__int64 __fastcall SepSetTokenClaims(__int64 a1, int a2, int a3, int a4, void *a5)
{
  char v6; // r14
  __int64 result; // rax
  unsigned int v8; // ebp
  PVOID v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  PVOID P; // [rsp+30h] [rbp-18h] BYREF

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
        v14 = *(_QWORD *)(a1 + 216);
        if ( !*(_QWORD *)(v14 + 112) )
        {
          v6 = 1;
          *(_QWORD *)(v14 + 112) = P;
          v14 = *(_QWORD *)(a1 + 216);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 104), v11, v12, v13);
        KeAbPostRelease(v14 + 104);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v9 = P;
        if ( v6 )
          goto LABEL_13;
      }
      if ( (unsigned __int8)SepCompareClaimAttributes(v9, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL)) )
      {
LABEL_13:
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
        if ( !v6 )
          SepDeleteClaimAttributes(v9);
      }
      else
      {
        *(_DWORD *)(a1 + 200) |= 0x8000u;
        *(_QWORD *)(a1 + 1096) = v9;
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
