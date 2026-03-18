/*
 * XREFs of MiChangePageAttributeBatch @ 0x1400ED4B0
 * Callers:
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiConvertContiguousPages @ 0x1400CA4C4 (MiConvertContiguousPages.c)
 *     MiInitializeMdlPages @ 0x1400CA600 (MiInitializeMdlPages.c)
 *     MiZeroAndConvertLargePage @ 0x1400CFECC (MiZeroAndConvertLargePage.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiPerformFinalZeroing @ 0x14022A6E0 (MiPerformFinalZeroing.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushCacheForAttributeChange @ 0x1400ED7F4 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x140137470 (KeInvalidateAllCaches.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // r12
  unsigned int v6; // ebp
  __int64 v7; // rsi
  int v8; // r15d
  char v9; // di
  int v10; // eax
  int v11; // esi
  __int64 v12; // rdi
  unsigned int v13; // ecx
  char v14; // al
  _QWORD *v15; // rax
  unsigned __int8 v16; // [rsp+60h] [rbp+8h]
  unsigned int v17; // [rsp+78h] [rbp+20h]

  if ( a1 )
  {
    v4 = a2;
    v5 = a1;
    v16 = 17;
    do
    {
      v6 = 0;
      v7 = v5;
      v17 = 0;
      v8 = 1;
      do
      {
        if ( v6 >= 0x1000 )
          break;
        if ( v6 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v16 = MiLockPageInline(v7);
        }
        v9 = *(_BYTE *)(v7 + 34);
        MiAbortCombineScan(v7);
        v7 = *(_QWORD *)(v7 + 16);
        v10 = 0;
        ++v6;
        if ( (v9 & 0xC0) == 0xC0 )
          v10 = v8;
        v8 = v10;
      }
      while ( v7 );
      if ( v8 || (MiFlushEntireTbDueToAttributeChange(a1, a2, a3), v6 < dword_140388560) || v4 == 1 )
      {
        a2 = 0LL;
      }
      else
      {
        ++dword_140388558;
        KeInvalidateAllCaches();
        a2 = 1LL;
        v17 = 1;
      }
      v11 = 0;
      v12 = v5;
      do
      {
        v13 = *(unsigned __int8 *)(v12 + 34);
        v14 = ((_BYTE)v4 << 6) | v13 & 0x3F;
        a1 = v13 >> 6;
        *(_BYTE *)(v12 + 34) = v14;
        if ( !(_DWORD)a2 && !v8 && v4 != 1 && (_DWORD)a1 != v4 && (_DWORD)a1 == 1 )
        {
          ++dword_14038855C;
          MiFlushCacheForAttributeChange((v12 + 0x58000000000LL) / 48, 1LL, v4);
          a2 = v17;
        }
        *(_QWORD *)(v12 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v11;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v11 == v6 )
        {
          __writecr8(v16);
          v5 = *(_QWORD *)(v12 + 16);
          v15 = (_QWORD *)(v12 + 16);
          v12 = 0LL;
        }
        else
        {
          v15 = (_QWORD *)(v12 + 16);
          v12 = *(_QWORD *)(v12 + 16);
        }
        if ( a3 != -1 )
          *v15 = a3;
      }
      while ( v12 );
    }
    while ( v5 );
  }
}
