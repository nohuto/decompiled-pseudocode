/*
 * XREFs of CmpCopyKeyPartial @ 0x1405DFB94
 * Callers:
 *     CmpReorganizeHive @ 0x140497D1C (CmpReorganizeHive.c)
 *     CmpCommitAddKeyUoW @ 0x1405DF9A8 (CmpCommitAddKeyUoW.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopySyncTree2 @ 0x1406FD2D8 (CmpCopySyncTree2.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140704968 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404A9B50 (CmpFindSecurityCellCacheIndex.c)
 *     CmpAddValueToListEx @ 0x140514E5C (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpCopyCell @ 0x14054F92C (CmpCopyCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405DFDF4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1405DFE24 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyValue @ 0x1406FDA54 (CmpCopyValue.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int16 a5,
        char a6,
        ULONG_PTR a7)
{
  unsigned int v7; // r12d
  __int64 v9; // rdi
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // r15
  __int16 v14; // bx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int16 v17; // ax
  int SecurityDescriptorNode; // ebx
  unsigned int v19; // r13d
  char v20; // bl
  __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned int *v24; // r15
  __int64 v25; // r15
  unsigned int BugCheckParameter3_4; // [rsp+34h] [rbp-3Ch]
  unsigned int v27; // [rsp+38h] [rbp-38h]
  int v28; // [rsp+3Ch] [rbp-34h]
  _DWORD v29[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v30[2]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v31[2]; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v32[2]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD v33[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v34; // [rsp+68h] [rbp-8h]
  int v35; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v36; // [rsp+B8h] [rbp+48h]
  unsigned int v37; // [rsp+C8h] [rbp+58h]

  v37 = a4;
  v36 = a2;
  v7 = a7;
  BugCheckParameter3_4 = -1;
  v34 = 0LL;
  v9 = 0LL;
  a6 = 0;
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
  if ( (_DWORD)a7 == 2 )
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
  v14 = a5;
  v28 = *(_DWORD *)(v12 + 44);
  v27 = *(_DWORD *)(v12 + 48);
  v35 = *(unsigned __int16 *)(v12 + 74);
  if ( (a5 & 2) == 0 )
  {
    v27 = -1;
    v35 = 0;
  }
  LODWORD(a7) = CmpCopyCell(a1, v36, a3, v7);
  if ( (_DWORD)a7 == -1 || v35 && (BugCheckParameter3_4 = CmpCopyCell(a1, v27, a3, v7), BugCheckParameter3_4 == -1) )
  {
    v20 = 0;
    goto LABEL_24;
  }
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, (unsigned int)a7, v32);
  v9 = v15;
  if ( !v15 )
    goto LABEL_40;
  v16 = v37;
  *(_DWORD *)(v15 + 48) = BugCheckParameter3_4;
  *(_WORD *)(v15 + 74) = v35;
  *(_DWORD *)(v15 + 44) = -1;
  *(_DWORD *)(v15 + 20) = 0;
  *(_DWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 28) = -1;
  *(_DWORD *)(v15 + 32) = -1;
  *(_DWORD *)(v15 + 16) = v16;
  *(_BYTE *)(v15 + 12) = 0;
  if ( (v14 & 0x100) != 0 )
    *(_BYTE *)(v15 + 13) &= 0xFCu;
  if ( (v14 & 0x80u) != 0 )
    *(_BYTE *)(v15 + 13) |= 0x80u;
  v17 = *(_WORD *)(v13 + 2) & 0x30;
  *(_WORD *)(v9 + 2) = v17;
  if ( (v14 & 0x20) != 0 )
  {
    v17 = *(_WORD *)(v13 + 2) & 0xFFBF;
    *(_WORD *)(v9 + 2) = v17;
  }
  if ( v16 == -1 )
    *(_WORD *)(v9 + 2) = v17 | 0xC;
  if ( (v14 & 0x10) != 0 )
    goto LABEL_20;
  CmpLockTwoSecurityCachesExclusiveShared(a3, a1);
  if ( !CmpFindSecurityCellCacheIndex(a1, v28, (unsigned int *)&v35) )
  {
    CmpUnlockTwoSecurityCaches(a3, a1);
    goto LABEL_40;
  }
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                             a3,
                             (unsigned int)a7,
                             v9,
                             (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)v35 + 8) + 32LL),
                             0,
                             (unsigned int *)(v9 + 44));
  CmpUnlockTwoSecurityCaches(a3, a1);
  if ( SecurityDescriptorNode < 0 )
  {
LABEL_40:
    v20 = a6;
    goto LABEL_24;
  }
  LOBYTE(v14) = a5;
LABEL_20:
  if ( (*(_BYTE *)(v13 + 2) & 0x40) != 0 )
    v19 = 0;
  else
    v19 = *(_DWORD *)(v13 + 36);
  *(_DWORD *)(v9 + 36) = 0;
  *(_DWORD *)(v9 + 40) = -1;
  if ( v19 && (v14 & 4) != 0 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v13 + 40), v33);
    v34 = v22;
    if ( v22 )
    {
      v23 = 0;
      v24 = (unsigned int *)v22;
      while ( 1 )
      {
        v35 = CmpCopyValue(a1, *v24, a3, v7);
        if ( v35 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, (unsigned int)v35, v29) )
        {
          v11 = *(_DWORD *)(v9 + 40);
          goto LABEL_40;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v29);
        if ( (int)CmpAddValueToListEx(a3, v35, v23, v7, (unsigned int *)(v9 + 36), v19) < 0 )
          break;
        ++v23;
        ++v24;
        if ( v23 >= v19 )
          goto LABEL_23;
      }
      v11 = *(_DWORD *)(v9 + 40);
      if ( v11 != -1 )
      {
        v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v11, v30);
        if ( v25 )
        {
          while ( v23 )
            HvFreeCell(a3, *(unsigned int *)(v25 + 4LL * --v23));
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v30);
        }
      }
    }
    else
    {
      v11 = -1;
    }
    goto LABEL_40;
  }
LABEL_23:
  v11 = -1;
  v20 = 1;
LABEL_24:
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v31);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v32);
  if ( v34 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v33);
  if ( v20 )
    return (unsigned int)a7;
  if ( v11 != -1 )
    HvFreeCell(a3, v11);
  if ( BugCheckParameter3_4 != -1 )
    HvFreeCell(a3, BugCheckParameter3_4);
  if ( (_DWORD)a7 != -1 )
    HvFreeCell(a3, (unsigned int)a7);
  return 0xFFFFFFFFLL;
}
