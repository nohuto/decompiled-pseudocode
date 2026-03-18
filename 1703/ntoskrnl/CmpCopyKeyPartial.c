/*
 * XREFs of CmpCopyKeyPartial @ 0x140571EDC
 * Callers:
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     CmpCommitAddKeyUoW @ 0x140571D00 (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpDuplicateKey @ 0x140664EA8 (CmpDuplicateKey.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140674910 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14048E4D4 (CmpFindSecurityCellCacheIndex.c)
 *     CmpAddValueToListEx @ 0x1404D3280 (CmpAddValueToListEx.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405721FC (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140572228 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyCell @ 0x14057226C (CmpCopyCell.c)
 *     CmpCopyValue @ 0x14058E1DC (CmpCopyValue.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v7; // r12d
  __int64 v9; // rdi
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // ebx
  unsigned int v15; // eax
  char v16; // al
  char v17; // al
  int SecurityDescriptorNode; // ebx
  unsigned int v19; // r13d
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned int *v22; // r15
  char v23; // bl
  __int64 v25; // r15
  unsigned int v26; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-3Ch]
  unsigned int v28; // [rsp+38h] [rbp-38h]
  _DWORD v29[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v30[2]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v31[2]; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v32[2]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD v33[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v34; // [rsp+68h] [rbp-8h]
  unsigned int v35; // [rsp+B8h] [rbp+48h]
  unsigned int v37; // [rsp+E0h] [rbp+70h]

  v35 = a2;
  v7 = a7;
  v27 = -1;
  v34 = 0LL;
  v9 = 0LL;
  v31[0] = -1;
  v31[1] = 0;
  v11 = -1;
  v32[0] = -1;
  v32[1] = 0;
  v33[0] = -1;
  v33[1] = 0;
  v30[0] = -1;
  v30[1] = 0;
  v29[0] = -1;
  v29[1] = 0;
  if ( a7 == 2 )
  {
    if ( a4 == -1 )
      v7 = 0;
    else
      v7 = a4 >> 31;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v31);
  v13 = v12;
  if ( !v12 )
    return 0xFFFFFFFFLL;
  v14 = *(unsigned __int16 *)(v12 + 74);
  v28 = *(_DWORD *)(v12 + 44);
  v26 = *(_DWORD *)(v12 + 48);
  if ( (a5 & 2) == 0 )
  {
    v26 = -1;
    v14 = 0;
  }
  v37 = CmpCopyCell(a1, v35, a3, v7);
  if ( v37 == -1 || v14 && (v27 = CmpCopyCell(a1, v26, a3, v7), v27 == -1) )
  {
    v23 = 0;
    goto LABEL_30;
  }
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v37, v32);
  if ( !v9 )
    goto LABEL_43;
  v15 = v27;
  *(_WORD *)(v9 + 74) = v14;
  *(_DWORD *)(v9 + 48) = v15;
  *(_DWORD *)(v9 + 44) = -1;
  *(_DWORD *)(v9 + 20) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 28) = -1;
  *(_DWORD *)(v9 + 32) = -1;
  *(_BYTE *)(v9 + 13) &= 0xFCu;
  v16 = *(_BYTE *)(v9 + 13);
  *(_DWORD *)(v9 + 16) = a4;
  *(_BYTE *)(v9 + 12) = 0;
  if ( a5 < 0 )
    v17 = v16 | 0x80;
  else
    v17 = v16 & 0x7F;
  *(_BYTE *)(v9 + 13) = v17;
  *(_WORD *)(v9 + 2) = *(_WORD *)(v13 + 2) & 0x30;
  if ( (a5 & 0x20) != 0 )
    *(_WORD *)(v9 + 2) = *(_WORD *)(v13 + 2) & 0xFFBF;
  if ( a4 == -1 )
    *(_WORD *)(v9 + 2) |= 0xCu;
  if ( (a5 & 0x10) == 0 )
  {
    CmpLockTwoSecurityCachesExclusiveShared(a3, a1);
    if ( CmpFindSecurityCellCacheIndex(a1, v28, &v26) )
    {
      SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                                 a3,
                                 v37,
                                 v9,
                                 (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * v26 + 8) + 32LL),
                                 0,
                                 (unsigned int *)(v9 + 44));
      CmpUnlockTwoSecurityCaches(a3, a1);
      if ( SecurityDescriptorNode >= 0 )
        goto LABEL_19;
    }
    else
    {
      CmpUnlockTwoSecurityCaches(a3, a1);
    }
LABEL_43:
    v23 = 0;
    goto LABEL_30;
  }
LABEL_19:
  if ( (*(_BYTE *)(v13 + 2) & 0x40) != 0 )
    v19 = 0;
  else
    v19 = *(_DWORD *)(v13 + 36);
  *(_DWORD *)(v9 + 36) = 0;
  *(_DWORD *)(v9 + 40) = -1;
  if ( v19 && (a5 & 4) != 0 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v13 + 40), v33);
    v34 = v20;
    if ( v20 )
    {
      v21 = 0;
      v22 = (unsigned int *)v20;
      while ( 1 )
      {
        v28 = CmpCopyValue(a1, *v22, a3, v7);
        if ( v28 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v28, v29) )
        {
          v11 = *(_DWORD *)(v9 + 40);
          goto LABEL_43;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v29);
        if ( (int)CmpAddValueToListEx(a3, v28, v21, v7, (unsigned int *)(v9 + 36), v19) < 0 )
          break;
        ++v21;
        ++v22;
        if ( v21 >= v19 )
          goto LABEL_29;
      }
      v11 = *(_DWORD *)(v9 + 40);
      if ( v11 != -1 )
      {
        v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v11, v30);
        if ( v25 )
        {
          while ( v21 )
            HvFreeCell(a3, *(unsigned int *)(v25 + 4LL * --v21));
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v30);
        }
      }
    }
    else
    {
      v11 = -1;
    }
    goto LABEL_43;
  }
LABEL_29:
  v11 = -1;
  v23 = 1;
LABEL_30:
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v31);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v32);
  if ( v34 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v33);
  if ( v23 )
    return v37;
  if ( v11 != -1 )
    HvFreeCell(a3, v11);
  if ( v27 != -1 )
    HvFreeCell(a3, v27);
  if ( v37 != -1 )
    HvFreeCell(a3, v37);
  return 0xFFFFFFFFLL;
}
