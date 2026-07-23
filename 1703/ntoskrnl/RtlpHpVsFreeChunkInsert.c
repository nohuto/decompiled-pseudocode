/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x140245DA8
 * Callers:
 *     RtlpHpVsChunkFree @ 0x140245480 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAllocate @ 0x140245810 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x1402451E4 (RtlpHpVsChunkComputeCost.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  unsigned int v6; // r11d
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rcx
  _RTL_BALANCED_NODE *v9; // r10
  _RTL_BALANCED_NODE *v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v12, &v13);
  v6 = RtlpHeapKey;
  v7 = 0;
  v8 = ((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  *(_QWORD *)(a1 + 48) += (unsigned int)((0x101010101010101LL * ((v8 + (v8 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  *(_WORD *)a3 = v6 ^ a3 ^ (v12 + v5 - ((0x101010101010101LL * ((v8 + (v8 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v9 = *(_RTL_BALANCED_NODE **)(a1 + 8);
  if ( v9 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ v6 ^ *(_DWORD *)a3) < (((_DWORD)v9 - 8) ^ v6 ^ *(_DWORD *)&v9[-1].0) )
      {
        v10 = v9->Children[0];
        if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
        {
          if ( !v10 )
            return RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), v9, v7, (PRTL_BALANCED_NODE)(a3 + 8));
          v10 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v10);
        }
        if ( !v10 )
          return RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), v9, v7, (PRTL_BALANCED_NODE)(a3 + 8));
      }
      else
      {
        v10 = v9->Children[1];
        if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_7;
          v10 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v10);
        }
        if ( !v10 )
        {
LABEL_7:
          v7 = 1;
          return RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), v9, v7, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      v9 = v10;
    }
  }
  return RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), v9, v7, (PRTL_BALANCED_NODE)(a3 + 8));
}
