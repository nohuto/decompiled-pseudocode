/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x180071FAC
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpVsContextAllocate @ 0x18004C21C (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsChunkCompare @ 0x18003E830 (RtlpHpVsChunkCompare.c)
 *     RtlpHpVsChunkComputeCost @ 0x180072138 (RtlpHpVsChunkComputeCost.c)
 */

void __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v5; // ax
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rdx
  bool v9; // bl
  unsigned __int64 v10; // rdi
  int v11; // esi
  unsigned int v12; // ebp
  unsigned __int64 v13; // rax
  __int16 v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v14, &v15);
  v6 = a1 + 8;
  v7 = RtlpHeapKey;
  v8 = (0x101010101010101LL
      * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 48) += (unsigned int)v8;
  v9 = 0;
  *a3 = (unsigned __int16)a3 ^ v7 ^ (v14 + v5 - v8);
  v10 = *(_QWORD *)v6;
  v11 = *(_BYTE *)(v6 + 8) & 1;
  if ( *(_QWORD *)v6 )
  {
    v12 = (unsigned int)a3 ^ v7 ^ *(_DWORD *)a3;
    while ( 1 )
    {
      if ( (int)RtlpHpVsChunkCompare(v12, v10) < 0 )
      {
        v13 = *(_QWORD *)v10;
        if ( v11 )
        {
          if ( !v13 )
            break;
          v13 ^= v10;
        }
        if ( !v13 )
          break;
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
            break;
          }
          v13 ^= v10;
        }
        if ( !v13 )
          goto LABEL_7;
      }
      v10 = v13;
    }
  }
  RtlRbInsertNodeEx(v6, v10, v9, (unsigned __int64)(a3 + 4));
}
