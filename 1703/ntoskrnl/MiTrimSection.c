/*
 * XREFs of MiTrimSection @ 0x1400144D8
 * Callers:
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x140014470 (MmTrimSection.c)
 * Callees:
 *     MiViewMayContainPage @ 0x140014728 (MiViewMayContainPage.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x1400149FC (MiUnlockControlAreaFileObjectShared.c)
 *     MiDecrementSubsection @ 0x1400151F8 (MiDecrementSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x140098D38 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, int a2, int a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // rcx
  int v5; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v10; // r13
  __int64 v11; // r15
  volatile LONG *v12; // r12
  KIRQL v13; // si
  volatile LONG *v14; // rcx
  int v15; // r14d
  __int64 *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *MayContainPage; // rax
  KIRQL v21; // si
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+A8h] [rbp+20h]

  v3 = a1;
  v4 = a1[1];
  v23 = v4;
  v5 = a3;
  v6 = (__int64 *)v3[3];
  v7 = *v6;
  if ( (a3 & 0x40000) != 0 && (!*(_QWORD *)(v7 + 64) || (*(_DWORD *)(v7 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v22 = MiStartingOffset(v3[3], v4, 0xFFFFFFFFLL);
  v8 = MiStartingOffset(v3[4], v3[2], 0xFFFFFFFFLL);
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
        if ( v6 == (__int64 *)v3[3]
          || v6 == (__int64 *)v3[4]
          || ((v21 = ExAcquireSpinLockExclusive(v12), !*((_DWORD *)v6 + 26)) || (int)MiReferenceSubsection(v6, 0LL) <= 1
            ? (v15 = 0)
            : (v15 = 2),
              ExReleaseSpinLockExclusiveFromDpcLevel(v12),
              __writecr8(v21),
              v15) )
        {
          v16 = (__int64 *)v6[10];
          if ( v16 != v6 + 10 )
          {
            do
            {
              MayContainPage = (_QWORD *)MiViewMayContainPage(v7, v16, v22, v27);
              if ( MayContainPage )
              {
                *MayContainPage = v10;
                v10 = MayContainPage;
              }
              v16 = (__int64 *)*v16;
            }
            while ( v16 != v6 + 10 );
            v3 = a1;
            v12 = (volatile LONG *)(v7 + 72);
          }
          if ( v15 == 2 )
            MiDecrementSubsection(v6);
        }
        if ( v6 == (__int64 *)v3[4] )
          break;
        v6 = (__int64 *)v6[2];
      }
      v5 = a3;
      v11 = v27;
    }
    v17 = *(_QWORD **)(v7 + 8);
    if ( v17 != (_QWORD *)(v7 + 8) )
    {
      do
      {
        v18 = (_QWORD *)MiViewMayContainPage(v7, v17, v22, v11);
        if ( v18 )
        {
          *v18 = v10;
          v10 = v18;
        }
        v17 = (_QWORD *)*v17;
      }
      while ( v17 != (_QWORD *)(v7 + 8) );
      v5 = a3;
    }
    MiUnlockControlAreaFileObjectShared(v7);
    return MiTrimSharedPageFromViews((_DWORD)v10, a2, v5, v7, v23);
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(v14);
    __writecr8(v13);
    MiUnlockControlAreaFileObjectShared(v7);
    return 0LL;
  }
}
