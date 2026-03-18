/*
 * XREFs of MiInitializeImageProtos @ 0x14010A158
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiEndingOffset @ 0x1400CDDC0 (MiEndingOffset.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializeTransitionPfn @ 0x140105864 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x140107570 (MiReferenceControlAreaPfn.c)
 *     MiGetPageForHeader @ 0x140109BE0 (MiGetPageForHeader.c)
 *     KeCopyPage @ 0x140185390 (KeCopyPage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r12
  unsigned int EffectivePagePriorityThread; // eax
  char v6; // r14
  unsigned __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  char *v16; // r15
  __int64 v17; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // [rsp+38h] [rbp-70h]
  ULONG_PTR *v20; // [rsp+40h] [rbp-68h]
  unsigned __int64 v21; // [rsp+48h] [rbp-60h]
  unsigned __int64 v22; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  unsigned __int8 v27; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2;
  v20 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v19 = *(unsigned int *)(a2 + 40);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v6 = EffectivePagePriorityThread;
  if ( EffectivePagePriorityThread > 5 )
  {
    v6 = 5;
  }
  else if ( EffectivePagePriorityThread )
  {
    v6 = EffectivePagePriorityThread - 1;
  }
  result = v3 + 128;
  v27 = 17;
  v8 = 0LL;
  v9 = v3 + 128;
  if ( v3 != -128 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 16);
      v11 = *(_QWORD *)(v9 + 8);
      v23 = v10;
      if ( (*(_BYTE *)(v9 + 34) & 2) == 0 )
      {
        v12 = MiStartingOffset((__int64 *)v9, v11, 0xFFFFFFFF);
        v21 = MiEndingOffset(v9);
        result = v11 + 8LL * *(unsigned int *)(v9 + 44);
        v22 = result;
        if ( v11 < result )
        {
          while ( 1 )
          {
            if ( (v11 & 0xFFF) != 0 && v8 )
              goto LABEL_9;
            if ( v8 )
              MiUnlockProtoPoolPage(v8, v27);
            v8 = MiLockProtoPoolPage(v11, &v27);
            if ( v8 )
            {
LABEL_9:
              result = v12 + 4096;
              if ( v12 + 4096 > v19 )
              {
                v10 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v11);
              if ( (result & 1) == 0 )
              {
                v13 = result;
                result &= 0xC00u;
                v14 = v13 >> 10;
                if ( result != 2048 && (v14 & 1) != 0 )
                {
                  if ( v9 == v3 + 128 && v11 == *(_QWORD *)(v9 + 8) )
                  {
                    result = (unsigned __int64)((unsigned __int128)((a3 + 0x58000000000LL)
                                                                  * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
                    v15 = (a3 + 0x58000000000LL) / 48;
                  }
                  else
                  {
                    result = MiGetPageForHeader(v20, (*(_DWORD *)(v3 + 56) >> 20) & 0x3F);
                    v15 = result;
                  }
                  if ( v15 != -1 )
                  {
                    if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
                      v16 = *(char **)(v4 + 24);
                    else
                      v16 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0xC0000020);
                    v17 = MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000);
                    KeCopyPage(v17, &v16[v12]);
                    if ( v12 + 4096 > v21 )
                      memset(
                        (void *)(v17 - (unsigned int)(v12 - v21 + 4096) + 4096),
                        0,
                        (unsigned int)(v12 - v21 + 4096));
                    MiUnmapPageInHyperSpaceWorker(v17, 0x11u);
                    result = 0xFFFFFA8000000000uLL;
                    v18 = 48 * v15 - 0x58000000000LL;
                    if ( v18 != a3 )
                    {
                      MiReferenceControlAreaPfn(a1, 0LL, 1u);
                      MiLockPageAtDpcInline(48 * v15 - 0x58000000000LL);
                      MiInitializeTransitionPfn(v15, (__int64 *)v11);
                      *(_BYTE *)(v18 + 35) ^= (v6 ^ *(_BYTE *)(v18 + 35)) & 7;
                      MiRemoveLockedPageChargeAndDecRef(48 * v15 - 0x58000000000LL);
                      result = 0x7FFFFFFFFFFFFFFFLL;
                      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    }
                    v4 = a2;
                    v3 = a1;
                  }
                }
              }
              v12 += 4096LL;
              v11 += 8LL;
            }
            else
            {
              result = MmAccessFault(2uLL, v11, 0, 0LL);
            }
            if ( v11 >= v22 )
            {
              v10 = v23;
              break;
            }
          }
        }
        if ( v8 )
        {
          result = MiUnlockProtoPoolPage(v8, v27);
          v8 = 0LL;
        }
      }
      v9 = v10;
    }
    while ( v10 );
  }
  return result;
}
