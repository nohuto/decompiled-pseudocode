/*
 * XREFs of RtlAvlRemoveNode @ 0x1400DB450
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     MiFreeCombineBlock @ 0x140079210 (MiFreeCombineBlock.c)
 *     MiDeleteStaleCacheMaps @ 0x140082E10 (MiDeleteStaleCacheMaps.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiRemoveFaultNode @ 0x1400B3758 (MiRemoveFaultNode.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiUpdatePageFileSectionList @ 0x140119284 (MiUpdatePageFileSectionList.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiRemoveUnmappedIoNode @ 0x140125440 (MiRemoveUnmappedIoNode.c)
 *     MiCombiningInProgress @ 0x14012CB20 (MiCombiningInProgress.c)
 *     MiRemoveMappingNode @ 0x1401350D4 (MiRemoveMappingNode.c)
 *     MiSessionRemoveImage @ 0x140149B04 (MiSessionRemoveImage.c)
 *     MiUpdatePageFileList @ 0x140159DA0 (MiUpdatePageFileList.c)
 *     MiFreeMdlTracker @ 0x14020E5B4 (MiFreeMdlTracker.c)
 *     MiDeleteKernelStackNode @ 0x140211E9C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140211F64 (MiMakeIoRangePermanent.c)
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14021DF3C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiUpdatePerSessionProto @ 0x1402214F0 (MiUpdatePerSessionProto.c)
 *     ExpWnfDeleteNameInstance @ 0x140438C24 (ExpWnfDeleteNameInstance.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiSectionDelete @ 0x140512600 (MiSectionDelete.c)
 *     MiAweViewRemover @ 0x1406B85F0 (MiAweViewRemover.c)
 *     MiHotAddPartitionMemory @ 0x1406BCDD0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14004B4D0 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v4; // r10
  unsigned __int64 v6; // rdx
  char v7; // r10
  char v8; // cl
  _BYTE *v9; // rdi
  char v10; // bl
  unsigned __int64 v11; // rsi
  bool v12; // zf
  char v13; // al
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r11
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  _BOOL8 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  _QWORD *v24; // r11
  __int64 v25; // r8
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rax

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    if ( v4 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
      {
        v27 = *(_QWORD **)(v2 + 8);
        v16 = 0;
        v15 = *(_QWORD *)a2;
        v6 = *(_QWORD *)a2;
        if ( v27 )
        {
          v16 = 1;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v27;
            v27 = (_QWORD *)v27[1];
          }
          while ( v27 );
        }
        v17 = *(_QWORD *)v15;
      }
      else
      {
        v14 = *(_QWORD **)v4;
        v15 = *(_QWORD *)(a2 + 8);
        v6 = v15;
        v16 = 1;
        if ( *(_QWORD *)v4 )
        {
          v16 = 0;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v14;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
        }
        v17 = *(_QWORD *)(v15 + 8);
      }
      *(_QWORD *)v15 = v2;
      *(_QWORD *)(v15 + 8) = v4;
      v18 = *(_QWORD *)(v2 + 16);
      if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v2 + 16) = v15 | v18 & 3;
      v19 = *(_QWORD *)(v4 + 16);
      if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v4 + 16) = v15 | v19 & 3;
      if ( (*(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
        __fastfail(0x1Du);
      *(_QWORD *)(v6 + 8LL * v16) = v17;
      if ( v17 )
      {
        if ( *(_QWORD *)(v17 + 16) != v15 )
          __fastfail(0x1Du);
        *(_QWORD *)(v17 + 16) = v6;
      }
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(a2 + 16);
      v7 = 3;
      if ( !v16 )
        v7 = 1;
      v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8) == a2;
        if ( *(_QWORD *)(v20 + 8 * v21) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v20 + 8 * v21) = v15;
      }
      else
      {
        if ( *a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v15;
      }
      while ( 1 )
      {
LABEL_8:
        v8 = *(_BYTE *)(v6 + 16);
        v9 = (_BYTE *)(v6 + 16);
        v10 = v8 & 3;
        if ( (v8 & 3) == ((unsigned __int8)v7 ^ 2) )
        {
          *v9 = v8 & 0xFC;
          v11 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          if ( !v10 )
          {
            *(_BYTE *)(v6 + 16) = v7 | *(_BYTE *)(v6 + 16) & 0xFC;
            return;
          }
          v22 = *(_QWORD *)v6;
          v11 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v7 == 1 )
            v22 = *(_QWORD *)(v6 + 8);
          v23 = *(_BYTE *)(v22 + 16) & 3;
          if ( v23 == ((unsigned __int8)v7 ^ 2) )
          {
            v28 = RtlpTreeDoubleRotateNodes(a1, v6, v22, v7 == 1);
            *v9 &= 0xFCu;
            v6 = v28;
            *(_BYTE *)(v22 + 16) &= 0xFCu;
            if ( v10 == (*(_BYTE *)(v28 + 16) & 3) )
            {
              *v9 ^= (v10 ^ *v9 ^ 0xFE) & 3;
              *(_BYTE *)(v28 + 16) &= 0xFCu;
            }
            else
            {
              if ( v10 == ((*(_BYTE *)(v28 + 16) ^ 0xFE) & 3) )
                *(_BYTE *)(v22 + 16) ^= (v10 ^ *(_BYTE *)(v22 + 16)) & 3;
              *(_BYTE *)(v28 + 16) &= 0xFCu;
            }
          }
          else
          {
            if ( (*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
              __fastfail(0x1Du);
            v24 = (_QWORD *)(v6 + 8LL * (v7 == 1));
            if ( *v24 != v22 )
              __fastfail(0x1Du);
            if ( v11 )
            {
              if ( *(_QWORD *)(v11 + 8) == v6 )
              {
                *(_QWORD *)(v11 + 8) = v22;
              }
              else
              {
                if ( *(_QWORD *)v11 != v6 )
                  __fastfail(0x1Du);
                *(_QWORD *)v11 = v22;
              }
            }
            else
            {
              if ( *a1 != v6 )
                __fastfail(0x1Du);
              *a1 = v22;
            }
            *(_QWORD *)(v22 + 16) = v11 | *(_DWORD *)(v22 + 16) & 3;
            v25 = *(_QWORD *)(v22 + 8LL * (v7 != 1));
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 16);
              if ( (v26 & 0xFFFFFFFFFFFFFFFCuLL) != v22 )
                __fastfail(0x1Du);
              *(_QWORD *)(v25 + 16) = v6 | v26 & 3;
            }
            *v24 = v25;
            *(_QWORD *)(v22 + 8LL * (v7 != 1)) = v6;
            *(_QWORD *)v9 = v22 | *(_DWORD *)v9 & 3;
            if ( !v23 )
            {
              *(_BYTE *)(v22 + 16) ^= (v7 ^ *(_BYTE *)(v22 + 16) ^ 0xFE) & 3;
              return;
            }
            *(_BYTE *)(v22 + 16) &= 0xFCu;
            v6 = v22;
            *v9 &= 0xFCu;
          }
        }
        if ( !v11 )
          return;
        v12 = *(_QWORD *)(v11 + 8) == v6;
        v13 = 3;
        v6 = v11;
        if ( !v12 )
          v13 = 1;
        v7 = v13;
      }
    }
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 8);
  }
  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 16) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v2 + 16) = v6;
  }
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 8) == a2 )
    {
      v7 = 3;
      *(_QWORD *)(v6 + 8) = v2;
    }
    else
    {
      if ( *(_QWORD *)v6 != a2 )
        __fastfail(0x1Du);
      v7 = 1;
      *(_QWORD *)v6 = v2;
    }
    goto LABEL_8;
  }
  if ( *a1 != a2 )
    __fastfail(0x1Du);
  *a1 = v2;
}
