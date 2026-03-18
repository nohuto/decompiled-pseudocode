/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x1400AC19C
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1400AB964 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAllocate @ 0x1400ABD80 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x1400AC348 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v5; // ax
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // r9d
  unsigned __int64 v12; // rax
  __int16 v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v14, &v15);
  v6 = 0LL;
  v7 = ((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL * ((v7 + (v7 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  v8 = (unsigned __int64 *)(a1 + 16);
  *a3 = (unsigned __int16)a3 ^ RtlpHpHeapGlobals ^ (v14
                                                  + v5
                                                  - ((0x101010101010101LL * ((v7 + (v7 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v9 = v8[1];
  v10 = *v8;
  if ( (v9 & 1) != 0 )
  {
    if ( v10 )
      v10 ^= (unsigned __int64)v8;
    else
      v10 = 0LL;
  }
  v11 = v9 & 1;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v10 - 8) ^ *(_DWORD *)(v10 - 8)) )
      {
        v12 = *(_QWORD *)v10;
        if ( v11 )
        {
          if ( !v12 )
            return RtlRbInsertNodeEx(v8, v10, v6, a3 + 4);
          v12 ^= v10;
        }
        if ( !v12 )
          return RtlRbInsertNodeEx(v8, v10, v6, a3 + 4);
      }
      else
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_11;
          v12 ^= v10;
        }
        if ( !v12 )
        {
LABEL_11:
          LOBYTE(v6) = 1;
          return RtlRbInsertNodeEx(v8, v10, v6, a3 + 4);
        }
      }
      v10 = v12;
    }
  }
  return RtlRbInsertNodeEx(v8, v10, v6, a3 + 4);
}
