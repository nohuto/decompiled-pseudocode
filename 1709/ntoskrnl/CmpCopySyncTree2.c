/*
 * XREFs of CmpCopySyncTree2 @ 0x1405A5E80
 * Callers:
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNumber @ 0x1404825F0 (CmpFindSubKeyByNumber.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1405A5D50 (CmpSyncSubKeysAfterDelete.c)
 *     CmpInitializeKeyNameString @ 0x1405A6294 (CmpInitializeKeyNameString.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405BC634 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpMarkKeyParentDirty @ 0x1406999D8 (CmpMarkKeyParentDirty.c)
 *     CmpMergeKeyValues @ 0x140699A74 (CmpMergeKeyValues.c)
 */

PVOID __fastcall CmpCopySyncTree2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int16 a6,
        int a7)
{
  __int64 v7; // r13
  __int64 v9; // rdx
  bool v10; // r12
  bool v11; // r15
  __int64 v12; // r14
  PVOID result; // rax
  unsigned int *v14; // rbx
  _DWORD *v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r15
  ULONG_PTR v19; // r12
  __int64 v20; // rax
  unsigned int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  char v25; // r15
  __int64 v26; // rcx
  char v27; // al
  char v28; // al
  _DWORD *v29; // rax
  __int64 v30; // r8
  _DWORD *v31; // r9
  int v32; // ecx
  __int64 v33; // rdx
  __int16 v34; // ax
  __int64 v35; // rax
  char v36; // al
  int v37; // ecx
  __int64 v38; // rdx
  __int64 (__fastcall *v39)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int16 v42; // dx
  unsigned int v43; // eax
  int v44; // r15d
  __int64 v45; // r15
  PVOID PoolWithTag; // rsi
  _OWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // rcx
  int v50; // ecx
  char *v51; // r8
  __int64 v52; // rdx
  int v53; // ecx
  int v54; // eax
  char v55; // [rsp+28h] [rbp-89h]
  ULONG_PTR v56; // [rsp+30h] [rbp-81h]
  char v57; // [rsp+40h] [rbp-71h]
  unsigned __int8 v58; // [rsp+41h] [rbp-70h]
  unsigned int v59; // [rsp+44h] [rbp-6Dh]
  int v60; // [rsp+48h] [rbp-69h]
  unsigned int v61; // [rsp+4Ch] [rbp-65h]
  _OWORD *Src; // [rsp+50h] [rbp-61h]
  int v63; // [rsp+58h] [rbp-59h]
  _DWORD v64[2]; // [rsp+60h] [rbp-51h] BYREF
  _DWORD v65[2]; // [rsp+68h] [rbp-49h] BYREF
  _DWORD v66[2]; // [rsp+70h] [rbp-41h] BYREF
  _DWORD v67[2]; // [rsp+78h] [rbp-39h] BYREF
  _DWORD v68[2]; // [rsp+80h] [rbp-31h] BYREF
  PVOID P; // [rsp+88h] [rbp-29h]
  int v70; // [rsp+90h] [rbp-21h] BYREF
  unsigned int v71; // [rsp+94h] [rbp-1Dh] BYREF
  _DWORD v72[2]; // [rsp+98h] [rbp-19h] BYREF
  _DWORD v73[2]; // [rsp+A0h] [rbp-11h] BYREF
  _DWORD v74[2]; // [rsp+A8h] [rbp-9h] BYREF
  _BYTE v75[64]; // [rsp+B0h] [rbp-1h] BYREF
  char v77; // [rsp+110h] [rbp+5Fh]

  v65[0] = -1;
  v7 = 0LL;
  v65[1] = 0;
  v9 = a1;
  v58 = 0;
  v57 = 0;
  v68[0] = -1;
  v68[1] = 0;
  v67[0] = -1;
  v67[1] = 0;
  v73[0] = -1;
  v73[1] = 0;
  v72[0] = -1;
  v72[1] = 0;
  v63 = -1;
  P = 0LL;
  v10 = (a6 & 1) != 0;
  v11 = (unsigned int)(a7 - 1) <= 1;
  v77 = v11;
  v64[1] = 0;
  v61 = 0;
  v12 = 0LL;
  v64[0] = -1;
  Src = 0LL;
  v59 = -1;
  v60 = 1;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    result = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E5A6D43u);
    P = result;
    if ( !result )
      return result;
    v9 = a1;
  }
