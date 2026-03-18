/*
 * XREFs of CmpCommitDeleteKeyUoW @ 0x140673690
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpGetKeyNodeForKcb @ 0x1404CFE00 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1404CFF1C (CmpCleanupDiscardReplaceContext.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066D548 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066DB80 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
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
  int v13; // [rsp+70h] [rbp+20h] BYREF
  __int16 v14; // [rsp+74h] [rbp+24h]
  char v15; // [rsp+80h] [rbp+30h] BYREF
  char v16; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  HvpGetCellContextReinitialize((__int64)&v15);
  HvpGetCellContextReinitialize((__int64)&v16);
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = -1073741823;
  v12[3] = &v12[2];
  v12[2] = &v12[2];
  KeyNodeForKcb = CmpGetKeyNodeForKcb(v2, (__int64)&v15, 1);
  v5 = *(_DWORD *)(KeyNodeForKcb + 20) + *(_DWORD *)(KeyNodeForKcb + 24);
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v2 + 24) + 16LL))(*(_QWORD *)(v2 + 24), &v15);
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
      v6 = CmpFreeKeyByCell(*(_QWORD *)(v2 + 24), *(_DWORD *)(v2 + 32), 1);
      if ( v6 >= 0 )
      {
        v13 = 8;
        v14 = 257;
        CmpEnumerateAllHigherLayerKcbs(
          v2,
          (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))CmpFlushNotifiesPreCallback,
          (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpFlushNotifiesPostCallback,
          (__int64)&v13,
          1,
          1);
        CmpFlushNotifiesOnKeyBodyList(v2, 8LL, 1);
        CmpCleanUpSubKeyInfo(*(_QWORD *)(v2 + 64));
        v8 = CmpGetKeyNodeForKcb(*(_QWORD *)(v2 + 64), (__int64)&v16, 1);
        *(_WORD *)(*(_QWORD *)(v2 + 64) + 168LL) = *(_WORD *)(v8 + 52);
        v9 = *a2;
        *(_QWORD *)(v8 + 4) = *a2;
        *(_QWORD *)(*(_QWORD *)(v2 + 64) + 160LL) = v9;
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL) + 16LL))(
          *(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL),
          &v16);
        CmpMarkKeyUnbacked(v2);
        v10 = *(_QWORD *)(v2 + 184);
        if ( !v10 || *(_QWORD *)(v10 + 32) == v10 + 32 )
          CmpDiscardKcb(v2);
        else
          CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v2, (__int64)v12);
        v6 = 0;
      }
    }
  }
  CmpCleanupDiscardReplaceContext(v12);
  return (unsigned int)v6;
}
