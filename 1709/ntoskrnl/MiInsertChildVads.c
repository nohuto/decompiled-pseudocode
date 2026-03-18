/*
 * XREFs of MiInsertChildVads @ 0x14057B0BC
 * Callers:
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiGetWsAndInsertVad @ 0x14009FAE0 (MiGetWsAndInsertVad.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiCommitPageTableRangesForVad @ 0x14012099C (MiCommitPageTableRangesForVad.c)
 *     MiUpControlAreaRefs @ 0x140120C6C (MiUpControlAreaRefs.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(__int64 a1, _DWORD *a2)
{
  int inserted; // edi
  __int64 v5; // rsi
  _DWORD *v6; // r14
  void *v7; // rcx
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rcx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v12; // [rsp+20h] [rbp-68h] BYREF

  inserted = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v12);
  v5 = (__int64)a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = a2 + 12;
      if ( (a2[12] & 0x8000) == 0 )
      {
        inserted = MiUpControlAreaRefs((__int64)a2, 1);
        if ( inserted < 0 )
          break;
      }
      inserted = MiCommitPageTableRangesForVad((__int64)a2);
      if ( inserted < 0 || (inserted = MiInsertVadCharges((__int64)a2, (struct _KPROCESS *)a1), inserted < 0) )
      {
        if ( (a2[12] & 0x8000) == 0 )
          MiUpControlAreaRefs((__int64)a2, 0);
        break;
      }
      a2 = *(_DWORD **)a2;
      if ( (*v6 & 0x100000) != 0 )
      {
        v9 = *(_QWORD *)(a1 + 1296);
        if ( (*v6 & 0x8000) != 0 )
          ++*(_QWORD *)(v9 + 256);
        else
          ++*(_QWORD *)(v9 + 264);
      }
      if ( (*v6 & 0x8000) == 0 )
      {
        v7 = *(void **)(v5 + 128);
        if ( v7 )
          ObfReferenceObject(v7);
        if ( (*v6 & 0x8000) == 0 && *(__int64 *)(v5 + 120) < 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388110, 0LL);
          v11 = *(_QWORD *)(***(_QWORD ***)(v5 + 72) + 32LL);
          ++*(_DWORD *)(v11 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388110);
          KeAbPostRelease((ULONG_PTR)&qword_140388110);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      *(_QWORD *)(v5 + 16) = -2LL;
      MiGetWsAndInsertVad(v5);
      v5 = (__int64)a2;
      if ( !a2 )
        goto LABEL_13;
    }
    MiDeletePartialCloneVads(a2);
  }
LABEL_13:
  KiUnstackDetachProcess(&v12, 0LL);
  return (unsigned int)inserted;
}
