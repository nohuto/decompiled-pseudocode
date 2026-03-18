/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x14025D29C
 * Callers:
 *     RtlpHpVsChunkFree @ 0x14025C970 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAllocate @ 0x14025CCEC (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsChunkComputeCost @ 0x14025C704 (RtlpHpVsChunkComputeCost.c)
 */

void __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  unsigned int v6; // r11d
  bool v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v11, &v12);
  v6 = RtlpHeapKey;
  v7 = 0;
  v8 = ((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  *(_QWORD *)(a1 + 48) += (unsigned int)((0x101010101010101LL * ((v8 + (v8 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  *(_WORD *)a3 = v6 ^ a3 ^ (v11 + v5 - ((0x101010101010101LL * ((v8 + (v8 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ v6 ^ *(_DWORD *)a3) < (((_DWORD)v9 - 8) ^ v6 ^ *(_DWORD *)(v9 - 8)) )
      {
        v10 = *(_QWORD *)v9;
        if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v9;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_7;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_7:
          v7 = 1;
          break;
        }
      }
      v9 = v10;
    }
  }
  RtlRbInsertNodeEx(a1 + 8, v9, v7, a3 + 8);
}
