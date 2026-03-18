/*
 * XREFs of CmDeleteLayeredKey @ 0x1401E47C0
 * Callers:
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 *     CmpUnlockHashEntryByKcb @ 0x140472AB8 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140472B60 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x140472C1C (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyDirty @ 0x1404735A4 (CmpMarkKeyDirty.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140478770 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFindSubKeyByNumber @ 0x1404825F0 (CmpFindSubKeyByNumber.c)
 *     CmpCleanupKcbStack @ 0x1404834BC (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140483BC0 (CmpInitializeKcbStack.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpHashCompressedComponent @ 0x140562B74 (CmpHashCompressedComponent.c)
 *     CmpFreeKeyValues @ 0x1405A67A8 (CmpFreeKeyValues.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x14068F858 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x14068FAA4 (CmpIncrementKcbSequenceNumber.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140697BB8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140697E28 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140697F38 (CmpInitializeDiscardReplaceContext.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14069809C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14069A7EC (CmpGetSubKeyCountForKcbStack.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rdi
  char v5; // si
  __int64 v6; // r15
  char v7; // r12
  int started; // ebx
  int SubKeyCountForKcbStack; // eax
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // rsi
  unsigned int v20; // r14d
  __int64 v21; // rax
  int v22; // eax
  int v23; // ebx
  __int64 KcbInHashEntryByCellIndex; // rax
  unsigned int v25; // r14d
  ULONG_PTR v26; // rcx
  char v27; // al
  ULONG_PTR v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  _WORD v31[4]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v32; // [rsp+38h] [rbp-41h]
  _BYTE v33[32]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v34[32]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v35[80]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v36; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v37; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v38; // [rsp+F8h] [rbp+7Fh] BYREF

  CmpInitializeKcbStack(v33);
  CmpInitializeKcbStack(v34);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 64);
  v38 = 0xFFFFFFFFLL;
  v37 = 0xFFFFFFFFLL;
  CmpInitializeDiscardReplaceContext(v35);
  v7 = 0;
  if ( (*(_DWORD *)(v4 + 176) & 0x80000) != 0 )
  {
    started = -1073741535;
    goto LABEL_28;
  }
  started = CmpStartKcbStackForTopLayerKcb(v33, v4);
  if ( started >= 0 )
  {
    started = CmpStartKcbStackForTopLayerKcb(v34, v6);
    if ( started >= 0 )
    {
LABEL_23:
      CmpLockHashEntryExclusiveByKcb(v4);
      CmpLockKcbStackTopExclusiveRestShared(v34);
      CmpLockKcbStackExclusive(v33);
      while ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v33, &v36);
        v11 = 0LL;
        started = SubKeyCountForKcbStack;
        if ( SubKeyCountForKcbStack < 0 )
          goto LABEL_26;
        if ( v36 )
        {
          started = -1073741535;
          goto LABEL_26;
        }
        v12 = *(_QWORD *)(v4 + 184);
        if ( v12 )
        {
          v13 = (_QWORD *)(v12 + 32);
          v10 = (_QWORD *)*v13;
          if ( (_QWORD *)*v13 != v13 )
          {
            if ( !v5 )
              goto LABEL_22;
            if ( v10 != v13 )
            {
              v7 = 1;
              started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v4, v35, 0LL);
              if ( started < 0 )
                goto LABEL_26;
            }
          }
        }
        v14 = *(unsigned int *)(v4 + 32);
        if ( (_DWORD)v14 != -1 )
        {
          if ( !v5 )
          {
LABEL_22:
            CmpUnlockKcbStack(v33);
            CmpUnlockKcbStack(v34);
            CmpUnlockHashEntryByKcb(v4);
            CmpUnlockRegistry();
            CmpLockRegistryExclusive();
            v5 = 1;
            goto LABEL_23;
          }
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v4 + 24) + 8LL))(
                  *(_QWORD *)(v4 + 24),
                  v14,
                  &v38);
          v20 = 0;
          if ( *(_DWORD *)(v19 + 24) + *(_DWORD *)(v19 + 20) )
          {
            while ( 1 )
            {
              started = CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v19, v20, &v36);
              if ( started < 0 )
                break;
              if ( !(unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v4 + 24), v36) )
                goto LABEL_37;
              if ( ++v20 >= *(_DWORD *)(v19 + 24) + *(_DWORD *)(v19 + 20) )
                goto LABEL_36;
            }
          }
          else
          {
LABEL_36:
            if ( (unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32)) )
            {
              while ( 1 )
              {
                CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v19, 0LL, &v36);
                v25 = v36;
                v26 = *(_QWORD *)(v4 + 24);
                if ( v36 == -1 )
                  break;
                v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v26 + 8))(v26, v36, &v37);
                if ( (*(_BYTE *)(v21 + 2) & 0x20) != 0 )
                {
                  v22 = CmpHashCompressedComponent(v21 + 76, *(unsigned __int16 *)(v21 + 72), v21);
                }
                else
                {
                  v32 = v21 + 76;
                  v31[0] = *(_WORD *)(v21 + 72);
                  v31[1] = v31[0];
                  v22 = CmpHashUnicodeComponent(v31);
                }
                v23 = v22;
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v37);
                KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(
                                              *(_QWORD *)(v4 + 24),
                                              (unsigned int)(v23 + 37 * *(_DWORD *)(v4 + 8)),
                                              v25);
                if ( KcbInHashEntryByCellIndex )
                  *(_DWORD *)(KcbInHashEntryByCellIndex + 32) = -1;
                CmpFreeKeyByCell(*(_QWORD *)(v4 + 24));
              }
              CmpFreeKeyValues(v26);
              v27 = *(_BYTE *)(v19 + 13);
              *(_WORD *)(v19 + 2) &= 0x20u;
              *(_BYTE *)(v19 + 55) = 0;
              *(_DWORD *)(v19 + 52) &= 0xFF00FFFF;
              *(_BYTE *)(v19 + 13) = v27 & 0xFC | 1;
              *(_QWORD *)(v19 + 4) = 0LL;
              *(_QWORD *)(v19 + 56) = 0LL;
              *(_DWORD *)(v19 + 64) = 0;
              *(_WORD *)(v19 + 52) = 0;
              CmpIncrementKcbSequenceNumber(v4);
              CmpRebuildKcbCacheFromNode(v28);
              CmpReportNotify(v4, *(_QWORD *)(v4 + 24), *(_DWORD *)(v4 + 32), 0, 1, a2);
              LOBYTE(v29) = 1;
              CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v4, v30, v29);
              CmpFlushNotifiesOnKeyBodyList(v4, 8LL);
              if ( v7 )
              {
                CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v4, v35);
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
LABEL_37:
              started = -1073741670;
            }
          }
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v38);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v6 + 32) != -1 )
          goto LABEL_18;
        CmpUnlockKcbStack(v33);
        CmpUnlockKcbStack(v34);
        LOBYTE(v15) = 1;
        v16 = CmpPromoteKey(v34, 0LL, v15);
        started = v16;
        if ( v16 == -1073741444 )
        {
          started = 0;
LABEL_27:
          CmpUnlockHashEntryByKcb(v4);
          goto LABEL_28;
        }
        if ( v16 < 0 )
          goto LABEL_27;
        CmpLockKcbStackExclusive(v33);
        if ( v5 )
        {
LABEL_18:
          started = CmpCreateTombstone(v10, v33, v11);
          if ( started >= 0 )
          {
            CmpReportNotify(v4, *(_QWORD *)(v4 + 24), *(_DWORD *)(v4 + 32), 0, 1, a2);
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v4, v17, 0LL);
            CmpFlushNotifiesOnKeyBodyList(v4, 8LL);
            if ( v7 )
            {
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v4, v35);
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
      CmpUnlockKcbStack(v33);
      CmpUnlockKcbStack(v34);
      goto LABEL_27;
    }
  }
LABEL_28:
  CmpCleanupDiscardReplaceContext(v35);
  CmpCleanupKcbStack(v33);
  CmpCleanupKcbStack(v34);
  return (unsigned int)started;
}
