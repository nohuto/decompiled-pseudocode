/*
 * XREFs of CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14044BDE0 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpRemoveSubKeyFromList @ 0x140473308 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x140473EEC (CmpAddSubKeyToList.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpCopyCell @ 0x1404767FC (CmpCopyCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpMarkAllChildrenDirty @ 0x14069B498 (CmpMarkAllChildrenDirty.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14069EC58 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14069F310 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareRenameKeyUoW(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  ULONG_PTR v4; // r14
  unsigned int *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // rax
  ULONG_PTR v10; // r12
  unsigned int v11; // r15d
  __int64 v12; // r12
  unsigned int *v13; // rbx
  unsigned int Cell; // eax
  _WORD *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  _DWORD v20[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-18h]
  unsigned int v23; // [rsp+A0h] [rbp+48h]
  unsigned int *v24; // [rsp+A8h] [rbp+50h] BYREF
  ULONG_PTR v25; // [rsp+B0h] [rbp+58h]
  int v26; // [rsp+B8h] [rbp+60h] BYREF
  int v27; // [rsp+BCh] [rbp+64h]

  v20[1] = 0;
  v27 = 0;
  v20[0] = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 72);
  v26 = -1;
  v23 = v3;
  v4 = *(_QWORD *)(v2 + 24);
  v5 = *(unsigned int **)(*(_QWORD *)(a1 + 80) + 104LL);
  v24 = v5;
  if ( v5 )
  {
    ++*v5;
  }
  else
  {
    v6 = CmpLightWeightCreateModificationData(a1, &v24);
    v5 = v24;
    v7 = v6;
    if ( v6 < 0 )
      goto LABEL_28;
    v3 = v23;
  }
  if ( !CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 48)) )
  {
    v7 = -1073741670;
    goto LABEL_28;
  }
  v8 = *(_QWORD *)(a1 + 48);
  if ( CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 88)) )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *(_QWORD *)(a1 + 88);
    v25 = v10;
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(
            v4,
            *(unsigned int *)(*(_QWORD *)(v9 + 64) + 32LL),
            v20) )
    {
      v7 = -1073741670;
      goto LABEL_24;
    }
    if ( !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), 1)
      || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 1)
      || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL), 1) )
    {
      v7 = -1073741443;
LABEL_23:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v20);
LABEL_24:
      if ( v10 )
        CmpDereferenceKeyControlBlockWithLock(v10);
      goto LABEL_26;
    }
    v11 = CmpCopyCell(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), v4, v3);
    if ( v11 == -1 )
    {
      v7 = -1073741670;
      goto LABEL_23;
    }
    v12 = v3;
    v13 = &v5[v3];
    if ( v13[3] == -1 )
    {
      LODWORD(v24) = *(_DWORD *)(v4 + 196);
      Cell = HvAllocateCell(v4, 12, v23, (__int64)&v21, (__int64)&v26);
      v13[3] = Cell;
      if ( Cell == -1 )
        goto LABEL_19;
      v16 = v21;
      *v21 = (unsigned int)v24 < 5 ? 26220 : 26732;
      v16[1] = 0;
      v5[v12 + 1] = 0;
      (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v26);
    }
    if ( CmpAddSubKeyToList(v4, v13 + 3, v11) )
    {
      ++v5[v12 + 1];
      v17 = *(_QWORD *)(a1 + 88);
      v18 = (unsigned __int64)*(unsigned int *)(v17 + 32) >> 31;
      if ( CmpRemoveSubKeyFromList(v4, (int *)&v5[v18 + 3], *(_DWORD *)(v17 + 32)) )
      {
        --v5[v18 + 1];
        if ( CmpMarkAllChildrenDirty(v4, v11) )
        {
          v21 = 0LL;
          v22 = 0LL;
          CmpEnumerateAllHigherLayerKcbs(
            v8,
            (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpForceInvalidatePreCallback,
            (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
            (__int64)&v21,
            1,
            1);
          v7 = (unsigned int)v21;
          if ( (int)v21 >= 0 )
          {
            v21 = 0LL;
            v22 = 0LL;
            v10 = v25;
            CmpEnumerateAllHigherLayerKcbs(
              v25,
              (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpForceInvalidatePreCallback,
              (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
              (__int64)&v21,
              1,
              1);
            v7 = (unsigned int)v21;
            if ( (int)v21 >= 0 )
            {
              v19 = *(_QWORD *)(a1 + 48);
              v7 = 0;
              *(_QWORD *)(a1 + 104) = v5;
              v10 = 0LL;
              v5 = 0LL;
              v8 = 0LL;
              *(_DWORD *)(a1 + 96) = *(_DWORD *)(v19 + 32);
              *(_DWORD *)(v19 + 32) = v11;
              v11 = -1;
            }
            goto LABEL_21;
          }
LABEL_20:
          v10 = v25;
LABEL_21:
          if ( v11 != -1 )
            CmpFreeKeyByCell(v4, v11, 0);
          goto LABEL_23;
        }
      }
    }
LABEL_19:
    v7 = -1073741670;
    goto LABEL_20;
  }
  v7 = -1073741670;
LABEL_26:
  if ( v8 )
    CmpDereferenceKeyControlBlockWithLock(v8);
LABEL_28:
  if ( v5 )
    CmpLightWeightCleanupModifyKeyDataUoW(v4, v5);
  return v7;
}