LABEL_4:
  v14 = (unsigned int *)(v9 + 20 * v7);
  v14[2] = 0;
  while ( 1 )
  {
    if ( v12 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v67);
    v15 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, *v14, v67);
    v12 = (__int64)v15;
    if ( !v15 )
      break;
    if ( (int)CmpFindSubKeyByNumber(a4, v15, v14[2], &v70) < 0 )
      goto LABEL_105;
    ++v14[2];
    v16 = (unsigned int)v70;
    if ( v70 == -1 || !v10 && v70 < 0 )
    {
      v19 = BugCheckParameter2;
      if ( v11 && a7 != 2 )
      {
        v29 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          v14[1],
                          v73);
        v31 = v29;
        if ( !v29 )
          goto LABEL_104;
        if ( (a6 & 1) != 0 )
          v32 = *(_DWORD *)(v12 + 24);
        else
          v32 = 0;
        if ( v29[5] + v29[6] > (unsigned int)(*(_DWORD *)(v12 + 20) + v32) )
          CmpSyncSubKeysAfterDelete(a4, v12, BugCheckParameter2, v29, (__int64)P);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, _DWORD *))(BugCheckParameter2 + 16))(
          BugCheckParameter2,
          v73,
          v30,
          v31);
      }
      if ( (v14[4] & 1) != 0 )
      {
        if ( ++v59 < v61 )
        {
          v47 = Src;
        }
        else
        {
          v44 = 1;
          if ( v61 + 1 <= (v61 >> 1) + v61 )
            v44 = v61 >> 1;
          v45 = v61 + v44;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v45, 0x20204D43u);
          if ( !PoolWithTag )
            goto LABEL_104;
          memmove(PoolWithTag, Src, 20LL * v61);
          if ( Src )
            ExFreePoolWithTag(Src, 0);
          v47 = PoolWithTag;
          v61 = v45;
          v11 = v77;
          Src = PoolWithTag;
        }
        v48 = ((unsigned __int8)v60 ^ (unsigned __int8)v14[3]) & 7;
        v14[2] = 0;
        v14[3] ^= v48;
        *((_BYTE *)v14 + 16) &= ~1u;
        v49 = 5LL * v59;
        *(_OWORD *)((char *)v47 + 4 * v49) = *(_OWORD *)v14;
        *((_DWORD *)v47 + v49 + 4) = v14[4];
      }
      if ( (_DWORD)v7 )
      {
        v33 = a1;
      }
      else
      {
        if ( v59 == -1 )
        {
          if ( (a6 & 0x40) != 0 )
            *(_DWORD *)(BugCheckParameter2 + 6024) = *(_DWORD *)(BugCheckParameter2 + 1400);
          v24 = 0LL;
          v58 = 1;
          v18 = 0LL;
          goto LABEL_41;
        }
        v50 = *((_DWORD *)Src + 5 * v59 + 3);
        v51 = (char *)Src + 20 * v59;
        v52 = v59--;
        if ( ((*((_BYTE *)Src + 12) ^ (unsigned __int8)v50) & 7) != 0 )
        {
          *(_OWORD *)a1 = *Src;
          *(_DWORD *)(a1 + 16) = *((_DWORD *)Src + 4);
          memmove(Src, (char *)Src + 20, 20 * v52);
          v33 = a1;
        }
        else
        {
          v33 = a1;
          *(_OWORD *)a1 = *(_OWORD *)v51;
          *(_DWORD *)(a1 + 16) = *((_DWORD *)v51 + 4);
        }
        LODWORD(v7) = 1;
        v53 = v60;
        if ( v60 == (int)(*(_DWORD *)(v33 + 12) << 29) >> 29 )
        {
          v54 = *(_DWORD *)(BugCheckParameter2 + 1400);
          ++v60;
          if ( v53 == 1 )
            *(_DWORD *)(BugCheckParameter2 + 6016) = v54;
          else
            *(_DWORD *)(BugCheckParameter2 + 6020) = v54;
        }
      }
      v10 = (a6 & 1) != 0;
      v7 = (unsigned int)(v7 - 1);
      v14 = (unsigned int *)(v33 + 20 * v7);
      if ( v57 )
      {
        v10 = (a6 & 1) != 0;
        if ( (_DWORD)v7 == v63 )
        {
          v11 = 1;
          v57 = 0;
          v77 = 1;
        }
      }
    }
    else
    {
      if ( v11 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, (unsigned int)v70, v65);
        v18 = v17;
        if ( !v17 )
          goto LABEL_102;
        CmpInitializeKeyNameString(v17, v75, P);
        v19 = BugCheckParameter2;
        v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v14[1],
                v72);
        if ( !v20 )
        {
          v24 = 0LL;
          goto LABEL_41;
        }
        CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v20, v75, &v71);
        v21 = v71;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v72);
        if ( v21 != -1 )
        {
          v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v21,
                  v68);
          v24 = v22;
          if ( v22 )
          {
            if ( a7 == 2 )
            {
              if ( (unsigned __int8)CmpMergeKeyValues(a4, v23, v18, BugCheckParameter2, v21, v22) )
                goto LABEL_36;
            }
            else
            {
              if ( *(_QWORD *)(v22 + 4) >= *(_QWORD *)(v18 + 4) )
                goto LABEL_19;
              v55 = v22;
              if ( (unsigned __int8)CmpSyncKeyValues(a4, v23, v18, BugCheckParameter2, v21) )
              {
LABEL_36:
                *(_QWORD *)(v24 + 4) = *(_QWORD *)(v18 + 4);
LABEL_19:
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v68);
                (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v65);
                v25 = 0;
LABEL_20:
                v7 = (unsigned int)(v7 + 1);
                if ( (unsigned int)v7 < 0x200 )
                {
                  v9 = a1;
                  v26 = 5 * v7;
                  v27 = *(_BYTE *)(a1 + 20 * v7 + 16);
                  *(_DWORD *)(a1 + 4 * v26 + 12) &= 0xFFFFFFF8;
                  v28 = (2 * v25) | v27 & 0xFC;
                  *(_DWORD *)(a1 + 4 * v26 + 4) = v21;
                  v11 = v77;
                  v10 = (a6 & 1) != 0;
                  *(_BYTE *)(a1 + 4 * v26 + 16) = v28;
                  *(_DWORD *)(a1 + 4 * v26) = v16;
                  goto LABEL_4;
                }
                v18 = 0LL;
LABEL_102:
                v24 = 0LL;
              }
            }
          }
