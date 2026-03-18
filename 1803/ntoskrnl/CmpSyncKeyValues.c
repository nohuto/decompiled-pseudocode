/*
 * XREFs of CmpSyncKeyValues @ 0x1406FEB90
 * Callers:
 *     CmpCopySyncTree2 @ 0x1406FD2D8 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x1406FE0DC (CmpMergeKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404A9B50 (CmpFindSecurityCellCacheIndex.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmpAddValueToListEx @ 0x140514E5C (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpFreeSecurityDescriptor @ 0x140517750 (CmpFreeSecurityDescriptor.c)
 *     CmpCopyCell @ 0x14054F92C (CmpCopyCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405DFDF4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1405DFE24 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyValue @ 0x1406FDA54 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x1406FDD28 (CmpFreeKeyValues.c)
 */

char __fastcall CmpSyncKeyValues(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  unsigned int v8; // r15d
  int v9; // r12d
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // di
  __int64 v20; // r8
  __int64 v21; // r9
  int *v22; // r12
  unsigned int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  bool v29; // zf
  unsigned int v30; // ecx
  __int64 v31; // rax
  _DWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r13d
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // r13d
  unsigned int *v39; // r12
  unsigned int v40; // r14d
  unsigned int v41; // r13d
  __int64 v42; // rsi
  unsigned int BugCheckParameter3; // [rsp+38h] [rbp-41h]
  unsigned int BugCheckParameter3a; // [rsp+38h] [rbp-41h]
  unsigned int BugCheckParameter3_4; // [rsp+3Ch] [rbp-3Dh]
  _DWORD v46[2]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v47[2]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v48[2]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v49; // [rsp+58h] [rbp-21h]
  _DWORD v50[2]; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v51[2]; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v52[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v53; // [rsp+78h] [rbp-1h]
  __int64 v54; // [rsp+80h] [rbp+7h]
  __int64 v55; // [rsp+88h] [rbp+Fh]
  int v56; // [rsp+D0h] [rbp+57h] BYREF

  v56 = a2;
  v51[1] = 0;
  v51[0] = -1;
  v8 = -1;
  v50[0] = -1;
  v9 = -1;
  BugCheckParameter3_4 = -1;
  v52[0] = -1;
  a7 = 0;
  v50[1] = 0;
  v52[1] = 0;
  CmpLockTwoSecurityCachesExclusiveShared(a4, a1);
  v12 = a6;
  if ( !CmpFreeKeyValues(a4, a5, a6) )
  {
    CmpUnlockTwoSecurityCaches(a4, a1, v13, v14);
    return 0;
  }
  v49 = a5 >> 31;
  if ( !*(_WORD *)(a3 + 74) || (v16 = *(unsigned int *)(a3 + 48), (_DWORD)v16 == -1) )
  {
LABEL_8:
    *(_DWORD *)(v12 + 48) = v9;
    if ( !CmpFindSecurityCellCacheIndex(a1, *(_DWORD *)(a3 + 44), (unsigned int *)&v56) )
    {
      CmpUnlockTwoSecurityCaches(a4, a1, v20, v21);
      v19 = 0;
      goto LABEL_15;
    }
    v22 = (int *)(v12 + 44);
    v23 = *(_DWORD *)(v12 + 44);
    v24 = a5;
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)v56 + 8);
    *(_DWORD *)(v12 + 44) = -1;
    if ( (int)CmpGetSecurityDescriptorNode(a4, v24, v12, (void *)(v25 + 32), 0, (unsigned int *)(v12 + 44)) < 0 )
    {
      *v22 = v23;
LABEL_12:
      v28 = a4;
LABEL_13:
      CmpUnlockTwoSecurityCaches(v28, a1, v26, v27);
LABEL_14:
      v19 = a7;
LABEL_15:
      if ( BugCheckParameter3_4 != -1 )
        HvFreeCell(a4, BugCheckParameter3_4);
      return v19;
    }
    v29 = (*(_BYTE *)(v12 + 2) & 4) == 0;
    v30 = *v22;
    v56 = *v22;
    *v22 = v23;
    if ( v29 || v30 == v23 )
    {
      v35 = v30;
    }
    else
    {
      v46[0] = -1;
      v47[0] = -1;
      v48[0] = -1;
      v46[1] = 0;
      v47[1] = 0;
      v48[1] = 0;
      v53 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v30, v46);
      v28 = a4;
      if ( !v53 )
        goto LABEL_13;
      v31 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v23, v47);
      v54 = v31;
      if ( !v31 )
      {
        v32 = v46;
LABEL_23:
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v32);
        goto LABEL_12;
      }
      BugCheckParameter3 = *(_DWORD *)(v31 + 8);
      v55 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, BugCheckParameter3, v48);
      if ( !v55 )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v46);
        v32 = v47;
        goto LABEL_23;
      }
      if ( !HvpMarkCellDirty(a4, v23, 0) || !HvpMarkCellDirty(a4, BugCheckParameter3, 0) )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v46);
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v47);
        v32 = v48;
        goto LABEL_23;
      }
      v33 = v53;
      *(_DWORD *)(v53 + 8) = BugCheckParameter3;
      v34 = v54;
      *(_DWORD *)(v33 + 4) = v23;
      v35 = v56;
      *(_DWORD *)(v34 + 8) = v56;
      *(_DWORD *)(v55 + 4) = v35;
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v46);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v47);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v48);
    }
    CmpFreeSecurityDescriptor(a4, a5);
    *v22 = v35;
    CmpUnlockTwoSecurityCaches(a4, a1, v36, v37);
    v38 = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(v12 + 40) = -1;
    *(_DWORD *)(v12 + 36) = 0;
    *(_DWORD *)(v12 + 60) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a3 + 64);
    BugCheckParameter3a = v38;
    if ( !v38 )
      return 1;
    v39 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(a3 + 40),
                            v51);
    if ( v39 )
    {
      v40 = 0;
      v41 = v49;
      while ( 1 )
      {
        v56 = CmpCopyValue(a1, *v39, a4, v41);
        if ( v56 == -1
          || !(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, (unsigned int)v56, v52) )
        {
          v8 = *(_DWORD *)(v12 + 40);
          goto LABEL_41;
        }
        if ( (int)CmpAddValueToListEx(a4, v56, v40, v41, (unsigned int *)(v12 + 36), 1) < 0 )
          break;
        ++v40;
        ++v39;
        if ( v40 >= BugCheckParameter3a )
        {
          a7 = 1;
          goto LABEL_41;
        }
      }
      v8 = *(_DWORD *)(v12 + 40);
      if ( v8 != -1 )
      {
        v42 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v8, v50);
        if ( v42 )
        {
          while ( v40 )
            HvFreeCell(a4, *(unsigned int *)(v42 + 4LL * --v40));
          (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v50);
        }
      }
LABEL_41:
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a1 + 16))(a1, v51);
      v19 = a7;
      if ( a7 )
        return v19;
      if ( v8 != -1 )
        HvFreeCell(a4, v8);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  BugCheckParameter3_4 = CmpCopyCell(a1, v16, a4, a5 >> 31);
  if ( BugCheckParameter3_4 != -1 )
  {
    v9 = BugCheckParameter3_4;
    *(_WORD *)(v12 + 74) = *(_WORD *)(a3 + 74);
    goto LABEL_8;
  }
  CmpUnlockTwoSecurityCaches(a4, a1, v17, v18);
  return 0;
}
