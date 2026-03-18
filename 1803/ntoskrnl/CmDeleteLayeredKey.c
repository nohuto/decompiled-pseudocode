/*
 * XREFs of CmDeleteLayeredKey @ 0x140222964
 * Callers:
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 *     CmpLockKcbStackExclusive @ 0x14049A938 (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpMarkKeyDirty @ 0x1404A0B4C (CmpMarkKeyDirty.c)
 *     CmpInitializeKcbStack @ 0x1404A5B64 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1404A64E8 (CmpCleanupKcbStack.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404A8AD0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpFindSubKeyByNumber @ 0x1404AD3B0 (CmpFindSubKeyByNumber.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpGetCellContextInitialize @ 0x1404E15B4 (HvpGetCellContextInitialize.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpUnlockHashEntryByKcb @ 0x14054DE30 (CmpUnlockHashEntryByKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14057DF08 (CmpCleanupDiscardReplaceContext.c)
 *     CmpHashCompressedComponent @ 0x1405E227C (CmpHashCompressedComponent.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1406F3618 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x1406F3774 (CmpIncrementKcbSequenceNumber.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FAB8C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406FAF60 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpInitializeDiscardReplaceContext @ 0x1406FB014 (CmpInitializeDiscardReplaceContext.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FB1DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFreeKeyValues @ 0x1406FDD28 (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1406FF3C8 (CmpGetSubKeyCountForKcbStack.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rdi
  char v5; // si
  __int64 v6; // r15
  char v7; // r12
  int started; // ebx
  int SubKeyCountForKcbStack; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // rsi
  unsigned int v19; // r14d
  unsigned int i; // r14d
  __int64 v21; // rax
  unsigned __int16 v22; // dx
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rdx
  ULONG_PTR v26; // rbx
  __int64 KcbInHashEntryByCellIndex; // rax
  char v28; // al
  ULONG_PTR v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  _WORD v32[4]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v33; // [rsp+28h] [rbp-41h]
  _BYTE v34[32]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v35[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v36[80]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp+67h] BYREF
  char v38; // [rsp+E0h] [rbp+77h] BYREF
  char v39; // [rsp+E8h] [rbp+7Fh] BYREF

  CmpInitializeKcbStack(v34);
  CmpInitializeKcbStack(v35);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 64);
  HvpGetCellContextInitialize(&v39);
  HvpGetCellContextInitialize(&v38);
  CmpInitializeDiscardReplaceContext(v36);
  v7 = 0;
  if ( (*(_DWORD *)(v4 + 176) & 0x80000) != 0 )
  {
    started = -1073741535;
    goto LABEL_28;
  }
  started = CmpStartKcbStackForTopLayerKcb(v34, v4);
  if ( started >= 0 )
  {
    started = CmpStartKcbStackForTopLayerKcb(v35, v6);
    if ( started >= 0 )
    {
LABEL_23:
      CmpLockHashEntryExclusiveByKcb(v4);
      CmpLockKcbStackTopExclusiveRestShared(v35);
      CmpLockKcbStackExclusive(v34);
      while ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v34, &v37);
        v10 = 0LL;
        started = SubKeyCountForKcbStack;
        if ( SubKeyCountForKcbStack < 0 )
          goto LABEL_26;
        if ( v37 )
        {
          started = -1073741535;
          goto LABEL_26;
        }
        v11 = *(_QWORD *)(v4 + 184);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 32);
          if ( v12 != v11 + 32 && !v5 )
            goto LABEL_22;
          if ( v12 != v11 + 32 )
          {
            v7 = 1;
            started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
            if ( started < 0 )
              goto LABEL_26;
          }
        }
        v13 = *(unsigned int *)(v4 + 32);
        if ( (_DWORD)v13 != -1 )
        {
          if ( !v5 )
          {
LABEL_22:
            CmpUnlockKcbStack(v34);
            CmpUnlockKcbStack(v35);
            CmpUnlockHashEntryByKcb(v4);
            CmpUnlockRegistry();
            CmpLockRegistryExclusive();
            v5 = 1;
            goto LABEL_23;
          }
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v4 + 24) + 8LL))(
                  *(_QWORD *)(v4 + 24),
                  v13,
                  &v39);
          v19 = 0;
          if ( *(_DWORD *)(v18 + 20) + *(_DWORD *)(v18 + 24) )
          {
            while ( 1 )
            {
              started = CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v18, v19, &v37);
              if ( started < 0 )
                break;
              if ( !(unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v4 + 24), v37) )
                goto LABEL_40;
              if ( ++v19 >= *(_DWORD *)(v18 + 20) + *(_DWORD *)(v18 + 24) )
                goto LABEL_36;
            }
          }
          else
          {
LABEL_36:
            if ( (unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32)) )
            {
              CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v18, 0LL, &v37);
              for ( i = v37; v37 != -1; i = v37 )
              {
                v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v4 + 24) + 8LL))(
                        *(_QWORD *)(v4 + 24),
                        i,
                        &v38);
                v22 = *(_WORD *)(v21 + 72);
                if ( (*(_BYTE *)(v21 + 2) & 0x20) != 0 )
                {
                  v23 = CmpHashCompressedComponent(v21 + 76, v22);
                }
                else
                {
                  v33 = v21 + 76;
                  v32[0] = v22;
                  v32[1] = v22;
                  v23 = CmpHashUnicodeComponent(v32);
                }
                v24 = v23;
                (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v38);
                v25 = (unsigned int)(v24 + 37 * *(_DWORD *)(v4 + 8));
                v26 = *(_QWORD *)(v4 + 24);
                KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v26, v25, i);
                if ( KcbInHashEntryByCellIndex )
                {
                  *(_DWORD *)(KcbInHashEntryByCellIndex + 32) = -1;
                  v26 = *(_QWORD *)(v4 + 24);
                }
                CmpFreeKeyByCell(v26, i);
                CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v18, 0LL, &v37);
              }
              CmpFreeKeyValues(*(_QWORD *)(v4 + 24));
              v28 = *(_BYTE *)(v18 + 13);
              *(_WORD *)(v18 + 2) &= 0x20u;
              *(_BYTE *)(v18 + 55) = 0;
              *(_DWORD *)(v18 + 52) &= 0xFF00FFFF;
              *(_BYTE *)(v18 + 13) = v28 & 0xFC | 1;
              *(_QWORD *)(v18 + 4) = 0LL;
              *(_QWORD *)(v18 + 56) = 0LL;
              *(_DWORD *)(v18 + 64) = 0;
              *(_WORD *)(v18 + 52) = 0;
              CmpIncrementKcbSequenceNumber(v4);
              CmpRebuildKcbCacheFromNode(v29);
              CmpReportNotifyForKcbStack(v35, 0LL, 1LL, a2);
              LOBYTE(v30) = 1;
              CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v4, v31, v30);
              CmpFlushNotifiesOnKeyBodyList(v4, 8LL);
              if ( v7 )
              {
                CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
              }
              else
              {
                CmpMarkKeyUnbacked(v4);
                CmpDiscardKcb(v4);
              }
              started = 0;
            }
            else
            {
LABEL_40:
              started = -1073741670;
            }
          }
          (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v39);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v6 + 32) != -1 )
          goto LABEL_18;
        CmpUnlockKcbStack(v34);
        CmpUnlockKcbStack(v35);
        LOBYTE(v14) = 1;
        v15 = CmpPromoteKey(v35, 0LL, v14);
        started = v15;
        if ( v15 == -1073741444 )
        {
          started = 0;
LABEL_27:
          CmpUnlockHashEntryByKcb(v4);
          goto LABEL_28;
        }
        if ( v15 < 0 )
          goto LABEL_27;
        CmpLockKcbStackExclusive(v34);
        if ( v5 )
        {
LABEL_18:
          started = CmpCreateTombstone(v11, v34, v10);
          if ( started >= 0 )
          {
            CmpReportNotifyForKcbStack(v35, 0LL, 1LL, a2);
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v4, v16, 0LL);
            CmpFlushNotifiesOnKeyBodyList(v4, 8LL);
            if ( v7 )
            {
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
            }
            else
            {
              CmpMarkKeyUnbacked(v4);
              CmpDiscardKcb(v4);
            }
            started = 0;
          }
          goto LABEL_26;
        }
      }
      started = 0;
LABEL_26:
      CmpUnlockKcbStack(v34);
      CmpUnlockKcbStack(v35);
      goto LABEL_27;
    }
  }
LABEL_28:
  CmpCleanupDiscardReplaceContext(v36);
  CmpCleanupKcbStack(v34);
  CmpCleanupKcbStack(v35);
  return (unsigned int)started;
}
