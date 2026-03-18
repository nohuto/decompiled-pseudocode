/*
 * XREFs of CmpCommitRenameKeyUoW @ 0x14069E7D0
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkIndexDirty @ 0x140472FC8 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKey @ 0x140473274 (CmpRemoveSubKey.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUpdateParentForEachSon @ 0x14069BC20 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmpCommitRenameKeyUoW(__int64 a1, __int64 *a2)
{
  ULONG_PTR v3; // r12
  unsigned int v4; // r13d
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rdi
  unsigned int v7; // ebx
  ULONG_PTR v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  const void *v11; // rbx
  unsigned int Cell; // eax
  _DWORD *v13; // r14
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 v19; // dx
  unsigned int v20; // eax
  __int64 v21; // rax
  ULONG_PTR v22; // [rsp+30h] [rbp-38h]
  void *v23; // [rsp+38h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-20h]
  __int64 v26; // [rsp+50h] [rbp-18h] BYREF
  __int64 v27; // [rsp+58h] [rbp-10h]
  int v28; // [rsp+B0h] [rbp+48h] BYREF
  int v29; // [rsp+B4h] [rbp+4Ch]
  __int64 *v30; // [rsp+B8h] [rbp+50h]
  int v31; // [rsp+C0h] [rbp+58h] BYREF
  int v32; // [rsp+C4h] [rbp+5Ch]
  int v33; // [rsp+C8h] [rbp+60h] BYREF
  int v34; // [rsp+CCh] [rbp+64h]

  v30 = a2;
  v32 = 0;
  v31 = -1;
  v33 = -1;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 72);
  v28 = -1;
  v5 = *(_QWORD *)(a1 + 48);
  v34 = 0;
  v29 = 0;
  v23 = 0LL;
  v6 = *(_QWORD *)(v5 + 24);
  if ( !CmpReferenceKeyControlBlock(v5) )
    return (unsigned int)-1073741670;
  v8 = *(_QWORD *)(a1 + 48);
  v22 = v8;
  if ( !CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 88))
    || (v3 = *(_QWORD *)(a1 + 88),
        (v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
                v6,
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
                &v33)) == 0) )
  {
    v7 = -1073741670;
LABEL_28:
    if ( v8 )
      CmpDereferenceKeyControlBlockWithLock(v8);
    if ( v3 )
      CmpDereferenceKeyControlBlockWithLock(v3);
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
LABEL_27:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v33);
    goto LABEL_28;
  }
  ++*(_QWORD *)(v8 + 296);
  ++*(_QWORD *)(v3 + 296);
  v24 = 0LL;
  v25 = 0LL;
  CmpEnumerateAllHigherLayerKcbs(
    v8,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpForceInvalidatePreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
    (__int64)&v24,
    1,
    1);
  v7 = v24;
  if ( (int)v24 < 0 )
    goto LABEL_27;
  v24 = 0LL;
  v25 = 0LL;
  CmpEnumerateAllHigherLayerKcbs(
    v3,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpForceInvalidatePreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
    (__int64)&v24,
    1,
    1);
  v7 = v24;
  if ( (int)v24 < 0 )
    goto LABEL_27;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
          v6,
          *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
          &v28);
  v24 = v10;
  v11 = (const void *)v10;
  if ( !v10 )
  {
    v7 = -1073741670;
    goto LABEL_27;
  }
  Cell = HvAllocateCell(v6, -4 - *(_DWORD *)(v10 - 4), v4, (__int64)&v23, (__int64)&v31);
  v13 = v23;
  v14 = Cell;
  if ( Cell == -1 )
  {
    v7 = -1073741443;
    goto LABEL_22;
  }
  memmove(v23, v11, -4 - *((_DWORD *)v11 - 1));
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v28);
  v15 = *(_QWORD *)(a1 + 48);
  v24 = 0LL;
  if ( !CmpAddSubKeyEx(v6, *(unsigned int *)(*(_QWORD *)(v15 + 64) + 32LL), v14, 0)
    || !CmpRemoveSubKey(
          v6,
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL)) )
  {
    v7 = -1073741670;
LABEL_24:
    if ( v13 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v31);
      CmpFreeKeyByCell(v6, v14, 0);
    }
    v8 = v22;
    goto LABEL_27;
  }
  if ( !CmpUpdateParentForEachSon(v6, v14, 1) )
  {
    v7 = -1073741670;
    CmpRemoveSubKey(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), v14);
    CmpAddSubKeyEx(
      v6,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
      0);
LABEL_22:
    if ( v24 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v28);
    goto LABEL_24;
  }
  HvFreeCell(v6, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL));
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 88), 8, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 88));
  CmpDiscardKcb(*(_QWORD *)(a1 + 88));
  v17 = *(_QWORD *)(a1 + 48);
  v18 = *v30;
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
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v31);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v33);
  v21 = *(_QWORD *)(a1 + 88);
  v27 = *(_QWORD *)(a1 + 48);
  v26 = v21;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v27 + 24),
    (__int64)&v26,
    1);
  CmpSearchForOpenSubKeys(*(_QWORD *)(a1 + 48), 3LL, 0LL);
  CmpDereferenceKeyControlBlockWithLock(v22);
  CmpDereferenceKeyControlBlockWithLock(v3);
  return 0LL;
}
