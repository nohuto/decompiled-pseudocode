/*
 * XREFs of MiScrubAweMappedPage @ 0x140270278
 * Callers:
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiScrubPage @ 0x140270A34 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAweMappedPage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  unsigned __int8 v12; // al
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  BOOL v17; // r15d
  __int64 v18; // rbx
  unsigned int v19; // ebp
  __int64 v20; // r8
  unsigned __int8 v22; // [rsp+50h] [rbp+8h]

  v5 = a4 + 1280;
  v7 = 48 * a2 - 0x58000000000LL;
  v8 = (__int64)(a1 << 25) >> 16;
  v9 = MI_READ_PTE_LOCK_FREE(a1);
  v11 = v10 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v12 = MiLockWorkingSetShared(v5);
  v22 = v12;
  if ( *(_WORD *)(v7 + 32) == 2 )
  {
    MiLockPageTableInternal(v5, v11, 0LL);
    *(_QWORD *)a1 = ZeroPte;
    v17 = MiPteInShadowRange(a1);
    if ( v17 )
      MiWritePteShadow(v15, v14, v16);
    KeFlushSingleTb(v8, 1u, 0);
    v18 = v9 | 0x20;
    v19 = MiScrubPage(a3, *(_QWORD *)(a3 + 152), v7, 0LL);
    *(_QWORD *)a1 = v18;
    if ( v17 )
      MiWritePteShadow(a1, v18, v20);
    MiUnlockPageTableInternal(v5, v11);
    v12 = v22;
  }
  else
  {
    v19 = 0;
  }
  MiUnlockWorkingSetShared(v5, v12, v13);
  return v19;
}
