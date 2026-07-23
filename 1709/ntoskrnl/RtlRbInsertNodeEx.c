/*
 * XREFs of RtlRbInsertNodeEx @ 0x14005E640
 * Callers:
 *     IoStartDiskIoAttributionForContext @ 0x140007CD0 (IoStartDiskIoAttributionForContext.c)
 *     PfSnGetFileInformation @ 0x140012BC0 (PfSnGetFileInformation.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14005DD20 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400A9504 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400AA8CC (KiAbEntryUpdateWaiterTreePosition.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400C300C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400D2BE8 (KiInsertSchedulingGroupQueue.c)
 *     KiSetClockInterval @ 0x14010F168 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x14011A238 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14011A84C (MiInvalidatePageFileBitmapsCache.c)
 *     MiInitializePagefileBitmapsCache @ 0x1401500A0 (MiInitializePagefileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14024E698 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14025D29C (RtlpHpVsFreeChunkInsert.c)
 *     VmpFaultEntryInsert @ 0x140278B6C (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x140279020 (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v4; // rax
  _RTL_BALANCED_NODE *v6; // rcx
  unsigned __int64 v7; // rax
  char v8; // r11
  _RTL_BALANCED_NODE *v9; // rcx
  unsigned __int64 v10; // rbx
  _BOOL8 v11; // rdi
  unsigned __int64 v12; // rbx
  bool v13; // zf
  BOOL v14; // edi
  unsigned __int64 v15; // rax
  int v16; // r8d
  _BOOL8 v17; // rbx
  _RTL_BALANCED_NODE **v18; // rdi
  unsigned __int64 v19; // rax
  $91EB5F235DD95B22731DB1553D27511B *v20; // r9
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  _RTL_BALANCED_NODE *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // r8d
  _RTL_BALANCED_NODE **v34; // r14
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  $91EB5F235DD95B22731DB1553D27511B *v38; // r15
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r11
  unsigned __int64 *v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // r11

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
        v13 = (*(_BYTE *)&Tree->0 & 1) == 0;
        Tree->Min = Node;
        if ( !v13 )
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
LABEL_24:
        v14 = !v11;
        v15 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        v16 = *(_BYTE *)&Tree->0 & 1;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v15 )
          v15 ^= (unsigned __int64)Parent;
        if ( (_RTL_BALANCED_NODE *)v15 != v9 )
          __fastfail(0x1Du);
        v17 = v14;
        v18 = &v9->Children[!v14];
        v19 = (unsigned __int64)*v18;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v19 )
          v19 ^= (unsigned __int64)v9;
        if ( (PRTL_BALANCED_NODE)v19 != Parent )
          __fastfail(0x1Du);
        v20 = &v9->16;
        v21 = v9->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_78;
          v21 ^= (unsigned __int64)v9;
        }
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8);
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v22 )
            v22 ^= v21;
          if ( (_RTL_BALANCED_NODE *)v22 == v9 )
          {
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
              v23 = (unsigned __int64)Parent ^ v21;
            else
              v23 = (unsigned __int64)Parent;
            *(_QWORD *)(v21 + 8) = v23;
          }
          else
          {
            v30 = *(_QWORD *)v21;
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v30 )
              v30 ^= v21;
            if ( (_RTL_BALANCED_NODE *)v30 != v9 )
              __fastfail(0x1Du);
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
              v31 = (unsigned __int64)Parent ^ v21;
            else
              v31 = (unsigned __int64)Parent;
            *(_QWORD *)v21 = v31;
          }
          goto LABEL_35;
        }
LABEL_78:
        if ( Tree->Root != v9 )
          __fastfail(0x1Du);
        Tree->Root = Parent;
LABEL_35:
        if ( v16 && v21 )
          v21 ^= (unsigned __int64)Parent;
        Parent->ParentValue = v21 | *(_DWORD *)&Parent->0 & 3;
        v24 = (unsigned __int64)Parent->Children[v17];
        if ( v16 )
        {
          if ( !v24 )
          {
LABEL_38:
            if ( v16 && v24 )
              v24 ^= (unsigned __int64)v9;
            *v18 = (_RTL_BALANCED_NODE *)v24;
            v25 = v9;
            if ( v16 )
              v25 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v9);
            Parent->Children[v17] = v25;
            if ( v16 )
              v26 = (unsigned __int64)Parent ^ (unsigned __int64)v9;
            else
              v26 = (unsigned __int64)Parent;
            v4 = v26 | *(_DWORD *)&v20->0 & 3;
            v20->ParentValue = v4;
            *(_BYTE *)&v20->0 |= 1u;
            *(_BYTE *)&Parent->0 &= ~1u;
            return v4;
          }
          v24 ^= (unsigned __int64)Parent;
        }
        if ( v24 )
        {
          v27 = *(_QWORD *)(v24 + 16);
          v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v16 && v28 )
            v28 ^= v24;
          if ( (PRTL_BALANCED_NODE)v28 != Parent )
            __fastfail(0x1Du);
          if ( v16 )
            v29 = (unsigned __int64)v9 ^ v24;
          else
            v29 = (unsigned __int64)v9;
          *(_QWORD *)(v24 + 16) = v29 | v27 & 3;
        }
        goto LABEL_38;
      }
      v32 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v33 = *(_BYTE *)&Tree->0 & 1;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v32 )
        v32 ^= (unsigned __int64)Node;
      if ( (PRTL_BALANCED_NODE)v32 != Parent )
        __fastfail(0x1Du);
      v34 = &Parent->Children[!v11];
      v35 = (unsigned __int64)*v34;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v35 )
        v35 ^= (unsigned __int64)Parent;
      if ( (PRTL_BALANCED_NODE)v35 != Node )
        __fastfail(0x1Du);
      v36 = v11;
      v37 = (unsigned __int64)v9->Children[v11];
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v37 )
        v37 ^= (unsigned __int64)v9;
      if ( (PRTL_BALANCED_NODE)v37 != Parent )
        goto LABEL_116;
      v38 = &Parent->16;
      v39 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v39 )
        v39 ^= (unsigned __int64)Parent;
      if ( (_RTL_BALANCED_NODE *)v39 != v9 )
LABEL_116:
        __fastfail(0x1Du);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        v40 = (unsigned __int64)Node ^ (unsigned __int64)v9;
      else
        v40 = (unsigned __int64)Node;
      v9->Children[v36] = (_RTL_BALANCED_NODE *)v40;
      v41 = (unsigned __int64)v9;
      if ( v33 )
        v41 = (unsigned __int64)Node ^ (unsigned __int64)v9;
      v42 = (unsigned __int64 *)((char *)Node + v36 * 8);
      Node->ParentValue = v41 | *(_DWORD *)&Node->0 & 3;
      v43 = (unsigned __int64)Node->Children[v36];
      if ( v33 )
      {
        if ( !v43 )
        {
LABEL_72:
          if ( v33 && v43 )
            v43 ^= (unsigned __int64)Parent;
          *v34 = (_RTL_BALANCED_NODE *)v43;
          v44 = (unsigned __int64)Parent;
          if ( v33 )
            v44 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
          *v42 = v44;
          if ( v33 )
            v45 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
          else
            v45 = (unsigned __int64)Node;
          v46 = v45 | *(_DWORD *)&v38->0 & 3;
          Parent = Node;
          v38->ParentValue = v46;
          goto LABEL_24;
        }
        v43 ^= (unsigned __int64)Node;
      }
      if ( v43 )
      {
        v47 = *(_QWORD *)(v43 + 16);
        v48 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v33 && v48 )
          v48 ^= v43;
        if ( (PRTL_BALANCED_NODE)v48 != Node )
          __fastfail(0x1Du);
        if ( v33 )
          v49 = (unsigned __int64)Parent ^ v43;
        else
          v49 = (unsigned __int64)Parent;
        *(_QWORD *)(v43 + 16) = v49 | v47 & 3;
      }
      goto LABEL_72;
    }
  }
  else
  {
    v13 = (*(_BYTE *)&Tree->0 & 1) == 0;
    Tree->Min = Node;
    Tree->Root = Node;
    if ( !v13 )
      *(_BYTE *)&Tree->0 |= 1u;
    Node->ParentValue = 0LL;
  }
  return v4;
}