LABEL_106:
          v19 = BugCheckParameter2;
          goto LABEL_41;
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v65);
        v11 = v77;
        v10 = (a6 & 1) != 0;
        v57 = 1;
      }
      v34 = a6;
      if ( (a6 & 0x40) == 0 )
        goto LABEL_63;
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, (unsigned int)v16, v64);
      if ( !v35 )
        goto LABEL_105;
      v36 = *(_BYTE *)(v35 + 12);
      if ( (v36 & 2) != 0 )
        v37 = 1;
      else
        v37 = ((v36 & 1) == 0) | 2;
      if ( v37 <= v60 )
      {
        if ( v37 > (int)(v14[3] << 29) >> 29 )
        {
          (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v64);
          v34 = a6;
LABEL_63:
          LODWORD(v56) = 2;
          v21 = CmpCopyKeyPartial(a4, (unsigned int)v16, BugCheckParameter2, v14[1], v34 | 4u, v55, v56);
          if ( v21 != -1 )
          {
            v25 = 1;
            if ( (v14[4] & 2) != 0 )
              goto LABEL_67;
            if ( HvpMarkCellDirty(BugCheckParameter2, v14[1], 0) )
            {
              *((_BYTE *)v14 + 16) |= 2u;
LABEL_67:
              if ( CmpAddSubKeyEx(BugCheckParameter2, v14[1], v21, *(_DWORD *)(v12 + 4 * (v16 >> 31) + 20)) )
              {
                v38 = v14[1];
                v66[1] = 0;
                v74[1] = 0;
                v39 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
                v66[0] = -1;
                v74[0] = -1;
                v40 = v39(BugCheckParameter2, v38, v66);
                if ( v40 )
                {
                  v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          v21,
                          v74);
                  if ( !v41 )
                  {
                    v19 = BugCheckParameter2;
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v66);
LABEL_104:
                    v24 = 0LL;
                    v18 = 0LL;
LABEL_41:
                    (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v67);
                    if ( v18 )
                      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v65);
                    if ( v24 )
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v19 + 16))(v19, v68);
                    break;
                  }
                  v42 = *(_WORD *)(v41 + 72);
                  if ( (*(_BYTE *)(v41 + 2) & 0x20) != 0 )
                    v42 *= 2;
                  if ( (unsigned __int16)*(_DWORD *)(v40 + 52) < (unsigned int)v42 )
                    *(_WORD *)(v40 + 52) = v42;
                  v43 = *(unsigned __int16 *)(v41 + 74);
                  if ( *(_DWORD *)(v40 + 56) < v43 )
                    *(_DWORD *)(v40 + 56) = v43;
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v74);
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v66);
                  if ( !v77 || !v57 )
                    goto LABEL_20;
                  if ( (unsigned __int8)CmpMarkKeyParentDirty(BugCheckParameter2) )
                  {
                    v63 = v7;
                    v77 = 0;
                    goto LABEL_20;
                  }
                }
              }
            }
          }
LABEL_105:
          v24 = 0LL;
          v18 = 0LL;
          goto LABEL_106;
        }
      }
      else
      {
        *((_BYTE *)v14 + 16) |= 1u;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v64);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (PVOID)v58;
}
