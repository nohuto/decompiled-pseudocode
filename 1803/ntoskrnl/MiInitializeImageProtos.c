/*
 * XREFs of MiInitializeImageProtos @ 0x14004DF48
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPageForHeader @ 0x14004DD9C (MiGetPageForHeader.c)
 *     MiInitializeTransitionPfn @ 0x14004EEF0 (MiInitializeTransitionPfn.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiReferenceControlAreaPfn @ 0x1400579A8 (MiReferenceControlAreaPfn.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiEndingOffset @ 0x140128958 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r12
  unsigned int EffectivePagePriorityThread; // eax
  char v6; // r14
  unsigned __int64 result; // rax
  ULONG_PTR v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  char *v17; // r15
  unsigned __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+40h] [rbp-68h]
  unsigned __int64 v25; // [rsp+48h] [rbp-60h]
  unsigned __int64 v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  unsigned __int8 v31; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2;
  v24 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v23 = *(unsigned int *)(a2 + 40);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), a2);
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
  v31 = 17;
  v8 = 0LL;
  v9 = v3 + 128;
  if ( v3 != -128 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 16);
      v27 = v10;
      if ( (*(_BYTE *)(v9 + 34) & 2) == 0 )
      {
        v11 = *(_QWORD *)(v9 + 8);
        v12 = MiStartingOffset(v9, v11, 0xFFFFFFFFLL);
        v25 = MiEndingOffset(v9);
        result = v11 + 8LL * *(unsigned int *)(v9 + 44);
        v26 = result;
        if ( v11 < result )
        {
          while ( 1 )
          {
            if ( (v11 & 0xFFF) != 0 && v8 )
              goto LABEL_9;
            if ( v8 )
            {
              LOBYTE(v13) = v31;
              MiUnlockProtoPoolPage(v8, v13, v14, v15);
            }
            v8 = MiLockProtoPoolPage(v11, &v31);
            if ( v8 )
            {
LABEL_9:
              result = v12 + 4096;
              if ( v12 + 4096 > v23 )
              {
                v10 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v11);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                if ( v9 == v3 + 128 && v11 == *(_QWORD *)(v9 + 8) )
                {
                  v13 = (unsigned __int128)((a3 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                  result = v13 >> 63;
                  v16 = (a3 + 0x58000000000LL) / 48;
                }
                else
                {
                  result = MiGetPageForHeader(v24, (*(_DWORD *)(v3 + 56) >> 20) & 0x3F);
                  v16 = result;
                }
                if ( v16 != -1 )
                {
                  if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
                    v17 = *(char **)(v4 + 24);
                  else
                    v17 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0xC0000020);
                  v18 = MiMapPageInHyperSpaceWorker(v16, 0LL, 0x80000000, v15);
                  KeCopyPage(v18, &v17[v12]);
                  if ( v12 + 4096 > v25 )
                    memset((void *)(v18 - (unsigned int)(v12 - v25 + 4096) + 4096), 0, (unsigned int)(v12 - v25 + 4096));
                  MiUnmapPageInHyperSpaceWorker(v18, 0x11u, 0x80000000);
                  result = 0xFFFFFA8000000000uLL;
                  v19 = 48 * v16 - 0x58000000000LL;
                  if ( v19 != a3 )
                  {
                    MiReferenceControlAreaPfn(a1, 0LL, 1LL);
                    MiLockPageAtDpcInline(48 * v16 - 0x58000000000LL);
                    MiInitializeTransitionPfn(v16, v11);
                    *(_BYTE *)(v19 + 35) ^= (v6 ^ *(_BYTE *)(v19 + 35)) & 7;
                    MiRemoveLockedPageChargeAndDecRef(48 * v16 - 0x58000000000LL, v20, v21, v22);
                    result = 0x7FFFFFFFFFFFFFFFLL;
                    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  v4 = a2;
                  v3 = a1;
                }
              }
              v12 += 4096LL;
              v11 += 8LL;
            }
            else
            {
              result = MmAccessFault(2uLL, v11, 0, 0LL);
            }
            if ( v11 >= v26 )
            {
              v10 = v27;
              break;
            }
          }
        }
        if ( v8 )
        {
          LOBYTE(v13) = v31;
          result = MiUnlockProtoPoolPage(v8, v13, v14, v15);
          v8 = 0LL;
        }
      }
      v9 = v10;
    }
    while ( v10 );
  }
  return result;
}
