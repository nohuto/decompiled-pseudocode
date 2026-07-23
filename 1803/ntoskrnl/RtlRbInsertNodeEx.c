/*
 * XREFs of RtlRbInsertNodeEx @ 0x1400E84C0
 * Callers:
 *     KiSetClockInterval @ 0x140005980 (KiSetClockInterval.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140063D78 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140064B24 (KiAbEntryUpdateWaiterTreePosition.c)
 *     PfSnGetFileInformation @ 0x14008E100 (PfSnGetFileInformation.c)
 *     MiRescanPageFileBitmapPortion @ 0x14009C878 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14009D014 (MiInvalidatePageFileBitmapsCache.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400A9414 (KiInsertSchedulingGroupQueue.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1400AC19C (RtlpHpVsFreeChunkInsert.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400CC6B4 (IoStartDiskIoAttributionForContext.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400DA49C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400E7BC0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiInitializePagefileBitmapsCache @ 0x14017DFE4 (MiInitializePagefileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1402849FC (PspJobIoRateVolumeEntryInsert.c)
 *     RtlpHpVaMgrFree @ 0x140296EB4 (RtlpHpVaMgrFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140297EF0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpLargeAlloc @ 0x14029E2A0 (RtlpHpLargeAlloc.c)
 *     VmpFaultEntryInsert @ 0x1402ABC38 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x1402AC110 (VmpInsertMemoryRange.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140496F3C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x140591004 (EtwpSetProviderTraitsCommon.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x1408C3688 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // r14
  PRTL_BALANCED_NODE v5; // r11
  unsigned __int8 v7; // si
  $7D93978C745EB1C2D28075BAF55422B4 v8; // cl
  char v9; // r9
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE *v11; // rcx
  unsigned __int64 v12; // rax
  _RTL_BALANCED_NODE *Min; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v14; // bl
  unsigned __int64 v15; // r8
  char v16; // r9
  unsigned __int64 v17; // rcx
  _BOOL8 v18; // rdi
  unsigned __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // r9d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  _RTL_BALANCED_NODE **v27; // rsi
  unsigned __int64 v28; // rcx
  PRTL_BALANCED_NODE v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 Root; // r11
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  int v39; // r9d
  _RTL_BALANCED_NODE **v40; // rsi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  _RTL_BALANCED_NODE *v52; // rax

  v4 = 0LL;
  v5 = Node;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  v7 = Right;
  v8 = Tree->0;
  v9 = *(_BYTE *)&v8 & 1;
  if ( !Parent )
  {
    v10 = (unsigned __int64)Tree ^ (unsigned __int64)v5;
    if ( v9 )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)v10;
      v8 = Tree->0;
    }
    else
    {
      Tree->Root = v5;
    }
    if ( (*(_BYTE *)&v8 & 1) != 0 )
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v10;
      LOBYTE(v10) = v10 | 1;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)v10;
    }
    else
    {
      Tree->Min = v5;
    }
    v5->ParentValue = 0LL;
    return v10;
  }
  v11 = v5;
  if ( v9 )
    v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v5);
  Parent->Children[Right] = v11;
  v12 = (unsigned __int64)Parent;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v12 = (unsigned __int64)Parent ^ (unsigned __int64)v5;
  v10 = v12 | 1;
  v5->ParentValue = v10;
  if ( !Right )
  {
    Min = Tree->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
      v10 = Min == (_RTL_BALANCED_NODE *)1 ? 0LL : (unsigned __int64)Min ^ ((unsigned __int64)Tree | 1);
    else
      v10 = (unsigned __int64)Tree->Min;
    if ( Parent == (PRTL_BALANCED_NODE)v10 )
    {
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)Tree);
        LOBYTE(v10) = (unsigned __int8)v5 ^ (unsigned __int8)Tree | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)v10;
      }
      else
      {
        Tree->Min = v5;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
  {
    v14 = Tree->0;
    while ( 1 )
    {
      v15 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v16 = *(_BYTE *)&v14 & 1;
      if ( (*(_BYTE *)&v14 & 1) != 0 && v15 )
        v15 ^= (unsigned __int64)Parent;
      v17 = *(_QWORD *)v15;
      if ( v16 && v17 )
        v17 ^= v15;
      v10 = v17 != (_QWORD)Parent;
      v18 = v17 == (_QWORD)Parent;
      v19 = v10;
      v20 = *(_QWORD *)(v15 + 8 * v18);
      if ( v16 )
      {
        if ( !v20 )
          break;
        v20 ^= v15;
      }
      if ( !v20 || (*(_BYTE *)(v20 + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->0 &= ~1u;
      v5 = (PRTL_BALANCED_NODE)v15;
      *(_BYTE *)(v20 + 16) &= ~1u;
      v21 = *(_QWORD *)(v15 + 16);
      Parent = (PRTL_BALANCED_NODE)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !Parent )
          return v10;
        Parent = (PRTL_BALANCED_NODE)(v15 ^ (unsigned __int64)Parent);
      }
      if ( Parent )
      {
        *(_BYTE *)(v15 + 16) = v21 | 1;
        v14 = Tree->0;
        v10 = (unsigned __int64)Parent->Children[0];
        if ( (*(_BYTE *)&v14 & 1) != 0 && v10 )
          v10 ^= (unsigned __int64)Parent;
        v7 = v15 != v10;
        if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
          continue;
      }
      return v10;
    }
    if ( v7 == (_DWORD)v10 )
    {
LABEL_84:
      Root = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      v37 = (unsigned int)v19 ^ 1;
      v38 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v39 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v38 )
        v38 ^= (unsigned __int64)Parent;
      if ( v38 != v15 )
        __fastfail(0x1Du);
      v40 = (_RTL_BALANCED_NODE **)(v15 + 8 * ((unsigned int)v37 ^ 1LL));
      v41 = (unsigned __int64)*v40;
      if ( ((__int64)Tree->Min & 1) != 0 && v41 )
        v41 ^= v15;
      if ( (PRTL_BALANCED_NODE)v41 != Parent )
        __fastfail(0x1Du);
      v42 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_103;
        v42 ^= v15;
      }
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 8);
        if ( ((__int64)Tree->Min & 1) != 0 && v43 )
          v43 ^= v42;
        if ( v43 == v15 )
        {
          v44 = (unsigned __int64)Parent ^ v42;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v44 = (unsigned __int64)Parent;
          *(_QWORD *)(v42 + 8) = v44;
        }
        else
        {
          v45 = *(_QWORD *)v42;
          if ( ((__int64)Tree->Min & 1) != 0 && v45 )
            v45 ^= v42;
          if ( v45 != v15 )
            __fastfail(0x1Du);
          v46 = (unsigned __int64)Parent ^ v42;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v46 = (unsigned __int64)Parent;
          *(_QWORD *)v42 = v46;
        }
LABEL_121:
        if ( v39 && v42 )
          v42 ^= (unsigned __int64)Parent;
        Parent->ParentValue = v42 | *(_DWORD *)&Parent->0 & 3;
        v47 = (unsigned __int64)Parent->Children[v37];
        if ( v39 )
        {
          if ( !v47 )
          {
LABEL_136:
            if ( v39 && v47 )
              v47 ^= v15;
            *v40 = (_RTL_BALANCED_NODE *)v47;
            v51 = (unsigned __int64)Parent ^ v15;
            v52 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v15);
            if ( !v39 )
            {
              v52 = (_RTL_BALANCED_NODE *)v15;
              v51 = (unsigned __int64)Parent;
            }
            Parent->Children[v37] = v52;
            v10 = *(_DWORD *)(v15 + 16) & 3;
            *(_QWORD *)(v15 + 16) = v10 | v51;
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            {
              LOBYTE(v10) = (unsigned __int8)Tree ^ Root;
              if ( Root )
                v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ Root);
            }
            else
            {
              v4 = (_RTL_BALANCED_NODE *)Root;
            }
            Tree->Root = v4;
            *(_BYTE *)(v15 + 16) |= 1u;
            *(_BYTE *)&Parent->0 &= ~1u;
            return v10;
          }
          v47 ^= (unsigned __int64)Parent;
        }
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 16);
          v49 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v39 && v49 )
            v49 ^= v47;
          if ( (PRTL_BALANCED_NODE)v49 != Parent )
            __fastfail(0x1Du);
          v50 = v47 ^ v15;
          if ( !v39 )
            v50 = v15;
          *(_QWORD *)(v47 + 16) = v48 & 3 | v50;
        }
        goto LABEL_136;
      }
LABEL_103:
      if ( Root != v15 )
        __fastfail(0x1Du);
      Root = (unsigned __int64)Parent;
      goto LABEL_121;
    }
    v22 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v23 = *(_BYTE *)&v14 & 1;
    if ( (*(_BYTE *)&v14 & 1) != 0 && v22 )
      v22 ^= (unsigned __int64)v5;
    if ( (PRTL_BALANCED_NODE)v22 != Parent )
      __fastfail(0x1Du);
    v24 = (unsigned __int64)Parent->Children[v18];
    if ( (*(_BYTE *)&v14 & 1) != 0 && v24 )
      v24 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v24 != v5 )
      __fastfail(0x1Du);
    v25 = *(_QWORD *)(v15 + 8 * v19);
    if ( (*(_BYTE *)&v14 & 1) != 0 && v25 )
      v25 ^= v15;
    if ( (PRTL_BALANCED_NODE)v25 != Parent )
      goto LABEL_87;
    v26 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v14 & 1) != 0 && v26 )
      v26 ^= (unsigned __int64)Parent;
    if ( v26 != v15 )
LABEL_87:
      __fastfail(0x1Du);
    v27 = &v5->Children[v19];
    v28 = v15 ^ (unsigned __int64)v5;
    v29 = (PRTL_BALANCED_NODE)(v15 ^ (unsigned __int64)v5);
    if ( (*(_BYTE *)&v14 & 1) == 0 )
    {
      v29 = v5;
      v28 = v15;
    }
    *(_QWORD *)(v15 + 8 * v19) = v29;
    v5->ParentValue = *(_DWORD *)&v5->0 & 3 | v28;
    v30 = (unsigned __int64)*v27;
    if ( (*(_BYTE *)&v14 & 1) != 0 )
    {
      if ( !v30 )
      {
LABEL_78:
        if ( v23 && v30 )
          v30 ^= (unsigned __int64)Parent;
        Parent->Children[v19 ^ 1] = (_RTL_BALANCED_NODE *)v30;
        v34 = (unsigned __int64)Parent ^ (unsigned __int64)v5;
        v35 = (unsigned __int64)Parent ^ (unsigned __int64)v5;
        if ( !v23 )
        {
          v35 = (unsigned __int64)Parent;
          v34 = (unsigned __int64)v5;
        }
        *v27 = (_RTL_BALANCED_NODE *)v35;
        Parent->ParentValue = *(_DWORD *)&Parent->0 & 3 | v34;
        Parent = v5;
        goto LABEL_84;
      }
      v30 ^= (unsigned __int64)v5;
    }
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 16);
      v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v23 && v32 )
        v32 ^= v30;
      if ( (PRTL_BALANCED_NODE)v32 != v5 )
        __fastfail(0x1Du);
      v33 = v30 ^ (unsigned __int64)Parent;
      if ( !v23 )
        v33 = (unsigned __int64)Parent;
      *(_QWORD *)(v30 + 16) = v31 & 3 | v33;
    }
    goto LABEL_78;
  }
  return v10;
}
