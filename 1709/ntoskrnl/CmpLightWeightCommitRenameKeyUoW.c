/*
 * XREFs of CmpLightWeightCommitRenameKeyUoW @ 0x14069F008
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14044BDE0 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUpdateParentForEachSon @ 0x14069BC20 (CmpUpdateParentForEachSon.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14069EC58 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14069FDA8 (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitRenameKeyUoW(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int16 v8; // dx
  unsigned int *v9; // rbx
  ULONG_PTR v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]
  int v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+5Ch] [rbp+14h]

  v13 = 0;
  v15 = 0;
  v12 = -1;
  v4 = a1[6];
  v14 = -1;
  v5 = *(_QWORD *)(v4 + 24);
  CmpUpdateParentForEachSon(v5, *(unsigned int *)(v4 + 32), 0);
  HvFreeCell(v5, *(unsigned int *)(a1[11] + 32));
  CmpFlushNotifiesOnKeyBodyList(a1[11], 8, 1);
  CmpMarkKeyUnbacked(a1[11]);
  CmpDiscardKcb(a1[11]);
  ++*(_QWORD *)(a1[6] + 296);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(a1[6] + 32), &v12);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 64) + 32LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
         v5,
         *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL),
         &v14);
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 64) + 160LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1[6] + 64) + 296LL);
  v8 = *(_WORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
    v8 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v7 + 52) < (unsigned int)v8 )
  {
    *(_WORD *)(v7 + 52) = v8;
    *(_WORD *)(*(_QWORD *)(a1[6] + 64) + 168LL) = v8;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *, __int64))(v5 + 16))(v5, &v12, v7);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v14);
  v11[1] = a1[6];
  v11[0] = a1[11];
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshParent,
    v5,
    (__int64)v11,
    0);
  CmpSearchForOpenSubKeys(a1[6], 3LL, 0LL);
  v9 = (unsigned int *)a1[13];
  if ( *v9 == 1 )
    CmpLightWeightSwapParentSubKeyList(v5, *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL), a1[13]);
  CmpLightWeightCleanupModifyKeyDataUoW(v5, v9);
  v10 = a1[6];
  a1[13] = 0LL;
  CmpDereferenceKeyControlBlockWithLock(v10);
  CmpDereferenceKeyControlBlockWithLock(a1[11]);
}
