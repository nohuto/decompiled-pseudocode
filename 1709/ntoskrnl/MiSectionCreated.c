/*
 * XREFs of MiSectionCreated @ 0x1400B72A4
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiInitializeTransitionPfn @ 0x140025E00 (MiInitializeTransitionPfn.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiReferenceControlAreaPfn @ 0x140066278 (MiReferenceControlAreaPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // r12
  KIRQL v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rbx
  volatile LONG *v10; // rbp
  __int64 v11; // r15
  __int64 *v12; // rbx
  __int64 *i; // rbp
  __int64 v15; // r14
  unsigned __int8 v16; // [rsp+58h] [rbp+10h] BYREF

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
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140388100);
  if ( a3 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v7);
    if ( (*(_DWORD *)(a2 + 56) & 0x40000000) == 0 )
    {
      for ( i = *(__int64 **)(a2 + 136); ; MmAccessFault(2uLL, (signed __int64)i, 0LL, 0LL) )
      {
        v15 = MiLockProtoPoolPage((unsigned __int64)i, &v16);
        if ( v15 )
          break;
      }
      MiLockPageAtDpcInline(a3);
      MiInitializeTransitionPfn((a3 + 0x58000000000LL) / 48, i);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v15, v16);
      if ( (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
        MiReferenceControlAreaPfn(a2, 0LL, 1u);
    }
  }
  else
  {
    v12 = *(__int64 **)(a1 + 40);
    *v12 = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    *(_DWORD *)(a2 + 56) &= ~2u;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v7);
    KeAbPostRelease((ULONG_PTR)v12);
  }
  return v11;
}
