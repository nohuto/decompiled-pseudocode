/*
 * XREFs of RtlRbInsertNodeEx @ 0x18003A130
 * Callers:
 *     RtlpHpSegContextReserve @ 0x1800040FC (RtlpHpSegContextReserve.c)
 *     LdrpCheckForRetryLoading @ 0x1800208D8 (LdrpCheckForRetryLoading.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180029BB0 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlpHpSegContextCompact @ 0x180036078 (RtlpHpSegContextCompact.c)
 *     EtwpInsertRegistration @ 0x180036BF0 (EtwpInsertRegistration.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x18003D9A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     EtwpInsertGuidEntry @ 0x180064370 (EtwpInsertGuidEntry.c)
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180071FAC (RtlpHpVsFreeChunkInsert.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v4; // rax
  _RTL_BALANCED_NODE *v6; // r8
  unsigned __int64 v7; // rax
  char v8; // r11
  _RTL_BALANCED_NODE *v9; // r8
  unsigned __int64 v10; // rbx
  _BOOL8 v11; // rbx
  bool v12; // zf
  unsigned __int64 v13; // rax
  int v14; // r10d
  _RTL_BALANCED_NODE **v15; // rsi
  unsigned __int64 v16; // rax
  _BOOL8 v17; // r14
  unsigned __int64 v18; // rax
  $E34C8FD80FDA445B69BC9589A435A5F4 *v19; // r11
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _RTL_BALANCED_NODE *v24; // rax
  unsigned __int64 v25; // rdx
  BOOL v26; // ebx
  unsigned __int64 v27; // rax
  int v28; // r9d
  _BOOL8 v29; // r11
  _RTL_BALANCED_NODE **v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  _RTL_BALANCED_NODE *v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rdi

  Node->0 = 0uLL;
  if ( Parent )
  {
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v6 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
    else
      v6 = Node;
    Parent->Children[Right] = v6;
    v7 = (unsigned __int64)Parent;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v7 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
    v4 = v7 | 1;
    Node->ParentValue = v4;
    if ( !Right )
    {
      v4 = (unsigned __int64)Tree->Min & 0xFFFFFFFFFFFFFFFEuLL;
      if ( Parent == (PRTL_BALANCED_NODE)v4 )
      {
        v12 = (*(_BYTE *)&Tree->0 & 1) == 0;
        Tree->Min = Node;
        if ( !v12 )
          *(_BYTE *)&Tree->0 |= 1u;
      }
    }
    if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
    {
      v8 = *(_BYTE *)&Tree->0 & 1;
      while ( 1 )
      {
        v9 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v8 && v9 )
          v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v9);
        v10 = (unsigned __int64)v9->Children[0];
        if ( v8 && v10 )
          v10 ^= (unsigned __int64)v9;
        v11 = v10 != (_QWORD)Parent;
        v4 = (unsigned __int64)v9->Children[!v11];
        if ( v8 )
        {
          if ( !v4 )
            break;
          v4 ^= (unsigned __int64)v9;
        }
        if ( !v4 || (*(_BYTE *)(v4 + 16) & 1) == 0 )
          break;
        *(_BYTE *)&Parent->0 &= ~1u;
        Node = v9;
        *(_BYTE *)(v4 + 16) &= ~1u;
        Parent = (PRTL_BALANCED_NODE)(v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          if ( !Parent )
            return v4;
          Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v9 ^ (unsigned __int64)Parent);
        }
        if ( Parent )
        {
          *(_BYTE *)&v9->0 |= 1u;
          v4 = (unsigned __int64)Parent->Children[0];
          v8 = *(_BYTE *)&Tree->0 & 1;
          if ( v8 && v4 )
            v4 ^= (unsigned __int64)Parent;
          Right = v9 != (_RTL_BALANCED_NODE *)v4;
          if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
            continue;
        }
        return v4;
      }
      if ( Right == v11 )
      {
LABEL_43:
        v26 = !v11;
        v27 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        v28 = *(_BYTE *)&Tree->0 & 1;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v27 )
          v27 ^= (unsigned __int64)Parent;
        if ( (_RTL_BALANCED_NODE *)v27 != v9 )
          __fastfail(0x1Du);
        v29 = v26;
        v30 = &v9->Children[!v26];
        v31 = (unsigned __int64)*v30;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v31 )
          v31 ^= (unsigned __int64)v9;
        if ( (PRTL_BALANCED_NODE)v31 != Parent )
          __fastfail(0x1Du);
        v4 = (unsigned __int64)&v9->16;
        v32 = v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          if ( !v32 )
            goto LABEL_82;
          v32 ^= (unsigned __int64)v9;
        }
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 8);
          if ( v28 && v33 )
            v33 ^= v32;
          if ( (_RTL_BALANCED_NODE *)v33 == v9 )
          {
            if ( v28 )
              v34 = (unsigned __int64)Parent ^ v32;
            else
              v34 = (unsigned __int64)Parent;
            *(_QWORD *)(v32 + 8) = v34;
          }
          else
          {
            v41 = *(_QWORD *)v32;
            if ( v28 && v41 )
              v41 ^= v32;
            if ( (_RTL_BALANCED_NODE *)v41 != v9 )
              __fastfail(0x1Du);
            if ( v28 )
              v42 = (unsigned __int64)Parent ^ v32;
            else
              v42 = (unsigned __int64)Parent;
            *(_QWORD *)v32 = v42;
          }
          goto LABEL_54;
        }
LABEL_82:
        if ( Tree->Root != v9 )
          __fastfail(0x1Du);
        Tree->Root = Parent;
LABEL_54:
        if ( v28 && v32 )
          v32 ^= (unsigned __int64)Parent;
        Parent->ParentValue &= 3uLL;
        Parent->ParentValue |= v32;
        v35 = (unsigned __int64)Parent->Children[v29];
        if ( v28 )
        {
          if ( !v35 )
          {
LABEL_57:
            if ( v28 && v35 )
              v35 ^= (unsigned __int64)v9;
            *v30 = (_RTL_BALANCED_NODE *)v35;
            v36 = v9;
            if ( v28 )
              v36 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v9);
            Parent->Children[v29] = v36;
            if ( v28 )
              v37 = (unsigned __int64)Parent ^ (unsigned __int64)v9;
            else
              v37 = (unsigned __int64)Parent;
            *(_QWORD *)v4 &= 3uLL;
            *(_QWORD *)v4 |= v37;
            *(_BYTE *)v4 |= 1u;
            *(_BYTE *)&Parent->0 &= ~1u;
            return v4;
          }
          v35 ^= (unsigned __int64)Parent;
        }
        if ( v35 )
        {
          v38 = *(_QWORD *)(v35 + 16);
          v39 = v38 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v28 && v39 )
            v39 ^= v35;
          if ( (PRTL_BALANCED_NODE)v39 != Parent )
            __fastfail(0x1Du);
          if ( v28 )
            v40 = (unsigned __int64)v9 ^ v35;
          else
            v40 = (unsigned __int64)v9;
          *(_QWORD *)(v35 + 16) = v40 | v38 & 3;
        }
        goto LABEL_57;
      }
      v13 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v14 = *(_BYTE *)&Tree->0 & 1;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v13 )
        v13 ^= (unsigned __int64)Node;
      if ( (PRTL_BALANCED_NODE)v13 != Parent )
        __fastfail(0x1Du);
      v15 = &Parent->Children[!v11];
      v16 = (unsigned __int64)*v15;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v16 )
        v16 ^= (unsigned __int64)Parent;
      if ( (PRTL_BALANCED_NODE)v16 != Node )
        __fastfail(0x1Du);
      v17 = v11;
      v18 = (unsigned __int64)v9->Children[v11];
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v18 )
        v18 ^= (unsigned __int64)v9;
      if ( (PRTL_BALANCED_NODE)v18 != Parent )
        goto LABEL_115;
      v19 = &Parent->16;
      v20 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v20 )
        v20 ^= (unsigned __int64)Parent;
      if ( (_RTL_BALANCED_NODE *)v20 != v9 )
LABEL_115:
        __fastfail(0x1Du);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        v21 = (unsigned __int64)Node ^ (unsigned __int64)v9;
      else
        v21 = (unsigned __int64)Node;
      v9->Children[v17] = (_RTL_BALANCED_NODE *)v21;
      v22 = (unsigned __int64)v9;
      if ( v14 )
        v22 = (unsigned __int64)Node ^ (unsigned __int64)v9;
      Node->ParentValue &= 3uLL;
      Node->ParentValue |= v22;
      v23 = (unsigned __int64)Node->Children[v17];
      if ( v14 )
      {
        if ( !v23 )
        {
LABEL_37:
          if ( v14 && v23 )
            v23 ^= (unsigned __int64)Parent;
          *v15 = (_RTL_BALANCED_NODE *)v23;
          v24 = Parent;
          if ( v14 )
            v24 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
          Node->Children[v17] = v24;
          if ( v14 )
            v25 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
          else
            v25 = (unsigned __int64)Node;
          v19->ParentValue &= 3uLL;
          v19->ParentValue |= v25;
          Parent = Node;
          goto LABEL_43;
        }
        v23 ^= (unsigned __int64)Node;
      }
      if ( v23 )
      {
        v43 = *(_QWORD *)(v23 + 16);
        v44 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 && v44 )
          v44 ^= v23;
        if ( (PRTL_BALANCED_NODE)v44 != Node )
          __fastfail(0x1Du);
        if ( v14 )
          v45 = (unsigned __int64)Parent ^ v23;
        else
          v45 = (unsigned __int64)Parent;
        *(_QWORD *)(v23 + 16) = v45 | v43 & 3;
      }
      goto LABEL_37;
    }
  }
  else
  {
    v12 = (*(_BYTE *)&Tree->0 & 1) == 0;
    Tree->Min = Node;
    Tree->Root = Node;
    if ( !v12 )
      *(_BYTE *)&Tree->0 |= 1u;
    Node->ParentValue = 0LL;
  }
  return v4;
}
