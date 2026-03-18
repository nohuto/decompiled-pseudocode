/*
 * XREFs of MiSectionCreated @ 0x14005E604
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiInitializeTransitionPfn @ 0x140105864 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x140107570 (MiReferenceControlAreaPfn.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // r12
  KIRQL v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rbx
  volatile LONG *v10; // rbp
  __int64 v11; // r15
  _QWORD *v12; // rbx
  ULONG_PTR i; // rbp
  __int64 v15; // r14
  __int64 v16; // rdx
  char v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = (volatile LONG *)(a2 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x200u;
  v8 = *(_QWORD **)(a1 + 40);
  if ( a3 )
  {
    v9 = v8[2];
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v11 = 0LL;
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v9 + 80);
  }
  else
  {
    v9 = *v8;
    v10 = (volatile LONG *)(*v8 + 72LL);
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    v11 = *(_QWORD *)(v9 + 80);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(v9 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14036BE00);
  if ( a3 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v7);
    if ( (*(_DWORD *)(a2 + 56) & 0x40000000) == 0 )
    {
      for ( i = *(_QWORD *)(a2 + 136); ; MmAccessFault(2uLL, i) )
      {
        v15 = MiLockProtoPoolPage(i, &v17);
        if ( v15 )
          break;
      }
      MiLockPageAtDpcInline(a3);
      MiInitializeTransitionPfn((a3 + 0x58000000000LL) / 48, i);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v16) = v17;
      MiUnlockProtoPoolPage(v15, v16);
      *(_QWORD *)a3 = 0LL;
      if ( (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
        MiReferenceControlAreaPfn(a2, 0LL, 1LL);
    }
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 40);
    *v12 = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    *(_DWORD *)(a2 + 56) &= ~2u;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v7);
    KeAbPostRelease((ULONG_PTR)v12);
  }
  return v11;
}
