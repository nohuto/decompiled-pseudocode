/*
 * XREFs of MiApplyCommitDelay @ 0x1402221A8
 * Callers:
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 */

void __fastcall MiApplyCommitDelay(__int64 a1, char a2, __int64 a3)
{
  volatile LONG *v4; // rsi
  KIRQL v5; // bl
  int v6; // eax
  KIRQL v7; // al
  unsigned __int64 v8; // rbx
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+20h] BYREF

  if ( (a2 & 4) == 0
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0
    && KeGetCurrentIrql() < 2u
    && a3 != *(_QWORD *)(a1 + 5064)
    && *(_DWORD *)(a1 + 1788) )
  {
    v4 = (volatile LONG *)(a1 + 1280);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
    v6 = *(_DWORD *)(a1 + 1784);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 1784) = v6 + 1;
    }
    else
    {
      *(_WORD *)(a1 + 1792) = 0;
      *(_DWORD *)(a1 + 1796) = 0;
      *(_BYTE *)(a1 + 1794) = 6;
      *(_QWORD *)(a1 + 1808) = a1 + 1800;
      *(_QWORD *)(a1 + 1800) = a1 + 1800;
      *(_DWORD *)(a1 + 1784) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    __writecr8(v5);
    Timeout = Mi10Milliseconds;
    KeWaitForSingleObject((PVOID)(a1 + 1792), Executive, 0, 0, &Timeout);
    v7 = ExAcquireSpinLockExclusive(v4);
    --*(_DWORD *)(a1 + 1784);
    v8 = v7;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    __writecr8(v8);
  }
}
