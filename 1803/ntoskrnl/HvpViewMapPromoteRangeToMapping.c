/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x140566C84
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1404E31E4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x140006D10 (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiUnmapViewOfSection @ 0x1400CC138 (CmSiUnmapViewOfSection.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140497274 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x1404973B0 (HvpViewMapCreateView.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1404E366C (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140706C7C (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapMigrateCOWData @ 0x140706D20 (HvpViewMapMigrateCOWData.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  unsigned __int64 v4; // r12
  __int64 v6; // r15
  _RTL_BALANCED_NODE *ViewForFileOffset; // rax
  _QWORD *v8; // r10
  _RTL_BALANCED_NODE *v9; // rdi
  int ViewRangeValid; // ebx
  __int64 MemoryAllocationGranularity; // rax
  int v12; // eax
  __int64 v13; // rcx
  PRTL_BALANCED_NODE v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  _RTL_BALANCED_NODE *v17; // rbx
  _RTL_BALANCED_NODE **v18; // r14
  __int64 v19; // rax
  _RTL_BALANCED_NODE *v20; // r12
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  BOOLEAN v26; // r8
  int v27; // ecx
  unsigned __int64 v28; // rax
  PPRIVILEGE_SET v29; // rbx
  __int64 v30; // rax
  void *v31; // r8
  _RTL_BALANCED_NODE *v32; // r8
  PRTL_BALANCED_NODE Node; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-18h]
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-10h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+38h] [rbp-8h]

  Node = 0LL;
  v4 = (unsigned int)(a2 + 4096);
  p_Privileges = &Privileges;
  v35 = v4;
  Privileges = (PPRIVILEGE_SET)&Privileges;
  v6 = v4 + a3;
  ViewForFileOffset = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, v4);
  v9 = ViewForFileOffset;
  if ( (__int64)ViewForFileOffset[2].Children[0] < v6 )
  {
    MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
    v12 = HvpViewMapCreateView(a1, (LARGE_INTEGER)(v4 & ~(MemoryAllocationGranularity - 1)), v6, &Node);
    v14 = Node;
    ViewRangeValid = v12;
    if ( v12 >= 0 )
    {
      ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, Node, v4, v6);
      if ( ViewRangeValid >= 0 )
      {
        v15 = v4;
        if ( v4 >= v6 )
        {
LABEL_8:
          v17 = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, v6 - 1);
          v18 = (_RTL_BALANCED_NODE **)(a1 + 40);
          v19 = (__int64)v9[2].Children[0];
          if ( v19 < (signed __int64)v17[1].ParentValue )
          {
            do
            {
              v20 = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, v19);
              RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), v20);
              v21 = p_Privileges;
              if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
                __fastfail(3u);
              v20->Children[1] = (_RTL_BALANCED_NODE *)p_Privileges;
              v20->Children[0] = (_RTL_BALANCED_NODE *)&Privileges;
              *v21 = v20;
              p_Privileges = (PPRIVILEGE_SET *)v20;
              v19 = (__int64)v20[2].Children[0];
            }
            while ( v19 < (signed __int64)v17[1].ParentValue );
            v4 = v35;
          }
          if ( v9[1].ParentValue == v4 )
          {
            RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), v9);
            v22 = p_Privileges;
            if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
              __fastfail(3u);
            v9->Children[1] = (_RTL_BALANCED_NODE *)p_Privileges;
            v9->Children[0] = (_RTL_BALANCED_NODE *)&Privileges;
            *v22 = v9;
            p_Privileges = (PPRIVILEGE_SET *)v9;
          }
          else
          {
            HvpViewMapMakeViewRangeInvalid(a1, v9, v4, v9[2].Children[0]);
          }
          if ( v17[2].Children[0] == (_RTL_BALANCED_NODE *)v6 )
          {
            RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), v17);
            v23 = p_Privileges;
            if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
              __fastfail(3u);
            v17->Children[1] = (_RTL_BALANCED_NODE *)p_Privileges;
            v17->Children[0] = (_RTL_BALANCED_NODE *)&Privileges;
            *v23 = v17;
            p_Privileges = (PPRIVILEGE_SET *)v17;
          }
          else
          {
            HvpViewMapMakeViewRangeInvalid(a1, v17, v17[1].ParentValue, v6);
          }
          v24 = *(_QWORD *)(a1 + 48);
          v25 = (unsigned __int64)*v18;
          if ( (v24 & 1) != 0 && v25 )
            v25 ^= (unsigned __int64)v18;
          v26 = 0;
          v27 = v24 & 1;
          if ( v25 )
          {
            while ( 1 )
            {
              if ( (signed __int64)v14[1].ParentValue < *(_QWORD *)(v25 + 40) )
              {
                v28 = *(_QWORD *)v25;
                if ( v27 )
                {
                  if ( !v28 )
                    goto LABEL_38;
                  v28 ^= v25;
                }
                if ( !v28 )
                {
LABEL_38:
                  v26 = 0;
                  break;
                }
              }
              else
              {
                v28 = *(_QWORD *)(v25 + 8);
                if ( v27 )
                {
                  if ( !v28 )
                    goto LABEL_32;
                  v28 ^= v25;
                }
                if ( !v28 )
                {
LABEL_32:
                  v26 = 1;
                  break;
                }
              }
              v25 = v28;
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 40), (PRTL_BALANCED_NODE)v25, v26, v14);
          v29 = Privileges;
          v30 = *(_QWORD *)&Privileges->PrivilegeCount;
          if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid != &Privileges
            || *(PPRIVILEGE_SET *)(v30 + 8) != Privileges )
          {
            __fastfail(3u);
          }
          while ( 1 )
          {
            Privileges = (PPRIVILEGE_SET)v30;
            *(_QWORD *)(v30 + 8) = &Privileges;
            if ( v29 == (PPRIVILEGE_SET)&Privileges )
              break;
            v31 = *(void **)&v29[2].Privilege[0].Attributes;
            if ( v31 )
              CmSiUnmapViewOfSection((__int64)&Privileges, *(HANDLE **)(a1 + 24), v31);
            CmSiFreeMemory(v29);
            v29 = Privileges;
            if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid == &Privileges )
            {
              v30 = *(_QWORD *)&Privileges->PrivilegeCount;
              if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) == Privileges )
                continue;
            }
            __fastfail(3u);
          }
          ViewRangeValid = 0;
          v13 = v4 + (char *)v14[2].Children[1] - (char *)v14[1].Children[0];
          v14 = 0LL;
          *a4 = v13;
        }
        else
        {
          while ( 1 )
          {
            v16 = HvpViewMapFindViewForFileOffset(a1, v15);
            ViewRangeValid = HvpViewMapMigrateCOWData(a1, v14, v16);
            if ( ViewRangeValid < 0 )
              break;
            v15 = *(_QWORD *)(v16 + 48);
            if ( v15 >= v6 )
              goto LABEL_8;
          }
        }
      }
    }
    if ( v14 )
    {
      v32 = v14[2].Children[1];
      if ( v32 )
        CmSiUnmapViewOfSection(v13, *(HANDLE **)(a1 + 24), v32);
      CmSiFreeMemory((PPRIVILEGE_SET)v14);
    }
  }
  else
  {
    *v8 = v4 + (char *)ViewForFileOffset[2].Children[1] - (char *)ViewForFileOffset[1].Children[0];
    return 0;
  }
  return (unsigned int)ViewRangeValid;
}
