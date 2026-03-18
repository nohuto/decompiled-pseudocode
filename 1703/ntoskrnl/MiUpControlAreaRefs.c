/*
 * XREFs of MiUpControlAreaRefs @ 0x14000308C
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x140098D38 (MiReferenceSubsection.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiUnlockNestedVad @ 0x14049B404 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x14049B43C (MiLockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 *v3; // rsi
  int v4; // r12d
  bool v5; // zf
  unsigned __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // r13
  KIRQL v9; // al
  __int64 *v10; // rcx
  __int64 result; // rax
  __int64 *v12; // r14
  KIRQL v13; // [rsp+60h] [rbp+8h]
  __int64 *v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = **(volatile signed __int32 ***)(a1 + 72);
  if ( (((*(_DWORD *)(a1 + 48) & 0xF8) - 32) & 0xFFFFFFEF) == 0 && *((_QWORD *)v2 + 8) && (v2[14] & 0x20) == 0 )
    _InterlockedIncrement(v2 + 23);
  v3 = 0LL;
  v4 = 0;
  v15 = 0LL;
  v5 = (v2[14] & 0x400) == 0;
  v14 = 0LL;
  if ( v5 )
  {
    v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad();
    if ( *((_QWORD *)v2 + 8) && (v2[14] & 0x20) == 0 )
    {
      MiGetProtoPteAddress(a1, v6, 1LL, &v14);
      v3 = v14;
    }
    else
    {
      v3 = (__int64 *)(v2 + 32);
      v14 = (__int64 *)(v2 + 32);
    }
    if ( v3 )
      v4 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *((_QWORD *)v2 + 8) )
  {
    CurrentThread = 0LL;
    v8 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(_QWORD *)v2;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
    v3 = v14;
  }
  v9 = ExAcquireSpinLockExclusive(v2 + 18);
  ++*((_QWORD *)v2 + 5);
  ++*((_QWORD *)v2 + 6);
  v13 = v9;
  if ( v3 )
  {
    if ( (v2[14] & 0x20) != 0 || !*((_QWORD *)v2 + 8) )
    {
      v10 = v3;
LABEL_13:
      MiReferenceSubsection(v10, 72LL);
      goto LABEL_14;
    }
    MiGetProtoPteAddress(
      a1,
      *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
      3LL,
      &v15);
    v12 = v15;
    if ( v3 != v15 )
    {
      do
      {
        MiReferenceSubsection(v3, 72LL);
        v3 = (__int64 *)v3[2];
      }
      while ( v3 != v12 );
      v14 = v3;
    }
    if ( v12 )
    {
      v10 = v12;
      goto LABEL_13;
    }
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel(v2 + 18);
  result = v13;
  __writecr8(v13);
  if ( !*((_QWORD *)v2 + 8) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 40);
    KeAbPostRelease(v8 + 40);
    result = KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  if ( v4 == 1 )
    return MiUnlockNestedVad(a1);
  return result;
}
