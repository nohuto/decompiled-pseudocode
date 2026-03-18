/*
 * XREFs of CmpCommitDeleteKeyUoW @ 0x140703850
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140516B80 (CmpCleanUpSubKeyInfo.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14057DF08 (CmpCleanupDiscardReplaceContext.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FAB8C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FB1DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 */

__int64 __fastcall CmpCommitDeleteKeyUoW(__int64 a1, __int64 *a2)
{
  ULONG_PTR v2; // rdi
  __int64 KeyNodeForKcb; // rax
  int v5; // ebx
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v12[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF
  __int16 v16; // [rsp+8Ch] [rbp+3Ch]

  v2 = *(_QWORD *)(a1 + 48);
  v13 = 0xFFFFFFFFLL;
  v14 = 0xFFFFFFFFLL;
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = -1073741823;
  v12[3] = &v12[2];
  v12[2] = &v12[2];
  KeyNodeForKcb = CmpGetKeyNodeForKcb(v2, (__int64)&v13, 1);
  v5 = *(_DWORD *)(KeyNodeForKcb + 20) + *(_DWORD *)(KeyNodeForKcb + 24);
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v2 + 24) + 16LL))(*(_QWORD *)(v2 + 24), &v13);
  if ( v5 )
  {
    v6 = -1073741535;
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 184);
    if ( !v7
      || *(_QWORD *)(v7 + 32) == v7 + 32
      || (v6 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v2, (__int64)v12), v6 >= 0) )
    {
      v6 = CmpFreeKeyByCell(*(_QWORD *)(v2 + 24), *(unsigned int *)(v2 + 32), 1);
      if ( v6 >= 0 )
      {
        v15 = 8;
        v16 = 257;
        CmpEnumerateAllHigherLayerKcbs(
          v2,
          (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpFlushNotifiesPreCallback,
          (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpFlushNotifiesPostCallback,
          (__int64)&v15,
          1,
          1);
        CmpFlushNotifiesOnKeyBodyList(v2, 8LL, 1);
        CmpCleanUpSubKeyInfo(*(_QWORD *)(v2 + 64), 1);
        v8 = CmpGetKeyNodeForKcb(*(_QWORD *)(v2 + 64), (__int64)&v14, 1);
        ++*(_QWORD *)(*(_QWORD *)(v2 + 64) + 296LL);
        *(_WORD *)(*(_QWORD *)(v2 + 64) + 168LL) = *(_WORD *)(v8 + 52);
        v9 = *a2;
        *(_QWORD *)(v8 + 4) = *a2;
        *(_QWORD *)(*(_QWORD *)(v2 + 64) + 160LL) = v9;
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL),
          &v14);
        CmpMarkKeyUnbacked(v2);
        v10 = *(_QWORD *)(v2 + 184);
        if ( !v10 || *(_QWORD *)(v10 + 32) == v10 + 32 )
          CmpDiscardKcb(v2);
        else
          CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v2, (int)v12);
        v6 = 0;
      }
    }
  }
  CmpCleanupDiscardReplaceContext(v12);
  return (unsigned int)v6;
}
