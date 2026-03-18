/*
 * XREFs of CmpFreeKeyByCell @ 0x140475940
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 *     CmpCleanupLightWeightPrepare @ 0x14044BA6C (CmpCleanupLightWeightPrepare.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpCommitAddKeyUoW @ 0x1405A590C (CmpCommitAddKeyUoW.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1405A5D50 (CmpSyncSubKeysAfterDelete.c)
 *     CmpDeleteTree @ 0x1405A6A90 (CmpDeleteTree.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmMoveKey @ 0x14068C890 (CmMoveKey.c)
 *     CmpDuplicateKey @ 0x14068E640 (CmpDuplicateKey.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14069EE20 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14069F4B0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFreeSecurityDescriptor @ 0x1404731A0 (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveSubKey @ 0x140473274 (CmpRemoveSubKey.c)
 *     CmpMarkKeyDirty @ 0x1404735A4 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyBody @ 0x140473C6C (CmpFreeKeyBody.c)
 *     CmpFreeValue @ 0x140476A50 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3)
{
  ULONG_PTR v5; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int i; // ebx
  unsigned int v12; // ebx
  _DWORD v14[4]; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+74h] [rbp+44h]
  int v17; // [rsp+88h] [rbp+58h] BYREF
  int v18; // [rsp+8Ch] [rbp+5Ch]

  v16 = 0;
  v15 = -1;
  v17 = -1;
  v14[0] = -1;
  v5 = BugCheckParameter2 + 2952;
  v18 = 0;
  v14[1] = 0;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 2952, 0LL);
  if ( !CmpMarkKeyDirty(BugCheckParameter2, a2, a3) )
  {
    v12 = -1073741443;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v15);
  v8 = v7;
  if ( !v7 )
    goto LABEL_22;
  if ( a3 == 1 )
  {
    if ( !CmpRemoveSubKey(BugCheckParameter2, *(unsigned int *)(v7 + 16), a2) )
      goto LABEL_24;
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(v8 + 16),
           &v17);
    if ( !v9 )
      goto LABEL_24;
    if ( !(*(_DWORD *)(v9 + 20) + *(_DWORD *)(v9 + 24)) )
    {
      *(_WORD *)(v9 + 52) = 0;
      *(_DWORD *)(v9 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  }
  if ( (*(_BYTE *)(v8 + 2) & 0x42) != 0 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v8 + 36) )
  {
LABEL_15:
    if ( *(_DWORD *)(v8 + 44) != -1 )
      CmpFreeSecurityDescriptor(BugCheckParameter2, a2);
LABEL_17:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
    v8 = 0LL;
    if ( CmpFreeKeyBody(BugCheckParameter2, a2) )
    {
      v12 = 0;
      goto LABEL_19;
    }
LABEL_22:
    v12 = -1073741670;
    goto LABEL_21;
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v8 + 40),
          v14);
  if ( v10 )
  {
    for ( i = 0; i < *(_DWORD *)(v8 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v10 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v14);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v8 + 40));
    goto LABEL_15;
  }
LABEL_24:
  v12 = -1073741670;
LABEL_19:
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
LABEL_21:
  ExReleasePushLockEx(v5, 0LL);
  return v12;
}
