/*
 * XREFs of MiSectionCreated @ 0x14004D194
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 * Callees:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiInitializeTransitionPfn @ 0x14004EEF0 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x1400579A8 (MiReferenceControlAreaPfn.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // r14
  KIRQL v7; // r12
  __int64 *v8; // rdi
  __int64 v9; // rdi
  volatile LONG *v10; // rsi
  __int64 v11; // r15
  _QWORD *v12; // rdi
  unsigned __int64 i; // rsi
  ULONG_PTR v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = (volatile LONG *)(a2 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x200u;
  v8 = *(__int64 **)(a1 + 40);
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
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v11 = *(_QWORD *)(v9 + 80);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(v9 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CB280);
  v12 = *(_QWORD **)(a1 + 40);
  if ( a3 )
  {
    v12[2] = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v7);
    if ( (*(_DWORD *)(a2 + 56) & 0x40000000) == 0 )
    {
      for ( i = *(_QWORD *)(a2 + 136); ; MmAccessFault(2uLL, i, 0, 0LL) )
      {
        v15 = MiLockProtoPoolPage(i, &v19);
        if ( v15 )
          break;
      }
      MiLockPageAtDpcInline(a3);
      MiInitializeTransitionPfn((a3 + 0x58000000000LL) / 48, i);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v16) = v19;
      MiUnlockProtoPoolPage(v15, v16, v17, v18);
      if ( (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
        MiReferenceControlAreaPfn(a2, 0LL, 1LL);
    }
  }
  else
  {
    *v12 = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    *(_DWORD *)(a2 + 56) &= ~2u;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    __writecr8(v7);
    KeAbPostRelease((ULONG_PTR)v12);
  }
  return v11;
}
