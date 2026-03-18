/*
 * XREFs of MiChangePageAttributeBatch @ 0x14010346C
 * Callers:
 *     MiConvertContiguousPages @ 0x14007A79C (MiConvertContiguousPages.c)
 *     MiInitializeMdlPages @ 0x14007A868 (MiInitializeMdlPages.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiPerformFinalZeroing @ 0x14021F1F8 (MiPerformFinalZeroing.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14003BC50 (KeInvalidateAllCaches.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x140103734 (MiFlushCacheForAttributeChange.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rsi
  int v8; // r12d
  char v9; // di
  int v10; // eax
  int v11; // esi
  __int64 v12; // rdi
  unsigned int v13; // ecx
  char v14; // al
  __int64 *v15; // rax
  unsigned __int8 v16; // [rsp+60h] [rbp+8h]
  unsigned int v17; // [rsp+78h] [rbp+20h]

  if ( a1 )
  {
    v16 = 17;
    v4 = a2;
    v5 = a1;
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
        MiAbortCombineScan(v7, a2, a3);
        v7 = *(_QWORD *)(v7 + 16);
        v10 = 0;
        ++v6;
        if ( (v9 & 0xC0) == 0xC0 )
          v10 = v8;
        v8 = v10;
      }
      while ( v7 );
      if ( v8 || (MiFlushEntireTbDueToAttributeChange(a1, a2, a3), v6 < dword_14036C214) || v4 == 1 )
      {
        a2 = 0LL;
      }
      else
      {
        ++dword_14036C20C;
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
          ++dword_14036C210;
          MiFlushCacheForAttributeChange((v12 + 0x58000000000LL) / 48, 1LL, v4);
          a2 = v17;
        }
        *(_QWORD *)(v12 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v11;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v11 == v6 )
        {
          __writecr8(v16);
          v15 = (__int64 *)(v12 + 16);
          v12 = 0LL;
          v5 = *v15;
        }
        else
        {
          v15 = (__int64 *)(v12 + 16);
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
