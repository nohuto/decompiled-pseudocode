/*
 * XREFs of CmpSyncKeyValues @ 0x14058DFA4
 * Callers:
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x14066F3AC (CmpMergeKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14048E4D4 (CmpFindSecurityCellCacheIndex.c)
 *     CmpFreeSecurityDescriptor @ 0x1404D3160 (CmpFreeSecurityDescriptor.c)
 *     CmpAddValueToListEx @ 0x1404D3280 (CmpAddValueToListEx.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405721FC (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140572228 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyCell @ 0x14057226C (CmpCopyCell.c)
 *     CmpCopyValue @ 0x14058E1DC (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x14058E438 (CmpFreeKeyValues.c)
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
  int *v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // r9
  bool v17; // zf
  unsigned int v18; // ecx
  int v19; // r13d
  unsigned int v20; // r13d
  unsigned int *v21; // r12
  unsigned int v22; // r14d
  unsigned int v23; // r13d
  char v24; // di
  __int64 v26; // rdx
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned int BugCheckParameter3; // [rsp+38h] [rbp-41h]
  unsigned int BugCheckParameter3a; // [rsp+38h] [rbp-41h]
  unsigned int BugCheckParameter3_4; // [rsp+3Ch] [rbp-3Dh]
  _DWORD v36[2]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v37[2]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v38[2]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-21h]
  _DWORD v40[2]; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v41[2]; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v42[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v43; // [rsp+78h] [rbp-1h]
  __int64 v44; // [rsp+80h] [rbp+7h]
  __int64 v45; // [rsp+88h] [rbp+Fh]
  int v46; // [rsp+D0h] [rbp+57h] BYREF

  v46 = a2;
  v41[1] = 0;
  v41[0] = -1;
  v8 = -1;
  v40[0] = -1;
  v9 = -1;
  BugCheckParameter3_4 = -1;
  v42[0] = -1;
  a7 = 0;
  v40[1] = 0;
  v42[1] = 0;
  CmpLockTwoSecurityCachesExclusiveShared(a4, a1);
  v12 = a6;
  if ( (unsigned __int8)CmpFreeKeyValues(a4) )
  {
    v39 = a5 >> 31;
    if ( *(_WORD *)(a3 + 74) )
    {
      v26 = *(unsigned int *)(a3 + 48);
      if ( (_DWORD)v26 != -1 )
      {
        BugCheckParameter3_4 = CmpCopyCell(a1, v26, a4, a5 >> 31);
        if ( BugCheckParameter3_4 == -1 )
        {
          CmpUnlockTwoSecurityCaches(a4, a1);
          return 0;
        }
        v9 = BugCheckParameter3_4;
        *(_WORD *)(v12 + 74) = *(_WORD *)(a3 + 74);
      }
    }
    *(_DWORD *)(v12 + 48) = v9;
    if ( !CmpFindSecurityCellCacheIndex(a1, *(_DWORD *)(a3 + 44), (unsigned int *)&v46) )
    {
      CmpUnlockTwoSecurityCaches(a4, a1);
      v24 = 0;
      goto LABEL_31;
    }
    v13 = (int *)(v12 + 44);
    v14 = *(_DWORD *)(v12 + 44);
    v15 = a5;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)v46 + 8);
    *(_DWORD *)(v12 + 44) = -1;
    if ( (int)CmpGetSecurityDescriptorNode(a4, v15, v12, (void *)(v16 + 32), 0, (unsigned int *)(v12 + 44)) < 0 )
    {
      *v13 = v14;
LABEL_28:
      v28 = a4;
LABEL_29:
      CmpUnlockTwoSecurityCaches(v28, a1);
LABEL_30:
      v24 = a7;
LABEL_31:
      if ( BugCheckParameter3_4 != -1 )
        HvFreeCell(a4, BugCheckParameter3_4);
      return v24;
    }
    v17 = (*(_BYTE *)(v12 + 2) & 4) == 0;
    v18 = *v13;
    v46 = *v13;
    *v13 = v14;
    if ( v17 || v18 == v14 )
    {
      v19 = v18;
    }
    else
    {
      v36[0] = -1;
      v37[0] = -1;
      v38[0] = -1;
      v36[1] = 0;
      v37[1] = 0;
      v38[1] = 0;
      v43 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v18, v36);
      v28 = a4;
      if ( !v43 )
        goto LABEL_29;
      v29 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v14, v37);
      v44 = v29;
      if ( !v29 )
      {
        v27 = v36;
LABEL_27:
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v27);
        goto LABEL_28;
      }
      BugCheckParameter3a = *(_DWORD *)(v29 + 8);
      v45 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, BugCheckParameter3a, v38);
      if ( !v45 )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v36);
        v27 = v37;
        goto LABEL_27;
      }
      if ( !HvpMarkCellDirty(a4, v14, 0) || !HvpMarkCellDirty(a4, BugCheckParameter3a, 0) )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v36);
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v37);
        v27 = v38;
        goto LABEL_27;
      }
      v30 = v43;
      *(_DWORD *)(v43 + 8) = BugCheckParameter3a;
      v31 = v44;
      *(_DWORD *)(v30 + 4) = v14;
      v19 = v46;
      *(_DWORD *)(v31 + 8) = v46;
      *(_DWORD *)(v45 + 4) = v19;
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v36);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v37);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v38);
    }
    CmpFreeSecurityDescriptor(a4, a5);
    *v13 = v19;
    CmpUnlockTwoSecurityCaches(a4, a1);
    v20 = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(v12 + 40) = -1;
    *(_DWORD *)(v12 + 36) = 0;
    *(_DWORD *)(v12 + 60) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a3 + 64);
    BugCheckParameter3 = v20;
    if ( !v20 )
      return 1;
    v21 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(a3 + 40),
                            v41);
    if ( v21 )
    {
      v22 = 0;
      v23 = v39;
      while ( 1 )
      {
        v46 = CmpCopyValue(a1, *v21, a4, v23);
        if ( v46 == -1
          || !(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, (unsigned int)v46, v42) )
        {
          v8 = *(_DWORD *)(v12 + 40);
          goto LABEL_16;
        }
        if ( (int)CmpAddValueToListEx(a4, v46, v22, v23, (unsigned int *)(v12 + 36), 1) < 0 )
          break;
        ++v22;
        ++v21;
        if ( v22 >= BugCheckParameter3 )
        {
          a7 = 1;
          goto LABEL_16;
        }
      }
      v8 = *(_DWORD *)(v12 + 40);
      if ( v8 != -1 )
      {
        v32 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v8, v40);
        if ( v32 )
        {
          while ( v22 )
            HvFreeCell(a4, *(unsigned int *)(v32 + 4LL * --v22));
          (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v40);
        }
      }
LABEL_16:
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a1 + 16))(a1, v41);
      v24 = a7;
      if ( a7 )
        return v24;
      if ( v8 != -1 )
        HvFreeCell(a4, v8);
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  CmpUnlockTwoSecurityCaches(a4, a1);
  return 0;
}
