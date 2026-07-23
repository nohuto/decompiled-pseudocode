/*
 * XREFs of RtlpHpVaMgrRangeCoalesce @ 0x140297018
 * Callers:
 *     RtlpHpVaMgrFree @ 0x140296EB4 (RtlpHpVaMgrFree.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeCoalesce(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int16 v4; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v9; // al
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // rdi
  char v12; // al
  unsigned __int64 v13; // rax

  v2 = *(unsigned __int16 *)(a1 + 40);
  *(_BYTE *)a2 &= ~1u;
  v3 = a2;
  v4 = *(_WORD *)(a2 + 24);
  v6 = 32 * v2 + (a2 & ~(32 * v2 - 1));
  v7 = 32LL * *(unsigned __int16 *)(a2 + 26);
  v8 = a2 - v7;
  if ( a2 >= v7 && (*(_BYTE *)v8 & 1) == 0 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(a2 - v7));
    *(_WORD *)(v8 + 24) += *(_WORD *)(v3 + 24);
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_BYTE *)v3 = 2;
    v9 = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_BYTE *)(v3 + 1) = v9;
    *(_QWORD *)(v3 + 24) = 2309737967LL;
    v3 = v8;
  }
  v10 = *(_WORD *)(v3 + 24);
  v11 = v3 + 32LL * v10;
  if ( v11 < v6 && (*(_BYTE *)v11 & 1) == 0 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(v3 + 32LL * *(unsigned __int16 *)(v3 + 24)));
    *(_WORD *)(v3 + 24) += *(_WORD *)(v11 + 24);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_BYTE *)v11 = 2;
    v12 = *(_BYTE *)(a1 + 44);
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_BYTE *)(v11 + 1) = v12;
    *(_QWORD *)(v11 + 24) = 2309737967LL;
    v10 = *(_WORD *)(v3 + 24);
  }
  v13 = v3 + 32LL * v10;
  if ( v10 > v4 && v13 < v6 )
    *(_WORD *)(v13 + 26) = v10;
  return v3;
}
