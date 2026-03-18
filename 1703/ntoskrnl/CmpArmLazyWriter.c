/*
 * XREFs of CmpArmLazyWriter @ 0x1400A8190
 * Callers:
 *     CmpEnableLazyFlush @ 0x14003B3E4 (CmpEnableLazyFlush.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 */

void __fastcall CmpArmLazyWriter(int a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 *v6; // r11
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  KIRQL v9; // r14
  unsigned __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  ULONG v15; // r9d

  v4 = a1;
  if ( CmpWorkerDataInitialized && !CmpHoldLazyFlush )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( v6 )
    {
      v7 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v4 + 45) + UnbiasedInterruptTime;
      if ( *v6 < v7 )
        v7 = *v6;
    }
    else if ( a3 )
    {
      v7 = UnbiasedInterruptTime + 20000000;
    }
    else
    {
      v7 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v4 + 45) + UnbiasedInterruptTime;
    }
    v8 = 192 * v4;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v8 + 152));
    v10 = *(_QWORD *)((char *)&CmpLazyWriterData + v8 + 168) & 7LL;
    if ( v10 > 3 )
      goto LABEL_11;
    if ( !(_DWORD)v10 )
      goto LABEL_23;
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 || v12 == 1 && v7 < (*(_QWORD *)((char *)&CmpLazyWriterData + v8 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        v13 = v7 & 0xFFFFFFFFFFFFFFF8uLL | 3;
        goto LABEL_16;
      }
    }
    else if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v8)) )
    {
LABEL_23:
      v13 = 1LL;
LABEL_16:
      *(_QWORD *)((char *)&CmpLazyWriterData + v8 + 168) = v13;
      if ( v13 == 1 )
      {
        if ( a3 )
        {
          v14 = -20000000LL;
          v15 = 1000;
        }
        else
        {
          v15 = *(_DWORD *)((char *)&CmpLazyWriterData + v8 + 184);
          v14 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v8 + 180);
        }
        KeSetCoalescableTimer(
          (struct _KTIMER *)((char *)&CmpLazyWriterData + v8),
          (LARGE_INTEGER)v14,
          0,
          v15,
          (PKDPC)((char *)&CmpLazyWriterData + v8 + 64));
      }
    }
LABEL_11:
    KxReleaseSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v8 + 152));
    __writecr8(v9);
  }
}
