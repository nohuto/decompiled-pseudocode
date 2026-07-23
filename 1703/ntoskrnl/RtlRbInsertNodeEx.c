/*
 * XREFs of RtlRbInsertNodeEx @ 0x14004A340
 * Callers:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140049B80 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14004B7C8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiSetClockInterval @ 0x140067A94 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x14007DABC (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14007E0DC (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400AF604 (MiBitmapsCachedEntryLengthChanged.c)
 *     PfSnGetFileInformation @ 0x1400B7690 (PfSnGetFileInformation.c)
 *     KiInsertSchedulingGroupQueue @ 0x140113D3C (KiInsertSchedulingGroupQueue.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14011F070 (KiAbEntryUpdateOwnerTreePosition.c)
 *     IoStartDiskIoAttributionForContext @ 0x14011F4F4 (IoStartDiskIoAttributionForContext.c)
 *     MiInitializePagefileBitmapsCache @ 0x14015988C (MiInitializePagefileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1402396E8 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140245DA8 (RtlpHpVsFreeChunkInsert.c)
 *     VmpFaultEntryInsert @ 0x140251D30 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x1402521B8 (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x140819AAC (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v4; // rax
  bool v5; // zf
  _RTL_BALANCED_NODE *v6; // r10
  unsigned __int64 v7; // rax
  char v8; // r11
  _RTL_BALANCED_NODE *v9; // r10
  unsigned __int64 v10; // rbx
  _BOOL8 v11; // rdi
  unsigned __int64 v12; // rbx
  BOOL v13; // edi
  unsigned __int64 v14; // rax
  int v15; // r8d
  _BOOL8 v16; // rbx
  _RTL_BALANCED_NODE **v17; // rdi
  unsigned __int64 v18; // rax
  $E1AE211D9A3742F3C04DF10739C91229 *v19; // r11
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _RTL_BALANCED_NODE *v24; // rax
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  int v27; // r8d
  _RTL_BALANCED_NODE **v28; // rbx
  unsigned __int64 v29; // rax
  _BOOL8 v30; // r14
  unsigned __int64 v31; // rax
  $E1AE211D9A3742F3C04DF10739C91229 *v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rax
  _RTL_BALANCED_NODE *v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // r11

  Node->0 = 0uLL;
  if ( !Parent )
  {
    v5 = (*(_BYTE *)&Tree->0 & 1) == 0;
    Tree->Min = Node;
    Tree->Root = Node;
    if ( !v5 )
      *(_BYTE *)&Tree->0 |= 1u;
    Node->ParentValue = 0LL;
    return v4;
  }
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
      v5 = (*(_BYTE *)&Tree->0 & 1) == 0;
      Tree->Min = Node;
      if ( !v5 )
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
      v4 = v10 == (_QWORD)Parent;
      v12 = (unsigned __int64)v9->Children[v4];
      if ( v8 )
      {
        if ( !v12 )
          break;
        v12 ^= (unsigned __int64)v9;
      }
      if ( !v12 || (*(_BYTE *)(v12 + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->0 &= ~1u;
      Node = v9;
      *(_BYTE *)(v12 + 16) &= ~1u;
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
LABEL_27:
      v13 = !v11;
      v14 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v15 = *(_BYTE *)&Tree->0 & 1;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v14 )
        v14 ^= (unsigned __int64)Parent;
      if ( (_RTL_BALANCED_NODE *)v14 != v9 )
        __fastfail(0x1Du);
      v16 = v13;
      v17 = &v9->Children[!v13];
      v18 = (unsigned __int64)*v17;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v18 )
        v18 ^= (unsigned __int64)v9;
      if ( (PRTL_BALANCED_NODE)v18 != Parent )
        __fastfail(0x1Du);
      v19 = &v9->16;
      v20 = v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_83;
        v20 ^= (unsigned __int64)v9;
      }
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v21 )
          v21 ^= v20;
        if ( (_RTL_BALANCED_NODE *)v21 == v9 )
        {
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v22 = (unsigned __int64)Parent ^ v20;
          else
            v22 = (unsigned __int64)Parent;
          *(_QWORD *)(v20 + 8) = v22;
        }
        else
        {
          v43 = *(_QWORD *)v20;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v43 )
            v43 ^= v20;
          if ( (_RTL_BALANCED_NODE *)v43 != v9 )
            __fastfail(0x1Du);
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v44 = (unsigned __int64)Parent ^ v20;
          else
            v44 = (unsigned __int64)Parent;
          *(_QWORD *)v20 = v44;
        }
        goto LABEL_38;
      }
LABEL_83:
      if ( Tree->Root != v9 )
        __fastfail(0x1Du);
      Tree->Root = Parent;
LABEL_38:
      if ( v15 && v20 )
        v20 ^= (unsigned __int64)Parent;
      Parent->ParentValue = v20 | *(_DWORD *)&Parent->0 & 3;
      v23 = (unsigned __int64)Parent->Children[v16];
      if ( v15 )
      {
        if ( !v23 )
        {
LABEL_41:
          if ( v15 && v23 )
            v23 ^= (unsigned __int64)v9;
          *v17 = (_RTL_BALANCED_NODE *)v23;
          v24 = v9;
          if ( v15 )
            v24 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v9);
          Parent->Children[v16] = v24;
          if ( v15 )
            v25 = (unsigned __int64)Parent ^ (unsigned __int64)v9;
          else
            v25 = (unsigned __int64)Parent;
          v4 = v25 | *(_DWORD *)&v19->0 & 3;
          v19->ParentValue = v4;
          *(_BYTE *)&v19->0 |= 1u;
          *(_BYTE *)&Parent->0 &= ~1u;
          return v4;
        }
        v23 ^= (unsigned __int64)Parent;
      }
      if ( v23 )
      {
        v40 = *(_QWORD *)(v23 + 16);
        v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v15 && v41 )
          v41 ^= v23;
        if ( (PRTL_BALANCED_NODE)v41 != Parent )
          __fastfail(0x1Du);
        if ( v15 )
          v42 = (unsigned __int64)v9 ^ v23;
        else
          v42 = (unsigned __int64)v9;
        *(_QWORD *)(v23 + 16) = v42 | v40 & 3;
      }
      goto LABEL_41;
    }
    v26 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v27 = *(_BYTE *)&Tree->0 & 1;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v26 )
      v26 ^= (unsigned __int64)Node;
    if ( (PRTL_BALANCED_NODE)v26 != Parent )
      __fastfail(0x1Du);
    v28 = &Parent->Children[!v11];
    v29 = (unsigned __int64)*v28;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v29 )
      v29 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v29 != Node )
      __fastfail(0x1Du);
    v30 = v11;
    v31 = (unsigned __int64)v9->Children[v11];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v31 )
      v31 ^= (unsigned __int64)v9;
    if ( (PRTL_BALANCED_NODE)v31 != Parent )
      goto LABEL_117;
    v32 = &Parent->16;
    v33 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v33 )
      v33 ^= (unsigned __int64)Parent;
    if ( (_RTL_BALANCED_NODE *)v33 != v9 )
LABEL_117:
      __fastfail(0x1Du);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v34 = (unsigned __int64)Node ^ (unsigned __int64)v9;
    else
      v34 = (unsigned __int64)Node;
    v9->Children[v30] = (_RTL_BALANCED_NODE *)v34;
    v35 = (unsigned __int64)v9;
    if ( v27 )
      v35 = (unsigned __int64)Node ^ (unsigned __int64)v9;
    Node->ParentValue = v35 | *(_DWORD *)&Node->0 & 3;
    v36 = (unsigned __int64)Node->Children[v30];
    if ( v27 )
    {
      if ( !v36 )
      {
LABEL_62:
        if ( v27 && v36 )
          v36 ^= (unsigned __int64)Parent;
        *v28 = (_RTL_BALANCED_NODE *)v36;
        v37 = Parent;
        if ( v27 )
          v37 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
        Node->Children[v30] = v37;
        if ( v27 )
          v38 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
        else
          v38 = (unsigned __int64)Node;
        v39 = v38 | *(_DWORD *)&v32->0 & 3;
        Parent = Node;
        v32->ParentValue = v39;
        goto LABEL_27;
      }
      v36 ^= (unsigned __int64)Node;
    }
    if ( v36 )
    {
      v45 = *(_QWORD *)(v36 + 16);
      v46 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v27 && v46 )
        v46 ^= v36;
      if ( (PRTL_BALANCED_NODE)v46 != Node )
        __fastfail(0x1Du);
      if ( v27 )
        v47 = (unsigned __int64)Parent ^ v36;
      else
        v47 = (unsigned __int64)Parent;
      *(_QWORD *)(v36 + 16) = v47 | v45 & 3;
    }
    goto LABEL_62;
  }
  return v4;
}
