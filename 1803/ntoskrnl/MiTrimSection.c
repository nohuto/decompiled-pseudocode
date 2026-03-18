/*
 * XREFs of MiTrimSection @ 0x140082194
 * Callers:
 *     MiTrimSharedPage @ 0x140081E44 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x14008212C (MmTrimSection.c)
 * Callees:
 *     MiViewMayContainPage @ 0x1400823C0 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x140083274 (MiUnlockControlAreaFileObjectShared.c)
 *     MiDecrementSubsection @ 0x1400833A4 (MiDecrementSubsection.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReferenceSubsection @ 0x1400E4FB8 (MiReferenceSubsection.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, int a2, int a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // rcx
  int v5; // r13d
  ULONG_PTR v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v10; // r12
  volatile LONG *v11; // r15
  KIRQL v12; // al
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // edi
  _QWORD *v17; // rbx
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *MayContainPage; // rax
  KIRQL v22; // bl
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v3 = a1;
  v4 = a1[1];
  v24 = v4;
  v5 = a3;
  v6 = v3[3];
  v7 = *(_QWORD *)v6;
  if ( (a3 & 0x40000) != 0 && (!*(_QWORD *)(v7 + 64) || (*(_DWORD *)(v7 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v23 = MiStartingOffset(v3[3], v4, 0xFFFFFFFFLL);
  v8 = MiStartingOffset(v3[4], v3[2], 0xFFFFFFFFLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v28 = v8 + 4096;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v7 + 104, 0LL);
  v11 = (volatile LONG *)(v7 + 72);
  v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 72));
  v13 = *(_QWORD *)(v7 + 40);
  v14 = v12;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  __writecr8(v14);
  if ( v13 )
  {
    if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 && *(_QWORD *)(v7 + 64) )
    {
      v15 = v3[4];
      while ( 1 )
      {
        v16 = 1;
        if ( v6 == v3[3]
          || v6 == v15
          || ((v22 = ExAcquireSpinLockExclusive(v11), !*(_DWORD *)(v6 + 104))
           || (int)MiReferenceSubsection(v6, 0LL) <= 1
            ? (v16 = 0)
            : (v16 = 2),
              ExReleaseSpinLockExclusiveFromDpcLevel(v11),
              __writecr8(v22),
              v16) )
        {
          v17 = *(_QWORD **)(v6 + 80);
          if ( v17 != (_QWORD *)(v6 + 80) )
          {
            do
            {
              MayContainPage = (_QWORD *)MiViewMayContainPage(v7, v17, v23, v28);
              if ( MayContainPage )
              {
                *MayContainPage = v10;
                v10 = MayContainPage;
              }
              v17 = (_QWORD *)*v17;
            }
            while ( v17 != (_QWORD *)(v6 + 80) );
            v3 = a1;
          }
          if ( v16 == 2 )
            MiDecrementSubsection(v6);
          v11 = (volatile LONG *)(v7 + 72);
        }
        v15 = v3[4];
        if ( v6 == v15 )
          break;
        v6 = *(_QWORD *)(v6 + 16);
      }
      v5 = a3;
    }
    v18 = *(_QWORD **)(v7 + 8);
    if ( v18 != (_QWORD *)(v7 + 8) )
    {
      do
      {
        v19 = (_QWORD *)MiViewMayContainPage(v7, v18, v23, v28);
        if ( v19 )
        {
          *v19 = v10;
          v10 = v19;
        }
        v18 = (_QWORD *)*v18;
      }
      while ( v18 != (_QWORD *)(v7 + 8) );
      v5 = a3;
    }
    MiUnlockControlAreaFileObjectShared(v7);
    return MiTrimSharedPageFromViews((_DWORD)v10, a2, v5, v7, v24);
  }
  else
  {
    MiUnlockControlAreaFileObjectShared(v7);
    return 0LL;
  }
}
