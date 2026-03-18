/*
 * XREFs of MiApplyCommitDelay @ 0x140265768
 * Callers:
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiApplyCommitDelay(__int64 a1, char a2, __int64 a3)
{
  volatile LONG *v4; // rsi
  KIRQL v5; // al
  int v6; // ecx
  KIRQL v7; // bp
  int v8; // ecx
  KIRQL v9; // al
  unsigned __int64 v10; // rbx
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+20h] BYREF

  if ( (a2 & 4) == 0
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0
    && KeGetCurrentIrql() < 2u
    && a3 != *(_QWORD *)(a1 + 6152)
    && *(_DWORD *)(a1 + 1788) )
  {
    v4 = (volatile LONG *)(a1 + 1280);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
    v6 = *(_DWORD *)(a1 + 1784);
    v7 = v5;
    if ( v6 )
    {
      v8 = v6 + 1;
    }
    else
    {
      *(_WORD *)(a1 + 1792) = 0;
      *(_DWORD *)(a1 + 1796) = 0;
      *(_BYTE *)(a1 + 1794) = 6;
      *(_QWORD *)(a1 + 1808) = a1 + 1800;
      *(_QWORD *)(a1 + 1800) = a1 + 1800;
      v8 = 1;
    }
    *(_DWORD *)(a1 + 1784) = v8;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    __writecr8(v7);
    Timeout = Mi10Milliseconds;
    KeWaitForSingleObject((PVOID)(a1 + 1792), Executive, 0, 0, &Timeout);
    v9 = ExAcquireSpinLockExclusive(v4);
    --*(_DWORD *)(a1 + 1784);
    v10 = v9;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    __writecr8(v10);
  }
}
