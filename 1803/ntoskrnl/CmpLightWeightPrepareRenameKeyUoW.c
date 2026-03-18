/*
 * XREFs of CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14054F18C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddSubKeyToList @ 0x140513844 (CmpAddSubKeyToList.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpRemoveSubKeyFromList @ 0x140517418 (CmpRemoveSubKeyFromList.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     CmpCleanupRollbackPacket @ 0x14054E0A8 (CmpCleanupRollbackPacket.c)
 *     CmpCopyCell @ 0x14054F92C (CmpCopyCell.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpMarkAllChildrenDirty @ 0x140700084 (CmpMarkAllChildrenDirty.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140703F30 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x1407047C0 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareRenameKeyUoW(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r13
  ULONG_PTR v4; // rsi
  unsigned int *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // rcx
  __int64 v10; // rax
  ULONG_PTR v11; // r15
  unsigned int v12; // r15d
  unsigned int *v13; // r12
  unsigned int Cell; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  char v18; // al
  __int64 v19; // r13
  __int64 v20; // rcx
  _DWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+38h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-28h]
  _QWORD v25[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int *v26; // [rsp+B0h] [rbp+48h] BYREF
  ULONG_PTR v27; // [rsp+B8h] [rbp+50h]
  ULONG_PTR v28; // [rsp+C0h] [rbp+58h]
  int v29; // [rsp+C8h] [rbp+60h] BYREF
  int v30; // [rsp+CCh] [rbp+64h]

  v22[1] = 0;
  v30 = 0;
  v22[0] = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(int *)(a1 + 72);
  v29 = -1;
  v4 = *(_QWORD *)(v2 + 24);
  v25[0] = 0LL;
  v25[1] = 0LL;
  v5 = *(unsigned int **)(*(_QWORD *)(a1 + 80) + 104LL);
  v26 = v5;
  if ( v5 )
  {
    ++*v5;
  }
  else
  {
    v6 = CmpLightWeightCreateModificationData(a1, &v26);
    v5 = v26;
    v7 = v6;
    if ( v6 < 0 )
      goto LABEL_36;
  }
  if ( !CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 48)) )
  {
    v7 = -1073741670;
    goto LABEL_36;
  }
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 88);
  v27 = v8;
  if ( CmpReferenceKeyControlBlock(v9) )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(_QWORD *)(a1 + 88);
    v28 = v11;
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(
            v4,
            *(unsigned int *)(*(_QWORD *)(v10 + 64) + 32LL),
            v22) )
    {
      v7 = -1073741670;
      goto LABEL_32;
    }
    if ( !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), 1)
      || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 1)
      || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL), 1) )
    {
      v7 = -1073741443;
LABEL_31:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v22);
LABEL_32:
      if ( v11 )
        CmpDereferenceKeyControlBlockWithLock(v11);
      goto LABEL_34;
    }
    v12 = CmpCopyCell(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), v4, v3);
    if ( v12 == -1 )
    {
      v7 = -1073741670;
LABEL_30:
      v11 = v28;
      goto LABEL_31;
    }
    v13 = &v5[v3];
    if ( v13[3] == -1 )
    {
      LODWORD(v26) = *(_DWORD *)(v4 + 212);
      Cell = HvAllocateCell(v4, 12, (unsigned int)v3, (__int64)&v23, (__int64)&v29);
      v13[3] = Cell;
      if ( Cell == -1 )
        goto LABEL_19;
      v15 = v23;
      *(_WORD *)v23 = (unsigned int)v26 < 5 ? 26220 : 26732;
      *(_WORD *)(v15 + 2) = 0;
      v5[v3 + 1] = 0;
      (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v29);
    }
    if ( CmpAddSubKeyToList(v4, v13 + 3, v12) )
    {
      ++v5[v3 + 1];
      v16 = *(_QWORD *)(a1 + 88);
      v17 = (unsigned __int64)*(unsigned int *)(v16 + 32) >> 31;
      if ( CmpRemoveSubKeyFromList(v4, &v5[v17 + 3], *(_DWORD *)(v16 + 32)) )
      {
        --v5[v17 + 1];
        v18 = CmpMarkAllChildrenDirty(v4, v12);
        v8 = v27;
        if ( v18 )
        {
          v23 = 1LL;
          v24 = v25;
          CmpEnumerateAllHigherLayerKcbs(
            v27,
            (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
            (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
            (__int64)&v23,
            1,
            1);
          v7 = HIDWORD(v23);
          if ( v23 >= 0 )
          {
            v23 = 1LL;
            v19 = v28;
            v24 = v25;
            CmpEnumerateAllHigherLayerKcbs(
              v28,
              (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
              (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
              (__int64)&v23,
              1,
              1);
            v7 = HIDWORD(v23);
            if ( v23 >= 0 )
            {
              HIDWORD(v26) = 8;
              LOBYTE(v26) = 1;
              CmpEnumerateAllHigherLayerKcbs(
                v8,
                (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
                (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpInvalidateAllHigherLayerKcbsPostCallback,
                (__int64)&v26,
                1,
                1);
              LOBYTE(v26) = 1;
              HIDWORD(v26) = 8;
              CmpEnumerateAllHigherLayerKcbs(
                v19,
                (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
                (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpInvalidateAllHigherLayerKcbsPostCallback,
                (__int64)&v26,
                1,
                1);
              v20 = *(_QWORD *)(a1 + 48);
              *(_QWORD *)(a1 + 104) = v5;
              v7 = 0;
              v5 = 0LL;
              v28 = 0LL;
              v8 = 0LL;
              *(_DWORD *)(a1 + 96) = *(_DWORD *)(v20 + 32);
              *(_DWORD *)(v20 + 32) = v12;
              v12 = -1;
            }
          }
        }
        else
        {
          v7 = -1073741670;
        }
        goto LABEL_28;
      }
    }
LABEL_19:
    v8 = v27;
    v7 = -1073741670;
LABEL_28:
    if ( v12 != -1 )
      CmpFreeKeyByCell(v4, v12, 0);
    goto LABEL_30;
  }
  v7 = -1073741670;
LABEL_34:
  if ( v8 )
    CmpDereferenceKeyControlBlockWithLock(v8);
LABEL_36:
  if ( v5 )
    CmpLightWeightCleanupModifyKeyDataUoW(v4, v5);
  CmpCleanupRollbackPacket((__int64)v25);
  return v7;
}
