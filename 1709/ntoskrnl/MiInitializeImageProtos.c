/*
 * XREFs of MiInitializeImageProtos @ 0x1400ECF10
 * Callers:
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     MiInitializeTransitionPfn @ 0x140025E00 (MiInitializeTransitionPfn.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiEndingOffset @ 0x14002B178 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiReferenceControlAreaPfn @ 0x140066278 (MiReferenceControlAreaPfn.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPageForHeader @ 0x1400EE050 (MiGetPageForHeader.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 *     memset @ 0x140192F40 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  unsigned int EffectivePagePriorityThread; // r15d
  unsigned __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r13
  __int64 v12; // rsi
  char *v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rbp
  unsigned __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  unsigned __int64 v20; // [rsp+48h] [rbp-60h]
  unsigned __int64 v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  unsigned __int8 v26; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2;
  v19 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v18 = *(unsigned int *)(a2 + 40);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  if ( EffectivePagePriorityThread <= 5 )
  {
    if ( EffectivePagePriorityThread )
      LOBYTE(EffectivePagePriorityThread) = EffectivePagePriorityThread - 1;
  }
  else
  {
    LOBYTE(EffectivePagePriorityThread) = 5;
  }
  result = v3 + 128;
  v26 = 17;
  v7 = 0LL;
  v8 = v3 + 128;
  if ( v3 != -128 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 16);
      v22 = v9;
      if ( (*(_BYTE *)(v8 + 34) & 2) == 0 )
      {
        v10 = *(_QWORD *)(v8 + 8);
        v11 = MiStartingOffset((__int64 *)v8, v10, 0xFFFFFFFF);
        v20 = MiEndingOffset(v8);
        result = v10 + 8LL * *(unsigned int *)(v8 + 44);
        v21 = result;
        if ( v10 < result )
        {
          while ( 1 )
          {
            if ( (v10 & 0xFFF) != 0 && v7 )
              goto LABEL_14;
            if ( v7 )
              MiUnlockProtoPoolPage(v7, v26);
            v7 = MiLockProtoPoolPage(v10, &v26);
            if ( v7 )
            {
LABEL_14:
              result = v11 + 4096;
              if ( v11 + 4096 > v18 )
              {
                v9 = 0LL;
                break;
              }
              result = *(_QWORD *)v10;
              if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
                result = MiReadPteShadow(v10, *(_QWORD *)v10);
              if ( (result & 1) != 0
                || (result & 0x400) == 0
                || (v8 != v3 + 128 || v10 != *(_QWORD *)(v8 + 8)
                  ? (result = MiGetPageForHeader(v19, (*(_DWORD *)(v3 + 56) >> 20) & 0x3F), v12 = result)
                  : (result = (unsigned __int64)((unsigned __int128)((a3 + 0x58000000000LL)
                                                                   * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63,
                     v12 = (a3 + 0x58000000000LL) / 48),
                    v12 == -1) )
              {
                v16 = v11 + 4096;
              }
              else
              {
                if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
                  v13 = *(char **)(v4 + 24);
                else
                  v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0xC0000020);
                v14 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL);
                KeCopyPage(v14, &v13[v11]);
                v16 = v11 + 4096;
                if ( v11 + 4096 > v20 )
                  memset((void *)(v14 - (unsigned int)(v11 - v20 + 4096) + 4096), 0, (unsigned int)(v11 - v20 + 4096));
                LOBYTE(v15) = 17;
                MiUnmapPageInHyperSpaceWorker(v14, v15, 0x80000000LL);
                result = 0xFFFFFA8000000000uLL;
                v17 = 48 * v12 - 0x58000000000LL;
                if ( v17 != a3 )
                {
                  MiReferenceControlAreaPfn(a1, 0LL, 1u);
                  MiLockPageAtDpcInline(48 * v12 - 0x58000000000LL);
                  MiInitializeTransitionPfn(v12, (__int64 *)v10);
                  *(_BYTE *)(v17 + 35) ^= (*(_BYTE *)(v17 + 35) ^ EffectivePagePriorityThread) & 7;
                  MiRemoveLockedPageChargeAndDecRef(48 * v12 - 0x58000000000LL);
                  result = 0x7FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
                v3 = a1;
              }
              v11 = v16;
              v10 += 8LL;
              v4 = a2;
            }
            else
            {
              result = MmAccessFault(2uLL, v10, 0LL, 0LL);
            }
            if ( v10 >= v21 )
            {
              v9 = v22;
              break;
            }
          }
        }
        if ( v7 )
        {
          result = MiUnlockProtoPoolPage(v7, v26);
          v7 = 0LL;
        }
      }
      v8 = v9;
    }
    while ( v9 );
  }
  return result;
}
