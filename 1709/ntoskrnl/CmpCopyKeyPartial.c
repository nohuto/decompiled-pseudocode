/*
 * XREFs of CmpCopyKeyPartial @ 0x1405A5AF4
 * Callers:
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     CmpCommitAddKeyUoW @ 0x1405A590C (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x1405A5E80 (CmpCopySyncTree2.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpDuplicateKey @ 0x14068E640 (CmpDuplicateKey.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14069F4B0 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpCopyCell @ 0x1404767FC (CmpCopyCell.c)
 *     CmpAddValueToListEx @ 0x140476AC8 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404813C0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpCopyValue @ 0x1405A651C (CmpCopyValue.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405A677C (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1405A6A4C (CmpLockTwoSecurityCachesExclusiveShared.c)
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
  unsigned int *v9; // rdi
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // r15
  __int16 v14; // bx
  __int64 v15; // rax
  unsigned int v16; // ecx
  int SecurityDescriptorNode; // ebx
  unsigned int v18; // r13d
  char v19; // bl
  __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned int *v23; // r15
  __int64 v24; // r15
  unsigned int BugCheckParameter3_4; // [rsp+34h] [rbp-3Ch]
  unsigned int v26; // [rsp+38h] [rbp-38h]
  int v27; // [rsp+3Ch] [rbp-34h]
  _DWORD v28[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v29[2]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v30[2]; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v31[2]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD v32[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v33; // [rsp+68h] [rbp-8h]
  int v34; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+48h]
  unsigned int v36; // [rsp+C8h] [rbp+58h]

  v36 = a4;
  v35 = a2;
  v7 = a7;
  BugCheckParameter3_4 = -1;
  v33 = 0LL;
  v9 = 0LL;
  a6 = 0;
  v30[0] = -1;
  v30[1] = 0;
  v11 = -1;
  v31[0] = -1;
  v31[1] = 0;
  v32[0] = -1;
  v32[1] = 0;
  v29[0] = -1;
  v29[1] = 0;
  v28[0] = -1;
  v28[1] = 0;
  if ( (_DWORD)a7 == 2 )
  {
    if ( a4 == -1 )
      v7 = 0;
    else
      v7 = a4 >> 31;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v30);
  v13 = v12;
  if ( !v12 )
    return 0xFFFFFFFFLL;
  v14 = a5;
  v27 = *(_DWORD *)(v12 + 44);
  v26 = *(_DWORD *)(v12 + 48);
  v34 = *(unsigned __int16 *)(v12 + 74);
  if ( (a5 & 2) == 0 )
  {
    v26 = -1;
    v34 = 0;
  }
  LODWORD(a7) = CmpCopyCell(a1, v35, a3, v7);
  if ( (_DWORD)a7 == -1 || v34 && (BugCheckParameter3_4 = CmpCopyCell(a1, v26, a3, v7), BugCheckParameter3_4 == -1) )
  {
    v19 = 0;
    goto LABEL_24;
  }
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, (unsigned int)a7, v31);
  v9 = (unsigned int *)v15;
  if ( !v15 )
    goto LABEL_40;
  v16 = v36;
  *(_DWORD *)(v15 + 48) = BugCheckParameter3_4;
  *(_WORD *)(v15 + 74) = v34;
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
  *(_WORD *)(v15 + 2) = *(_WORD *)(v13 + 2) & 0x30;
  if ( (v14 & 0x20) != 0 )
    *(_WORD *)(v15 + 2) = *(_WORD *)(v13 + 2) & 0xFFBF;
  if ( v16 == -1 )
    *(_WORD *)(v15 + 2) |= 0xCu;
  if ( (v14 & 0x10) != 0 )
    goto LABEL_20;
  CmpLockTwoSecurityCachesExclusiveShared(a3, a1);
  if ( !CmpFindSecurityCellCacheIndex(a1, v27, (unsigned int *)&v34) )
  {
    CmpUnlockTwoSecurityCaches(a3, a1);
    goto LABEL_40;
  }
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                             a3,
                             (unsigned int)a7,
                             (__int64)v9,
                             (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)v34 + 8) + 32LL),
                             0,
                             v9 + 11);
  CmpUnlockTwoSecurityCaches(a3, a1);
  if ( SecurityDescriptorNode < 0 )
  {
LABEL_40:
    v19 = a6;
    goto LABEL_24;
  }
  LOBYTE(v14) = a5;
LABEL_20:
  if ( (*(_BYTE *)(v13 + 2) & 0x40) != 0 )
    v18 = 0;
  else
    v18 = *(_DWORD *)(v13 + 36);
  v9[9] = 0;
  v9[10] = -1;
  if ( v18 && (v14 & 4) != 0 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v13 + 40), v32);
    v33 = v21;
    if ( v21 )
    {
      v22 = 0;
      v23 = (unsigned int *)v21;
      while ( 1 )
      {
        v34 = CmpCopyValue(a1, *v23, a3, v7);
        if ( v34 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, (unsigned int)v34, v28) )
        {
          v11 = v9[10];
          goto LABEL_40;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v28);
        if ( (int)CmpAddValueToListEx(a3, v34, v22, v7, v9 + 9, v18) < 0 )
          break;
        ++v22;
        ++v23;
        if ( v22 >= v18 )
          goto LABEL_23;
      }
      v11 = v9[10];
      if ( v11 != -1 )
      {
        v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v11, v29);
        if ( v24 )
        {
          while ( v22 )
            HvFreeCell(a3, *(unsigned int *)(v24 + 4LL * --v22));
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v29);
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
  v19 = 1;
LABEL_24:
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v31);
  if ( v33 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v32);
  if ( v19 )
    return (unsigned int)a7;
  if ( v11 != -1 )
    HvFreeCell(a3, v11);
  if ( BugCheckParameter3_4 != -1 )
    HvFreeCell(a3, BugCheckParameter3_4);
  if ( (_DWORD)a7 != -1 )
    HvFreeCell(a3, (unsigned int)a7);
  return 0xFFFFFFFFLL;
}
