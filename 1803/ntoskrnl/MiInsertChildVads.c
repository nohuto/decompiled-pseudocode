/*
 * XREFs of MiInsertChildVads @ 0x1405BFB04
 * Callers:
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiGetWsAndInsertVad @ 0x1400E6090 (MiGetWsAndInsertVad.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiCommitPageTableRangesForVad @ 0x140142BE4 (MiCommitPageTableRangesForVad.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v5; // rbp
  int *v6; // rsi
  int inserted; // eax
  int v8; // ecx
  int v9; // eax
  void *v10; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rax
  bool v19; // zf
  _BYTE v20[48]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v20);
  v5 = (__int64)a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = a2 + 12;
      if ( (a2[12] & 0x4000) == 0 )
      {
        v4 = MiUpControlAreaRefs((__int64)a2, 1);
        if ( v4 < 0 )
          break;
      }
      v4 = MiCommitPageTableRangesForVad((__int64)a2);
      if ( v4 < 0 )
      {
        v19 = (*v6 & 0x4000) == 0;
LABEL_23:
        if ( v19 )
          MiUpControlAreaRefs((__int64)a2, 0);
        break;
      }
      inserted = MiInsertVadCharges((__int64)a2, (struct _KPROCESS *)a1);
      v8 = *v6;
      v4 = inserted;
      if ( inserted < 0 )
      {
        v19 = (*v6 & 0x4000) == 0;
        goto LABEL_23;
      }
      a2 = *(_DWORD **)a2;
      if ( (v8 & 0x20000) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 1296);
        if ( (v8 & 0x4000) != 0 )
          ++*(_QWORD *)(v18 + 360);
        else
          ++*(_QWORD *)(v18 + 368);
      }
      v9 = *v6;
      if ( (*v6 & 0x4000) == 0 )
      {
        v10 = *(void **)(v5 + 128);
        if ( v10 )
        {
          ObfReferenceObject(v10);
          v9 = *v6;
        }
        if ( (v9 & 0x4000) == 0 && *(__int64 *)(v5 + 120) < 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB290, 0LL);
          v16 = *(_QWORD *)(***(_QWORD ***)(v5 + 72) + 32LL);
          ++*(_DWORD *)(v16 + 8);
          v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB290, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB290, v13, v14, v15);
          KeAbPostRelease((ULONG_PTR)&qword_1403CB290);
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
  KiUnstackDetachProcess((__int64)v20, 0LL);
  return (unsigned int)v4;
}
