/*
 * XREFs of RtlAvlRemoveNode @ 0x14002A570
 * Callers:
 *     MiCombiningInProgress @ 0x140004A14 (MiCombiningInProgress.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x14008120C (MiDeleteStaleCacheMaps.c)
 *     MiRemoveFaultNode @ 0x14009DCE0 (MiRemoveFaultNode.c)
 *     MiFreeCombineBlock @ 0x1400AD658 (MiFreeCombineBlock.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1400D2920 (MiDeleteDeferredCloneDescriptors.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiRemoveMappingNode @ 0x14014B5AC (MiRemoveMappingNode.c)
 *     MiRemoveUnmappedIoNode @ 0x14014C5F4 (MiRemoveUnmappedIoNode.c)
 *     MiSessionRemoveImage @ 0x140154B38 (MiSessionRemoveImage.c)
 *     MiProcessLoaderEntry @ 0x140160F88 (MiProcessLoaderEntry.c)
 *     MiUpdatePageFileList @ 0x14017DF20 (MiUpdatePageFileList.c)
 *     MiFreeMdlTracker @ 0x140253C18 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140254378 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiDeleteKernelStackNode @ 0x1402563B4 (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402564B0 (MiMakeIoRangePermanent.c)
 *     MmManageFaultRange @ 0x140262270 (MmManageFaultRange.c)
 *     MiUpdatePerSessionProto @ 0x140268350 (MiUpdatePerSessionProto.c)
 *     MiRemoveVad @ 0x140268864 (MiRemoveVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x14026A73C (MiReplaceSystemProtoPtesNode.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x14026E6B0 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14026F18C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 *     ExpWnfDeleteNameInstance @ 0x140567528 (ExpWnfDeleteNameInstance.c)
 *     MiSectionDelete @ 0x140593740 (MiSectionDelete.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiProcessCrcList @ 0x1405B6E90 (MiProcessCrcList.c)
 *     MiAweViewRemover @ 0x14074F7F4 (MiAweViewRemover.c)
 *     MiHotAddPartitionMemory @ 0x14075757C (MiHotAddPartitionMemory.c)
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1400E7A3C (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // cl
  char v10; // al
  _BYTE *v11; // r14
  unsigned __int8 v12; // si
  unsigned __int64 v13; // rdi
  bool v14; // zf
  char v15; // al
  _QWORD *v16; // r11
  unsigned __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r11
  __int64 v21; // rcx
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  char v25; // r9
  unsigned __int64 *v26; // rsi
  unsigned __int64 *v27; // r11
  unsigned __int64 v28; // r10
  _QWORD *v29; // rax
  __int64 v30; // r8
  char v31; // r8
  unsigned __int8 v32; // cl

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)a2;
  v5 = v2;
  if ( *(_QWORD *)a2 )
    v5 = *(_QWORD *)a2;
  v7 = 0LL;
  if ( v4 )
    v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
  {
    if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
    {
      v29 = *(_QWORD **)(v4 + 8);
      v18 = 0;
      v17 = *(_QWORD *)a2;
      v8 = *(_QWORD *)a2;
      if ( v29 )
      {
        v18 = 1;
        do
        {
          v8 = v17;
          v17 = (unsigned __int64)v29;
          v29 = (_QWORD *)v29[1];
        }
        while ( v29 );
      }
      v19 = *(_QWORD *)v17;
    }
    else
    {
      v16 = *(_QWORD **)v2;
      v17 = *(_QWORD *)(a2 + 8);
      v8 = v17;
      v18 = 1;
      if ( *(_QWORD *)v2 )
      {
        v18 = 0;
        do
        {
          v8 = v17;
          v17 = (unsigned __int64)v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
      }
      v19 = *(_QWORD *)(v17 + 8);
    }
    *(_QWORD *)v17 = v4;
    *(_QWORD *)(v17 + 8) = v2;
    v20 = *(_QWORD *)(v4 + 16);
    if ( (v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v4 + 16) = v17 | v20 & 3;
    v21 = *(_QWORD *)(v2 + 16);
    if ( (v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v2 + 16) = v17 | v21 & 3;
    if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
      __fastfail(0x1Du);
    *(_QWORD *)(v8 + 8LL * v18) = v19;
    if ( v19 )
    {
      if ( *(_QWORD *)(v19 + 16) != v17 )
        __fastfail(0x1Du);
      *(_QWORD *)(v19 + 16) = v8;
    }
    *(_QWORD *)(v17 + 16) = *(_QWORD *)(a2 + 16);
    v9 = 3;
    if ( !v18 )
      v9 = 1;
    v22 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v22 )
    {
      v23 = 0LL;
      if ( *(_QWORD *)(v22 + 8) == a2 )
        v23 = 8LL;
      if ( *(_QWORD *)(v23 + v22) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v23 + v22) = v17;
    }
    else
    {
      if ( *a1 != a2 )
        __fastfail(0x1Du);
      *a1 = v17;
    }
    while ( 1 )
    {
LABEL_13:
      v10 = *(_BYTE *)(v8 + 16);
      v11 = (_BYTE *)(v8 + 16);
      v12 = v10 & 3;
      if ( (v10 & 3) == ((unsigned __int8)v9 ^ 2) )
      {
        LOBYTE(v7) = v10 & 0xFC;
        *v11 = v7;
        v13 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        if ( !v12 )
        {
          LOBYTE(v7) = v9 | v10 & 0xFC;
          *(_BYTE *)(v8 + 16) = v7;
          return v7;
        }
        v24 = *(_QWORD *)v8;
        v13 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v9 == 1 )
          v24 = *(_QWORD *)(v8 + 8);
        v25 = *(_BYTE *)(v24 + 16) & 3;
        if ( v25 == ((unsigned __int8)v9 ^ 2) )
        {
          v7 = RtlpTreeDoubleRotateNodes(a1, v8, v24, v9 == 1);
          *v11 &= 0xFCu;
          v8 = v7;
          v31 = *(_BYTE *)(v24 + 16) & 0xFC;
          *(_BYTE *)(v24 + 16) = v31;
          v32 = *(_BYTE *)(v7 + 16);
          LODWORD(v7) = v32 & 3;
          if ( v12 == (_DWORD)v7 )
          {
            LOBYTE(v7) = (v12 ^ *v11 ^ 0xFE) & 3;
            *v11 ^= v7;
            *(_BYTE *)(v8 + 16) &= 0xFCu;
          }
          else
          {
            if ( v12 == ((v32 ^ 0xFE) & 3) )
              *(_BYTE *)(v24 + 16) = v12 | v31;
            *(_BYTE *)(v8 + 16) &= 0xFCu;
          }
        }
        else
        {
          if ( (*(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
            __fastfail(0x1Du);
          v26 = (unsigned __int64 *)(v8 + 8LL * (v9 == 1));
          if ( *v26 != v24 )
            __fastfail(0x1Du);
          if ( v13 )
          {
            if ( *(_QWORD *)(v13 + 8) == v8 )
            {
              *(_QWORD *)(v13 + 8) = v24;
            }
            else
            {
              if ( *(_QWORD *)v13 != v8 )
                __fastfail(0x1Du);
              *(_QWORD *)v13 = v24;
            }
          }
          else
          {
            if ( *a1 != v8 )
              __fastfail(0x1Du);
            *a1 = v24;
          }
          v27 = (unsigned __int64 *)(v24 + 8LL * (v9 != 1));
          *(_QWORD *)(v24 + 16) = v13 | *(_DWORD *)(v24 + 16) & 3;
          v28 = *v27;
          if ( *v27 )
          {
            v30 = *(_QWORD *)(v28 + 16);
            if ( (v30 & 0xFFFFFFFFFFFFFFFCuLL) != v24 )
              __fastfail(0x1Du);
            *(_QWORD *)(v28 + 16) = v8 | v30 & 3;
          }
          *v26 = v28;
          *v27 = v8;
          *(_QWORD *)v11 = v24 | *(_DWORD *)v11 & 3;
          LOBYTE(v7) = *(_BYTE *)(v24 + 16) & 0xFC;
          if ( !v25 )
          {
            *(_BYTE *)(v24 + 16) = v7 | (v9 ^ 0xFE) & 3;
            return v7;
          }
          *(_BYTE *)(v24 + 16) = v7;
          v8 = v24;
          *v11 &= 0xFCu;
        }
      }
      if ( !v13 )
        return v7;
      v14 = *(_QWORD *)(v13 + 8) == v8;
      v15 = 3;
      v8 = v13;
      if ( !v14 )
        v15 = 1;
      v9 = v15;
    }
  }
  v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 16) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v5 + 16) = v8;
  }
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 8) == a2 )
    {
      v9 = 3;
      *(_QWORD *)(v8 + 8) = v5;
    }
    else
    {
      if ( *(_QWORD *)v8 != a2 )
        __fastfail(0x1Du);
      v9 = 1;
      *(_QWORD *)v8 = v5;
    }
    goto LABEL_13;
  }
  if ( *a1 != a2 )
    __fastfail(0x1Du);
  *a1 = v5;
  return v7;
}
