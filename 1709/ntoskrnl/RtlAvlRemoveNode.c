/*
 * XREFs of RtlAvlRemoveNode @ 0x140058B30
 * Callers:
 *     MiUpdatePageFileSectionList @ 0x14001F824 (MiUpdatePageFileSectionList.c)
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 *     MiCombiningInProgress @ 0x1400CF508 (MiCombiningInProgress.c)
 *     MiFreeCombineBlock @ 0x1400E55B0 (MiFreeCombineBlock.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F1070 (MiDeleteStaleCacheMaps.c)
 *     MiRemoveFaultNode @ 0x14010FE68 (MiRemoveFaultNode.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     MiRemoveUnmappedIoNode @ 0x140119CC4 (MiRemoveUnmappedIoNode.c)
 *     MiRemoveMappingNode @ 0x140125BF0 (MiRemoveMappingNode.c)
 *     MiDeleteCloneDescriptor @ 0x140131B84 (MiDeleteCloneDescriptor.c)
 *     MiUpdatePageFileList @ 0x14014FF48 (MiUpdatePageFileList.c)
 *     MiSessionRemoveImage @ 0x140158EEC (MiSessionRemoveImage.c)
 *     MiFreeMdlTracker @ 0x140215D30 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140216690 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiDeleteKernelStackNode @ 0x1402197B4 (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402199D4 (MiMakeIoRangePermanent.c)
 *     MiUpdatePerSessionProto @ 0x14022E1A8 (MiUpdatePerSessionProto.c)
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x140236CD0 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402375C0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiSectionDelete @ 0x1404D11B0 (MiSectionDelete.c)
 *     ExpWnfDeleteNameInstance @ 0x1404FEC5C (ExpWnfDeleteNameInstance.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 *     MiAweViewRemover @ 0x1406E52C0 (MiAweViewRemover.c)
 *     MiHotAddPartitionMemory @ 0x1406EE0EC (MiHotAddPartitionMemory.c)
 *     PsCallEnclave @ 0x14071B2E0 (PsCallEnclave.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14005DF54 (RtlpTreeDoubleRotateNodes.c)
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
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  unsigned __int64 *v24; // r11
  unsigned __int64 *v25; // r9
  unsigned __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rax
  char v29; // r9
  _QWORD *v30; // rax

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    if ( v4 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
      {
        v30 = *(_QWORD **)(v2 + 8);
        v16 = 0;
        v15 = *(_QWORD *)a2;
        v6 = *(_QWORD *)a2;
        if ( v30 )
        {
          v16 = 1;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v30;
            v30 = (_QWORD *)v30[1];
          }
          while ( v30 );
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
        v21 = 0LL;
        if ( *(_QWORD *)(v20 + 8) == a2 )
          v21 = 8LL;
        if ( *(_QWORD *)(v21 + v20) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v21 + v20) = v15;
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
            v29 = *(_BYTE *)(v22 + 16) & 0xFC;
            *(_BYTE *)(v22 + 16) = v29;
            if ( v10 == (*(_BYTE *)(v28 + 16) & 3) )
            {
              *v9 ^= (*v9 ^ v10 ^ 0xFE) & 3;
              *(_BYTE *)(v28 + 16) &= 0xFCu;
            }
            else
            {
              if ( v10 == ((*(_BYTE *)(v28 + 16) ^ 0xFE) & 3) )
                *(_BYTE *)(v22 + 16) = v10 | v29;
              *(_BYTE *)(v28 + 16) &= 0xFCu;
            }
          }
          else
          {
            if ( (*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
              __fastfail(0x1Du);
            v24 = (unsigned __int64 *)(v6 + 8LL * (v7 == 1));
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
            v25 = (unsigned __int64 *)(v22 + 8LL * (v7 != 1));
            *(_QWORD *)(v22 + 16) = v11 | *(_DWORD *)(v22 + 16) & 3;
            v26 = *v25;
            if ( *v25 )
            {
              v27 = *(_QWORD *)(v26 + 16);
              if ( (v27 & 0xFFFFFFFFFFFFFFFCuLL) != v22 )
                __fastfail(0x1Du);
              *(_QWORD *)(v26 + 16) = v6 | v27 & 3;
            }
            *v24 = v26;
            *v25 = v6;
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
