/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x1400AC19C
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1400AB964 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAllocate @ 0x1400ABD80 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x1400AC348 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  BOOLEAN v6; // r8
  unsigned __int64 v7; // rcx
  _RTL_RB_TREE *v8; // rbx
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdx
  int v11; // r9d
  unsigned __int64 v12; // rax
  __int16 v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v14, &v15);
  v6 = 0;
  v7 = ((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min
                                   + ((unsigned int)((0x101010101010101LL * ((v7 + (v7 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
  v8 = a1 + 1;
  *(_WORD *)a3 = a3 ^ RtlpHpHeapGlobals ^ (v14
                                         + v5
                                         - ((0x101010101010101LL * ((v7 + (v7 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  Min = v8->Min;
  Root = (unsigned __int64)v8->Root;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)v8;
    else
      Root = 0LL;
  }
  v11 = (unsigned __int8)Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)Root - 8) ^ *(_DWORD *)(Root - 8)) )
      {
        v12 = *(_QWORD *)Root;
        if ( v11 )
        {
          if ( !v12 )
            return RtlRbInsertNodeEx(v8, (PRTL_BALANCED_NODE)Root, v6, (PRTL_BALANCED_NODE)(a3 + 8));
          v12 ^= Root;
        }
        if ( !v12 )
          return RtlRbInsertNodeEx(v8, (PRTL_BALANCED_NODE)Root, v6, (PRTL_BALANCED_NODE)(a3 + 8));
      }
      else
      {
        v12 = *(_QWORD *)(Root + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_11;
          v12 ^= Root;
        }
        if ( !v12 )
        {
LABEL_11:
          v6 = 1;
          return RtlRbInsertNodeEx(v8, (PRTL_BALANCED_NODE)Root, v6, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      Root = v12;
    }
  }
  return RtlRbInsertNodeEx(v8, (PRTL_BALANCED_NODE)Root, v6, (PRTL_BALANCED_NODE)(a3 + 8));
}
