/*
 * XREFs of MiChangePageAttributeBatch @ 0x1400519A0
 * Callers:
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiConvertContiguousPages @ 0x14004D90C (MiConvertContiguousPages.c)
 *     MiInitializeMdlBatchPages @ 0x140051D48 (MiInitializeMdlBatchPages.c)
 *     MiZeroAndConvertLargePage @ 0x14013825C (MiZeroAndConvertLargePage.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiPerformFinalZeroing @ 0x1402652E4 (MiPerformFinalZeroing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140051C70 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushHyperSpace @ 0x1400B9164 (MiFlushHyperSpace.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeInvalidateAllCaches @ 0x14016D5F0 (KeInvalidateAllCaches.c)
 */

void __fastcall MiChangePageAttributeBatch(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  volatile signed __int32 *v6; // r13
  unsigned int v7; // ebp
  volatile signed __int32 *v8; // rsi
  int v9; // r15d
  char v10; // di
  int v11; // eax
  int v12; // r8d
  int v13; // r14d
  volatile signed __int32 *v14; // rdi
  unsigned int v15; // ecx
  char v16; // al
  unsigned int v17; // ecx
  int v18; // r8d
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-48h]
  unsigned __int8 v23; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v5 = a2;
    v6 = a1;
    v23 = 17;
    do
    {
      v7 = 0;
      v8 = v6;
      v22 = 0;
      v9 = 1;
      do
      {
        if ( v7 >= 0x1000 )
          break;
        if ( v7 )
        {
          if ( _interlockedbittestandset64(v8 + 6, 0x3FuLL) )
            break;
        }
        else
        {
          v23 = MiLockPageInline(v8);
        }
        v10 = *((_BYTE *)v8 + 34);
        MiAbortCombineScan(v8);
        v8 = (volatile signed __int32 *)*((_QWORD *)v8 + 2);
        v11 = 0;
        ++v7;
        if ( (v10 & 0xC0) == 0xC0 )
          v11 = v9;
        v9 = v11;
      }
      while ( v8 );
      if ( v9 || (MiFlushEntireTbDueToAttributeChange(a1, a2), v7 < dword_1403CB700) || v5 == 1 )
      {
        v12 = 0;
      }
      else
      {
        ++dword_1403CB6F8;
        KeInvalidateAllCaches();
        v12 = 1;
        v22 = 1;
      }
      v13 = 0;
      v14 = v6;
      a2 = (unsigned __int8)v5;
      LOBYTE(a2) = (_BYTE)v5 << 6;
      do
      {
        v15 = *((unsigned __int8 *)v14 + 34);
        v16 = a2 | v15 & 0x3F;
        v17 = v15 >> 6;
        *((_BYTE *)v14 + 34) = v16;
        if ( !v12 && !v9 && v5 != 1 && v17 != v5 && v17 == 1 )
        {
          ++dword_1403CB6FC;
          v18 = -805306366;
          if ( v5 != 2 )
            v18 = -1073741824;
          v19 = MiMapPageInHyperSpaceWorker((__int64)(v14 + 0x16000000000LL) / 48, 0LL, v18, a4);
          KeInvalidateRangeAllCachesNoIpi(v19, 4096LL);
          MiUnmapPageInHyperSpaceWorker(v19, 0x11u, 0x80000000);
          if ( v5 == 3 )
            MiFlushHyperSpace(v21, v20);
          v12 = v22;
          a2 = (unsigned __int8)((_BYTE)v5 << 6);
        }
        *((_QWORD *)v14 + 3) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v13;
        _InterlockedAnd64((volatile signed __int64 *)v14 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        a1 = v14 + 4;
        if ( v13 == v7 )
        {
          __writecr8(v23);
          v6 = *(volatile signed __int32 **)a1;
          v14 = 0LL;
        }
        else
        {
          v14 = *(volatile signed __int32 **)a1;
        }
        if ( a3 != -1 )
          *(_QWORD *)a1 = a3;
      }
      while ( v14 );
    }
    while ( v6 );
  }
}
