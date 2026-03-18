/*
 * XREFs of CmpFreeKeyByCell @ 0x1405150FC
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitAddKeyUoW @ 0x1405DF9A8 (CmpCommitAddKeyUoW.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1406FEFF4 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x140703748 (CmpDeleteTree.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140704968 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpMarkKeyDirty @ 0x1404A0B4C (CmpMarkKeyDirty.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpFreeKeyBody @ 0x1405172F0 (CmpFreeKeyBody.c)
 *     CmpRemoveSubKey @ 0x140517384 (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x140517750 (CmpFreeSecurityDescriptor.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned int v4; // r14d
  ULONG_PTR v5; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int i; // ebx
  unsigned int v13; // ebx
  _DWORD v15[4]; // [rsp+20h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+40h] BYREF
  int v17; // [rsp+74h] [rbp+44h]
  int v18; // [rsp+88h] [rbp+58h] BYREF
  int v19; // [rsp+8Ch] [rbp+5Ch]

  v17 = 0;
  v4 = BugCheckParameter3;
  v16 = -1;
  v18 = -1;
  v15[0] = -1;
  v5 = BugCheckParameter2 + 1776;
  v19 = 0;
  v15[1] = 0;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1776, 0LL);
  if ( !CmpMarkKeyDirty(BugCheckParameter2, v4, a3) )
  {
    v13 = -1073741443;
    goto LABEL_21;
  }
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v4, &v16);
  if ( !v9 )
    goto LABEL_22;
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter2) )
      goto LABEL_24;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v9 + 16),
            &v18);
    if ( !v10 )
      goto LABEL_24;
    if ( !(*(_DWORD *)(v10 + 20) + *(_DWORD *)(v10 + 24)) )
    {
      *(_WORD *)(v10 + 52) = 0;
      *(_DWORD *)(v10 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
  }
  if ( (*(_BYTE *)(v9 + 2) & 0x42) != 0 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v9 + 36) )
  {
LABEL_15:
    if ( *(_DWORD *)(v9 + 44) != -1 )
      CmpFreeSecurityDescriptor(BugCheckParameter2);
LABEL_17:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
    v9 = 0LL;
    if ( (unsigned __int8)CmpFreeKeyBody(BugCheckParameter2, v4) )
    {
      v13 = 0;
      goto LABEL_19;
    }
LABEL_22:
    v13 = -1073741670;
    goto LABEL_21;
  }
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v9 + 40),
          v15);
  if ( v11 )
  {
    for ( i = 0; i < *(_DWORD *)(v9 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v11 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v15);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v9 + 40));
    goto LABEL_15;
  }
LABEL_24:
  v13 = -1073741670;
LABEL_19:
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
LABEL_21:
  ExReleasePushLockEx(v5, 0LL, v7, v8);
  return v13;
}
