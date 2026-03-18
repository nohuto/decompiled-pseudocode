/*
 * XREFs of CmpCommitRenameKeyUoW @ 0x140673838
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkIndexDirty @ 0x1404D114C (CmpMarkIndexDirty.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpRemoveSubKey @ 0x1404D1E7C (CmpRemoveSubKey.c)
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpUpdateParentForEachSon @ 0x140671124 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmpCommitRenameKeyUoW(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v3; // r15
  unsigned int v4; // r14d
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rdi
  unsigned int v7; // ebx
  volatile signed __int32 *v8; // r12
  __int64 v9; // r13
  void *v11; // rax
  unsigned int Cell; // eax
  _DWORD *v13; // r14
  unsigned int v14; // ebx
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 v19; // dx
  unsigned int v20; // eax
  __int64 v21; // rax
  _DWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  void *Src; // [rsp+38h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-28h]
  void *v25; // [rsp+48h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-18h] BYREF
  __int64 v27; // [rsp+58h] [rbp-10h]
  unsigned int v28; // [rsp+B0h] [rbp+48h]
  int v30; // [rsp+C0h] [rbp+58h] BYREF
  int v31; // [rsp+C4h] [rbp+5Ch]
  int v32; // [rsp+C8h] [rbp+60h] BYREF
  int v33; // [rsp+CCh] [rbp+64h]

  v33 = 0;
  v32 = -1;
  v22[0] = -1;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 72);
  v30 = -1;
  v5 = *(_QWORD *)(a1 + 48);
  v22[1] = 0;
  v31 = 0;
  v25 = 0LL;
  v6 = *(_QWORD *)(v5 + 24);
  if ( !CmpReferenceKeyControlBlock(v5) )
    return (unsigned int)-1073741670;
  v8 = *(volatile signed __int32 **)(a1 + 48);
  if ( !CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 88))
    || (v3 = *(volatile signed __int32 **)(a1 + 88),
        (v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(
                v6,
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
                v22)) == 0) )
  {
    v7 = -1073741670;
LABEL_9:
    if ( v8 )
      CmpDereferenceKeyControlBlockWithLock(v8, 1u);
    if ( v3 )
      CmpDereferenceKeyControlBlockWithLock(v3, 1u);
    return v7;
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
  Src = 0LL;
  v24 = 0LL;
  CmpEnumerateAllHigherLayerKcbs(
    (__int64)v8,
    (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))CmpForceInvalidatePreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
    (__int64)&Src,
    1,
    1);
  v7 = (unsigned int)Src;
  if ( (int)Src < 0 )
    goto LABEL_8;
  Src = 0LL;
  v24 = 0LL;
  CmpEnumerateAllHigherLayerKcbs(
    (__int64)v3,
    (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))CmpForceInvalidatePreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
    (__int64)&Src,
    1,
    1);
  v7 = (unsigned int)Src;
  if ( (int)Src < 0 )
    goto LABEL_8;
  v11 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
                  v6,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
                  &v30);
  Src = v11;
  if ( !v11 )
  {
    v7 = -1073741670;
    goto LABEL_8;
  }
  Cell = HvAllocateCell(v6, -4 - *((_DWORD *)v11 - 1), v4, (__int64)&v25, (__int64)&v32);
  v13 = v25;
  v14 = Cell;
  v28 = Cell;
  if ( Cell == -1 )
  {
    v7 = -1073741443;
    v15 = -1;
    goto LABEL_28;
  }
  memmove(v25, Src, -4 - *((_DWORD *)Src - 1));
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v30);
  v16 = *(_QWORD *)(a1 + 48);
  Src = 0LL;
  if ( !CmpAddSubKeyEx(v6, *(unsigned int *)(*(_QWORD *)(v16 + 64) + 32LL), v14, 0)
    || !CmpRemoveSubKey(
          v6,
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL)) )
  {
    v15 = v28;
    v7 = -1073741670;
LABEL_30:
    if ( v13 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v32);
      CmpFreeKeyByCell(v6, v15, 0);
    }
    goto LABEL_8;
  }
  if ( !CmpUpdateParentForEachSon(v6, v14, 1) )
  {
    v7 = -1073741670;
    v15 = v28;
    CmpRemoveSubKey(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), v28);
    CmpAddSubKeyEx(
      v6,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
      0);
LABEL_28:
    if ( Src )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v30);
    goto LABEL_30;
  }
  HvFreeCell(v6, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL));
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 88), 8LL, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 88));
  CmpDiscardKcb(*(_QWORD *)(a1 + 88));
  v17 = *(_QWORD *)(a1 + 48);
  v18 = *a2;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v17 + 32);
  *(_DWORD *)(v17 + 32) = v14;
  v13[4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL);
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
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v32);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v22);
  v21 = *(_QWORD *)(a1 + 88);
  v27 = *(_QWORD *)(a1 + 48);
  v26 = v21;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v27 + 24),
    (__int64)&v26,
    1);
  CmpSearchForOpenSubKeys(*(_QWORD *)(a1 + 48), 3LL, 0LL);
  if ( v8 )
    CmpDereferenceKeyControlBlockWithLock(v8, 1u);
  if ( v3 )
    CmpDereferenceKeyControlBlockWithLock(v3, 1u);
  return 0LL;
}
