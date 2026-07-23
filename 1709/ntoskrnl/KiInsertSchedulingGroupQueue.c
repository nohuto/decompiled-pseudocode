/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x1400D2BE8
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x1400D2B88 (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x1400D2CD0 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall KiInsertSchedulingGroupQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _RTL_RB_TREE *v6; // rcx
  BOOLEAN v7; // r8
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN result; // al
  int v10; // r11d
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r8
  int v14; // r10d
  int v15; // eax
  _RTL_BALANCED_NODE *v16; // rax

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = *(_QWORD *)(a2 + 408);
  if ( v3 )
    v6 = (_RTL_RB_TREE *)(v3 + 392);
  else
    v6 = a1 + 1431;
  v7 = 0;
  Root = v6->Root;
  if ( !v6->Root )
    goto LABEL_4;
  v10 = *(_DWORD *)(a2 + 116);
  while ( 1 )
  {
    v11 = v10 - HIDWORD(Root[1].Left);
    if ( v10 != HIDWORD(Root[1].Left) )
      goto LABEL_13;
    v12 = *(_WORD *)(a2 + 114);
    if ( v12 )
    {
      v13 = WORD1(Root[1].Left);
      _BitScanReverse((unsigned int *)&v14, v12);
      v15 = 0;
      if ( v13 )
        _BitScanReverse((unsigned int *)&v15, v13);
      v11 = v15 - v14;
LABEL_13:
      if ( v11 < 0 )
        goto LABEL_14;
      goto LABEL_17;
    }
    if ( v10 )
    {
      v11 = 1;
      goto LABEL_13;
    }
    if ( (_RTL_BALANCED_NODE *)*(_QWORD *)a2 <= Root[-4].Children[1] )
    {
LABEL_14:
      v16 = Root->Children[0];
      if ( (*(_BYTE *)&v6->0 & 1) != 0 )
      {
        if ( !v16 )
        {
LABEL_16:
          v7 = 0;
          goto LABEL_4;
        }
        v16 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v16);
      }
      if ( !v16 )
        goto LABEL_16;
      goto LABEL_20;
    }
LABEL_17:
    v16 = Root->Children[1];
    if ( (*(_BYTE *)&v6->0 & 1) == 0 )
      goto LABEL_18;
    if ( !v16 )
      break;
    v16 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v16);
LABEL_18:
    if ( !v16 )
      break;
LABEL_20:
    Root = v16;
  }
  v7 = 1;
LABEL_4:
  result = RtlRbInsertNodeEx(v6, Root, v7, (PRTL_BALANCED_NODE)(a2 + 88));
  if ( a3 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
