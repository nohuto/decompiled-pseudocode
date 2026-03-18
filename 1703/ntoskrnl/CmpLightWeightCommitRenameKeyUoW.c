/*
 * XREFs of CmpLightWeightCommitRenameKeyUoW @ 0x140674188
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUpdateParentForEachSon @ 0x140671124 (CmpUpdateParentForEachSon.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140673CA8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x140675820 (CmpLightWeightSwapParentSubKeyList.c)
 */

__int64 __fastcall CmpLightWeightCommitRenameKeyUoW(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int16 v8; // dx
  unsigned int *v9; // rbx
  volatile signed __int32 *v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+5Ch] [rbp+14h]

  v14 = 0;
  v16 = 0;
  v13 = -1;
  v4 = a1[6];
  v15 = -1;
  v5 = *(_QWORD *)(v4 + 24);
  CmpUpdateParentForEachSon(v5, *(unsigned int *)(v4 + 32), 0);
  HvFreeCell(v5, *(unsigned int *)(a1[11] + 32));
  CmpFlushNotifiesOnKeyBodyList(a1[11], 8LL, 1);
  CmpMarkKeyUnbacked(a1[11]);
  CmpDiscardKcb(a1[11]);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(a1[6] + 32), &v13);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 64) + 32LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
         v5,
         *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL),
         &v15);
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 64) + 160LL) = *a2;
  v8 = *(_WORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
    v8 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v7 + 52) < (unsigned int)v8 )
  {
    *(_WORD *)(v7 + 52) = v8;
    *(_WORD *)(*(_QWORD *)(a1[6] + 64) + 168LL) = v8;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *, __int64))(v5 + 16))(v5, &v13, v7);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v15);
  v12[1] = a1[6];
  v12[0] = a1[11];
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshParent,
    v5,
    (__int64)v12,
    0);
  CmpSearchForOpenSubKeys(a1[6], 3LL, 0LL);
  v9 = (unsigned int *)a1[13];
  if ( *v9 == 1 )
    CmpLightWeightSwapParentSubKeyList(v5, *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL), a1[13]);
  CmpLightWeightCleanupModifyKeyDataUoW(v5, v9);
  v10 = (volatile signed __int32 *)a1[6];
  a1[13] = 0LL;
  CmpDereferenceKeyControlBlockWithLock(v10, 1u);
  return CmpDereferenceKeyControlBlockWithLock((volatile signed __int32 *)a1[11], 1u);
}
