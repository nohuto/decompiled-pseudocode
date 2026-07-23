/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x180071FAC
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpVsContextAllocate @ 0x18004C21C (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsChunkCompare @ 0x18003E830 (RtlpHpVsChunkCompare.c)
 *     RtlpHpVsChunkComputeCost @ 0x180072138 (RtlpHpVsChunkComputeCost.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rdx
  BOOLEAN v9; // bl
  __int64 v10; // rdi
  int v11; // esi
  unsigned int v12; // ebp
  unsigned __int64 v13; // rax
  __int16 v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v15, &v16);
  v6 = a1 + 8;
  v7 = RtlpHeapKey;
  v8 = (0x101010101010101LL
      * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 48) += (unsigned int)v8;
  v9 = 0;
  *(_WORD *)a3 = a3 ^ v7 ^ (v15 + v5 - v8);
  v10 = *(_QWORD *)v6;
  v11 = *(_BYTE *)(v6 + 8) & 1;
  if ( *(_QWORD *)v6 )
  {
    v12 = a3 ^ v7 ^ *(_DWORD *)a3;
    while ( 1 )
    {
      if ( (int)RtlpHpVsChunkCompare(v12, v10) < 0 )
      {
        v13 = *(_QWORD *)v10;
        if ( v11 )
        {
          if ( !v13 )
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v10, v9, (PRTL_BALANCED_NODE)(a3 + 8));
          v13 ^= v10;
        }
        if ( !v13 )
          return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v10, v9, (PRTL_BALANCED_NODE)(a3 + 8));
      }
      else
      {
        v13 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          if ( !v13 )
          {
LABEL_7:
            v9 = 1;
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v10, v9, (PRTL_BALANCED_NODE)(a3 + 8));
          }
          v13 ^= v10;
        }
        if ( !v13 )
          goto LABEL_7;
      }
      v10 = v13;
    }
  }
  return RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v10, v9, (PRTL_BALANCED_NODE)(a3 + 8));
}
