/*
 * XREFs of CmpArmLazyWriter @ 0x1400690C0
 * Callers:
 *     CmpEnableLazyFlush @ 0x1400D1D1C (CmpEnableLazyFlush.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall CmpArmLazyWriter(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 *v6; // r11
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  KIRQL v10; // r14
  unsigned __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  unsigned __int64 v14; // rbx
  ULONG v15; // r9d
  __int64 v16; // rdx

  v4 = (int)a1;
  if ( CmpWorkerDataInitialized && !CmpHoldLazyFlush )
  {
    LOBYTE(a1) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
    if ( v6 )
    {
      v7 = UnbiasedInterruptTime + 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v4 + 45);
      v8 = *v6;
      if ( *v6 >= v7 )
        v8 = v7;
    }
    else if ( a3 )
    {
      v8 = UnbiasedInterruptTime + 20000000;
    }
    else
    {
      v8 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v4 + 45) + UnbiasedInterruptTime;
    }
    v9 = 192 * v4;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v9 + 152));
    v11 = *(_QWORD *)((char *)&CmpLazyWriterData + v9 + 168) & 7LL;
    if ( v11 > 3 )
      goto LABEL_10;
    if ( !(_DWORD)v11 )
      goto LABEL_23;
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 || v13 == 1 && v8 < (*(_QWORD *)((char *)&CmpLazyWriterData + v9 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        v14 = v8 & 0xFFFFFFFFFFFFFFF8uLL | 3;
        goto LABEL_16;
      }
    }
    else if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v9)) )
    {
LABEL_23:
      v14 = 1LL;
LABEL_16:
      *(_QWORD *)((char *)&CmpLazyWriterData + v9 + 168) = v14;
      if ( v14 == 1 )
      {
        if ( a3 )
        {
          v16 = -20000000LL;
          v15 = 1000;
        }
        else
        {
          v15 = *(_DWORD *)((char *)&CmpLazyWriterData + v9 + 184);
          v16 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v9 + 180);
        }
        KeSetCoalescableTimer(
          (struct _KTIMER *)((char *)&CmpLazyWriterData + v9),
          (LARGE_INTEGER)v16,
          0,
          v15,
          (PKDPC)((char *)&CmpLazyWriterData + v9 + 64));
      }
    }
LABEL_10:
    KxReleaseSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v9 + 152));
    __writecr8(v10);
  }
}
