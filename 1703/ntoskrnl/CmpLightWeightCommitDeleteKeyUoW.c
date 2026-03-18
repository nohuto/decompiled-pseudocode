/*
 * XREFs of CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1404CFF1C (CmpCleanupDiscardReplaceContext.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066D548 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140673CA8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x140675820 (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitDeleteKeyUoW(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // rsi
  __int64 v5; // rax
  ULONG_PTR v6; // rdi
  int v7; // r9d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  int v13; // [rsp+30h] [rbp-50h] BYREF
  __int16 v14; // [rsp+34h] [rbp-4Ch]
  _DWORD v15[2]; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  v15[0] = -1;
  v2 = *(unsigned int **)(a1 + 104);
  v15[1] = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + 24);
  if ( (int)CmpFreeKeyByCell(v6, *(_DWORD *)(v5 + 32), 0) < 0
    && stru_14033C3C0.LevelPlus1 > 5
    && TlgKeywordOn(&stru_14033C3C0, 0x200000000000uLL) )
  {
    v19 = 0;
    v17 = &v13;
    v13 = v7;
    v18 = 4;
    TlgWrite(&stru_14033C3C0, &unk_1402AB321, 0LL, 0LL, 3u, &pData);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL);
  if ( *v2 == 1 )
    CmpLightWeightSwapParentSubKeyList(v6, *(unsigned int *)(v8 + 32), v2);
  CmpCleanUpSubKeyInfo(v8);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, *(unsigned int *)(v8 + 32), v15);
  *(_WORD *)(v8 + 168) = *(_WORD *)(v9 + 52);
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(v8 + 160) = *a2;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v15);
  v10 = *(_QWORD *)(a1 + 48);
  v13 = 8;
  v14 = 257;
  CmpEnumerateAllHigherLayerKcbs(
    v10,
    (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))CmpFlushNotifiesPreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpFlushNotifiesPostCallback,
    (__int64)&v13,
    1,
    1);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 48));
  v11 = *(_QWORD *)(a1 + 112);
  v12 = *(_QWORD *)(a1 + 48);
  if ( v11 )
  {
    CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v12, v11);
    CmpCleanupDiscardReplaceContext(*(_QWORD **)(a1 + 112));
    MiDeleteSubsection(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    CmpDiscardKcb(v12);
  }
  CmpLightWeightCleanupModifyKeyDataUoW(v6, v2);
  *(_QWORD *)(a1 + 104) = 0LL;
}
