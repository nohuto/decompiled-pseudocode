/*
 * XREFs of CmpCommitRenameKeyUoW @ 0x140703A10
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpRemoveSubKey @ 0x140517384 (CmpRemoveSubKey.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     CmpSearchForOpenSubKeys @ 0x14054CAAC (CmpSearchForOpenSubKeys.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanupRollbackPacket @ 0x14054E0A8 (CmpCleanupRollbackPacket.c)
 *     CmpMarkIndexDirty @ 0x14057076C (CmpMarkIndexDirty.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpUpdateParentForEachSon @ 0x140700868 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmpCommitRenameKeyUoW(__int64 a1, __int64 *a2)
{
  ULONG_PTR v3; // r12
  unsigned int v4; // r14d
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rdi
  unsigned int v7; // ebx
  ULONG_PTR v8; // r13
  __int64 v9; // r15
  void *v11; // rax
  unsigned int Cell; // eax
  _DWORD *v13; // r14
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 v19; // dx
  unsigned int v20; // eax
  __int64 v21; // rax
  _DWORD v22[2]; // [rsp+30h] [rbp-48h] BYREF
  void *Src; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-38h]
  void *v25; // [rsp+48h] [rbp-30h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp-18h] BYREF
  __int64 v28; // [rsp+68h] [rbp-10h]
  unsigned int v29; // [rsp+C0h] [rbp+48h] BYREF
  int v30; // [rsp+C4h] [rbp+4Ch]
  __int64 *v31; // [rsp+C8h] [rbp+50h]
  int v32; // [rsp+D0h] [rbp+58h] BYREF
  int v33; // [rsp+D4h] [rbp+5Ch]
  int v34; // [rsp+D8h] [rbp+60h] BYREF
  int v35; // [rsp+DCh] [rbp+64h]

  v31 = a2;
  v25 = 0LL;
  v34 = -1;
  v3 = 0LL;
  v22[0] = -1;
  v4 = *(_DWORD *)(a1 + 72);
  v32 = -1;
  v5 = *(_QWORD *)(a1 + 48);
  v35 = 0;
  v22[1] = 0;
  v33 = 0;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v6 = *(_QWORD *)(v5 + 24);
  if ( !CmpReferenceKeyControlBlock(v5) )
  {
    v7 = -1073741670;
LABEL_13:
    CmpCleanupRollbackPacket((__int64)v26);
    return v7;
  }
  v8 = *(_QWORD *)(a1 + 48);
  if ( !CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 88))
    || (v3 = *(_QWORD *)(a1 + 88),
        (v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(
                v6,
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
                v22)) == 0) )
  {
    v7 = -1073741670;
LABEL_9:
    if ( v8 )
      CmpDereferenceKeyControlBlockWithLock(v8);
    if ( v3 )
      CmpDereferenceKeyControlBlockWithLock(v3);
    goto LABEL_13;
  }
  if ( !HvpMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), 1)
    || !HvpMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 1)
    || !HvpMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL), 1)
    || !CmpMarkIndexDirty(
          v6,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL)) )
  {
    v7 = -1073741443;
LABEL_8:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v22);
    goto LABEL_9;
  }
  ++*(_QWORD *)(v8 + 296);
  ++*(_QWORD *)(v3 + 296);
  Src = (void *)1;
  v24 = v26;
  CmpEnumerateAllHigherLayerKcbs(
    v8,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
    (__int64)&Src,
    1,
    1);
  v7 = HIDWORD(Src);
  if ( SHIDWORD(Src) < 0 )
    goto LABEL_8;
  Src = (void *)1;
  v24 = v26;
  CmpEnumerateAllHigherLayerKcbs(
    v3,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
    (__int64)&Src,
    1,
    1);
  v7 = HIDWORD(Src);
  if ( SHIDWORD(Src) < 0 )
    goto LABEL_8;
  v30 = 8;
  LOBYTE(v29) = 1;
  CmpEnumerateAllHigherLayerKcbs(
    v8,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpInvalidateAllHigherLayerKcbsPostCallback,
    (__int64)&v29,
    1,
    1);
  LOBYTE(v29) = 1;
  v30 = 8;
  CmpEnumerateAllHigherLayerKcbs(
    v3,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpInvalidateAllHigherLayerKcbsPostCallback,
    (__int64)&v29,
    1,
    1);
  v11 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
                  v6,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
                  &v32);
  Src = v11;
  if ( !v11 )
  {
    v7 = -1073741670;
    goto LABEL_8;
  }
  Cell = HvAllocateCell(v6, -4 - *((_DWORD *)v11 - 1), v4, (__int64)&v25, (__int64)&v34);
  v13 = v25;
  v14 = Cell;
  v29 = Cell;
  if ( Cell == -1 )
  {
    v7 = -1073741443;
    v15 = -1;
    goto LABEL_28;
  }
  memmove(v25, Src, -4 - *((_DWORD *)Src - 1));
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v32);
  v16 = *(_QWORD *)(a1 + 48);
  Src = 0LL;
  if ( !CmpAddSubKeyEx(v6, *(unsigned int *)(*(_QWORD *)(v16 + 64) + 32LL), v14, 0)
    || !CmpRemoveSubKey(
          v6,
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL)) )
  {
    v15 = v29;
    v7 = -1073741670;
LABEL_30:
    if ( v13 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v34);
      CmpFreeKeyByCell(v6, v15, 0);
    }
    goto LABEL_8;
  }
  if ( !CmpUpdateParentForEachSon(v6, v14, 1) )
  {
    v7 = -1073741670;
    v15 = v29;
    CmpRemoveSubKey(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), v29);
    CmpAddSubKeyEx(
      v6,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
      0);
LABEL_28:
    if ( Src )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v32);
    goto LABEL_30;
  }
  HvFreeCell(v6, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL));
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 88), 8LL, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 88));
  CmpDiscardKcb(*(_QWORD *)(a1 + 88));
  v17 = *(_QWORD *)(a1 + 48);
  v18 = *v31;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v17 + 32);
  *(_DWORD *)(v17 + 32) = v14;
  v13[4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL);
  ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 296LL);
  *(_QWORD *)(v9 + 4) = v18;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 160LL) = v18;
  v19 = *((_WORD *)v13 + 36);
  if ( (*((_BYTE *)v13 + 2) & 0x20) != 0 )
    v19 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v19 )
  {
    *(_WORD *)(v9 + 52) = v19;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 168LL) = v19;
  }
  v20 = *((unsigned __int16 *)v13 + 37);
  if ( *(_DWORD *)(v9 + 56) < v20 )
    *(_DWORD *)(v9 + 56) = v20;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v34);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v22);
  v21 = *(_QWORD *)(a1 + 88);
  v28 = *(_QWORD *)(a1 + 48);
  v27 = v21;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v28 + 24),
    (__int64)&v27,
    1);
  CmpSearchForOpenSubKeys(*(_QWORD *)(a1 + 48), 1, 0LL);
  CmpDereferenceKeyControlBlockWithLock(v8);
  CmpDereferenceKeyControlBlockWithLock(v3);
  CmpCleanupRollbackPacket((__int64)v26);
  return 0LL;
}
