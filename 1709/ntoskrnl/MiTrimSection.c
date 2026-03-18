/*
 * XREFs of MiTrimSection @ 0x1400F23D8
 * Callers:
 *     MiTrimSharedPage @ 0x1400F1EDC (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x1400F2370 (MmTrimSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     MiReferenceSubsection @ 0x1400A2330 (MiReferenceSubsection.c)
 *     MiViewMayContainPage @ 0x1400F25DC (MiViewMayContainPage.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x1400F2868 (MiUnlockControlAreaFileObjectShared.c)
 *     MiDecrementSubsection @ 0x14012AE30 (MiDecrementSubsection.c)
 */

__int64 __fastcall MiTrimSection(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  unsigned int v5; // r14d
  ULONG_PTR v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v10; // r13
  unsigned __int64 v11; // r15
  volatile LONG *v12; // r12
  KIRQL v13; // si
  volatile LONG *v14; // rcx
  int v15; // r14d
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v19; // rax
  _QWORD *MayContainPage; // rax
  KIRQL v21; // si
  unsigned __int64 v22; // [rsp+30h] [rbp-58h]
  _DWORD *v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+20h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v23 = (_DWORD *)v4;
  v5 = a3;
  v6 = *(_QWORD *)(v3 + 24);
  v7 = *(_QWORD *)v6;
  if ( (a3 & 0x40000) != 0 && (!*(_QWORD *)(v7 + 64) || (*(_DWORD *)(v7 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v22 = MiStartingOffset(*(__int64 **)(v3 + 24), v4, 0xFFFFFFFF);
  v8 = MiStartingOffset(*(__int64 **)(v3 + 32), *(_QWORD *)(v3 + 16), 0xFFFFFFFF);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v11 = v8 + 4096;
  --CurrentThread->SpecialApcDisable;
  v27 = v8 + 4096;
  ExAcquirePushLockSharedEx(v7 + 104, 0LL);
  v12 = (volatile LONG *)(v7 + 72);
  v13 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 72));
  v14 = (volatile LONG *)(v7 + 72);
  if ( *(_QWORD *)(v7 + 40) )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v14);
    __writecr8(v13);
    if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 && *(_QWORD *)(v7 + 64) )
    {
      while ( 1 )
      {
        v15 = 1;
        if ( v6 == *(_QWORD *)(v3 + 24)
          || v6 == *(_QWORD *)(v3 + 32)
          || ((v21 = ExAcquireSpinLockExclusive(v12), !*(_DWORD *)(v6 + 104))
           || (int)MiReferenceSubsection(v6, 0LL) <= 1
            ? (v15 = 0)
            : (v15 = 2),
              ExReleaseSpinLockExclusiveFromDpcLevel(v12),
              __writecr8(v21),
              v15) )
        {
          v16 = *(_QWORD **)(v6 + 80);
          if ( v16 != (_QWORD *)(v6 + 80) )
          {
            do
            {
              MayContainPage = (_QWORD *)MiViewMayContainPage(v7, v16, v22, v27);
              if ( MayContainPage )
              {
                *MayContainPage = v10;
                v10 = MayContainPage;
              }
              v16 = (_QWORD *)*v16;
            }
            while ( v16 != (_QWORD *)(v6 + 80) );
            v3 = a1;
            v12 = (volatile LONG *)(v7 + 72);
          }
          if ( v15 == 2 )
            MiDecrementSubsection(v6);
        }
        if ( v6 == *(_QWORD *)(v3 + 32) )
          break;
        v6 = *(_QWORD *)(v6 + 16);
      }
      v5 = a3;
      v11 = v27;
    }
    v17 = *(_QWORD **)(v7 + 8);
    if ( v17 != (_QWORD *)(v7 + 8) )
    {
      do
      {
        v19 = (_QWORD *)MiViewMayContainPage(v7, v17, v22, v11);
        if ( v19 )
        {
          *v19 = v10;
          v10 = v19;
        }
        v17 = (_QWORD *)*v17;
      }
      while ( v17 != (_QWORD *)(v7 + 8) );
      v5 = a3;
    }
    MiUnlockControlAreaFileObjectShared(v7);
    return MiTrimSharedPageFromViews(v10, a2, v5, v7, v23);
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(v14);
    __writecr8(v13);
    MiUnlockControlAreaFileObjectShared(v7);
    return 0LL;
  }
}
