/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x140496F3C
 * Callers:
 *     HvpViewMapStart @ 0x140496E94 (HvpViewMapStart.c)
 *     HvpViewMapExtendStorage @ 0x140566FA8 (HvpViewMapExtendStorage.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x140006D10 (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiUnmapViewOfSection @ 0x1400CC138 (CmSiUnmapViewOfSection.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140497274 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x1404973B0 (HvpViewMapCreateView.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v3; // rdi
  _RTL_BALANCED_NODE *p_Node; // rbx
  __int64 MemoryAllocationGranularity; // rax
  __int64 v8; // r11
  _RTL_BALANCED_NODE *v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 i; // r8
  __int64 j; // rdx
  __int64 v20; // rbx
  int ViewRangeValid; // esi
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r12
  _RTL_BALANCED_NODE *v25; // rax
  _RTL_BALANCED_NODE *v26; // rax
  _RTL_BALANCED_NODE *v27; // r8
  _RTL_BALANCED_NODE *v28; // rbx
  _RTL_RB_TREE *v29; // rbx
  unsigned __int64 Root; // rdx
  BOOLEAN v31; // al
  unsigned __int64 v32; // rax
  _RTL_BALANCED_NODE *v33; // rax
  _RTL_BALANCED_NODE *v34; // r8
  _RTL_BALANCED_NODE *v35; // rax
  _RTL_BALANCED_NODE *v36; // r8
  _RTL_BALANCED_NODE Node; // [rsp+20h] [rbp-10h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp+48h] BYREF
  _RTL_BALANCED_NODE *v41; // [rsp+80h] [rbp+50h]

  v3 = 0LL;
  p_Node = &Node;
  Privileges = 0LL;
  Node.Children[1] = &Node;
  Node.Children[0] = &Node;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v41 = (_RTL_BALANCED_NODE *)MemoryAllocationGranularity;
  v9 = (_RTL_BALANCED_NODE *)MemoryAllocationGranularity;
  v10 = 0x200000LL;
  if ( v11 < v12 )
  {
    v13 = ~(MemoryAllocationGranularity - 1);
    while ( 1 )
    {
      v14 = a2 & v13;
      v15 = a3 - (a2 & v13);
      if ( v10 > v15 )
      {
        for ( i = (__int64)v9; i < v15; i *= 2LL )
          ;
        for ( j = 2 * i; v14 + j - a3 <= a3 / 8; j *= 2LL )
          i = j;
        v20 = v10;
        if ( i < v10 )
          v20 = i;
        v16 = v14 + v20;
        if ( (*(_BYTE *)(v8 + 32) & 1) != 0 && v16 >= *(_QWORD *)(v8 + 16) )
          v16 = *(_QWORD *)(v8 + 16);
        v17 = a3;
      }
      else
      {
        v16 = v14 + v10;
        v17 = v14 + v10;
      }
      ViewRangeValid = HvpViewMapCreateView(v8, a2 & v13, v16, &Privileges);
      if ( ViewRangeValid >= 0 )
      {
        v22 = v17;
        v23 = a2;
        v3 = (_RTL_BALANCED_NODE *)Privileges;
        v24 = a1;
        ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, Privileges, v23, v22);
        if ( ViewRangeValid < 0 )
        {
          v28 = Node.Children[0];
          goto LABEL_53;
        }
        v25 = Node.Children[1];
        if ( Node.Children[1]->Children[0] != &Node )
          __fastfail(3u);
        v3->Children[1] = Node.Children[1];
        v3->Children[0] = &Node;
        a2 = v16;
        v9 = v41;
        v25->Children[0] = v3;
        Node.Children[1] = v3;
        v3 = 0LL;
        Privileges = 0LL;
      }
      else
      {
        v9 = v41;
        v3 = (_RTL_BALANCED_NODE *)Privileges;
        if ( v10 <= (__int64)v41 )
        {
          v28 = Node.Children[0];
          goto LABEL_52;
        }
        v10 /= 2LL;
      }
      v8 = a1;
      if ( a2 >= a3 )
      {
        p_Node = Node.Children[0];
        break;
      }
    }
  }
  v26 = p_Node->Children[0];
  v27 = p_Node;
  if ( p_Node->Children[1] != &Node || v26->Children[1] != p_Node )
    __fastfail(3u);
  Node.Children[0] = p_Node->Children[0];
  v9 = &Node;
  v26->Children[1] = &Node;
  v28 = Node.Children[0];
  if ( v27 != &Node )
  {
    v29 = (_RTL_RB_TREE *)(v8 + 40);
    v3 = 0LL;
    do
    {
      Root = (unsigned __int64)v29->Root;
      if ( ((__int64)v29->Min & 1) != 0 && Root )
        Root ^= (unsigned __int64)v29;
      v31 = 0;
      if ( Root )
      {
        while ( 1 )
        {
          if ( (signed __int64)v27[1].ParentValue < *(_QWORD *)(Root + 40) )
          {
            v32 = *(_QWORD *)Root;
            if ( ((__int64)v29->Min & 1) != 0 )
            {
              if ( !v32 )
                goto LABEL_46;
              v32 ^= Root;
            }
            if ( !v32 )
            {
LABEL_46:
              v31 = 0;
              break;
            }
          }
          else
          {
            v32 = *(_QWORD *)(Root + 8);
            if ( ((__int64)v29->Min & 1) != 0 )
            {
              if ( !v32 )
                goto LABEL_40;
              v32 ^= Root;
            }
            if ( !v32 )
            {
LABEL_40:
              v31 = 1;
              break;
            }
          }
          Root = v32;
        }
      }
      RtlRbInsertNodeEx(v29, (PRTL_BALANCED_NODE)Root, v31, v27);
      v27 = Node.Children[0];
      if ( Node.Children[0]->Children[1] != &Node
        || (v33 = Node.Children[0]->Children[0], Node.Children[0]->Children[0]->Children[1] != Node.Children[0]) )
      {
        __fastfail(3u);
      }
      Node.Children[0] = Node.Children[0]->Children[0];
      v9 = &Node;
      v33->Children[1] = &Node;
    }
    while ( v27 != &Node );
    v28 = Node.Children[0];
  }
  ViewRangeValid = 0;
LABEL_52:
  v24 = a1;
LABEL_53:
  if ( v3 )
  {
    v34 = v3[2].Children[1];
    if ( v34 )
      CmSiUnmapViewOfSection((__int64)v9, *(HANDLE **)(v24 + 24), v34);
    CmSiFreeMemory((PPRIVILEGE_SET)v3);
    v28 = Node.Children[0];
  }
  if ( v28 != &Node )
  {
    v35 = v28->Children[0];
    if ( v28->Children[1] != &Node || v35->Children[1] != v28 )
      __fastfail(3u);
    while ( 1 )
    {
      Node.Children[0] = v35;
      v35->Children[1] = &Node;
      if ( v28 == &Node )
        break;
      v36 = v28[2].Children[1];
      if ( v36 )
        CmSiUnmapViewOfSection((__int64)&Node, *(HANDLE **)(v24 + 24), v36);
      CmSiFreeMemory((PPRIVILEGE_SET)v28);
      v28 = Node.Children[0];
      if ( Node.Children[0]->Children[1] == &Node )
      {
        v35 = Node.Children[0]->Children[0];
        if ( Node.Children[0]->Children[0]->Children[1] == Node.Children[0] )
          continue;
      }
      __fastfail(3u);
    }
  }
  return (unsigned int)ViewRangeValid;
}
