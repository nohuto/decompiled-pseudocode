/*
 * XREFs of CmpCopySyncTree2 @ 0x14058D990
 * Callers:
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpFindSubKeyByNumber @ 0x14043B918 (CmpFindSubKeyByNumber.c)
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC (CmpFindSubKeyByNameWithStatus.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14058D860 (CmpSyncSubKeysAfterDelete.c)
 *     CmpInitializeKeyNameString @ 0x14058DF54 (CmpInitializeKeyNameString.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpMarkKeyParentDirty @ 0x14058E6DC (CmpMarkKeyParentDirty.c)
 *     CmpMergeKeyValues @ 0x14066F3AC (CmpMergeKeyValues.c)
 */

PVOID __fastcall CmpCopySyncTree2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        char a6,
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
  _DWORD *v28; // rax
  __int64 v29; // r8
  _DWORD *v30; // r9
  int v31; // ecx
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int16 v38; // dx
  __int64 v39; // rax
  char v40; // al
  int v41; // ecx
  int v42; // r15d
  __int64 v43; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v45; // rsi
  void *v46; // r12
  _DWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // rcx
  _DWORD *v50; // r9
  int v51; // ecx
  char *v52; // r8
  __int64 v53; // rdx
  size_t v54; // r8
  char *v55; // rdx
  int v56; // ecx
  int v57; // eax
  __int64 v58; // [rsp+28h] [rbp-89h]
  char v59; // [rsp+40h] [rbp-71h]
  unsigned __int8 v60; // [rsp+41h] [rbp-70h]
  unsigned int v61; // [rsp+44h] [rbp-6Dh]
  int v62; // [rsp+48h] [rbp-69h]
  unsigned int v63; // [rsp+4Ch] [rbp-65h]
  int v64; // [rsp+50h] [rbp-61h]
  _DWORD v65[2]; // [rsp+58h] [rbp-59h] BYREF
  _DWORD v66[2]; // [rsp+60h] [rbp-51h] BYREF
  void *Src; // [rsp+68h] [rbp-49h]
  _DWORD v68[2]; // [rsp+70h] [rbp-41h] BYREF
  _DWORD v69[2]; // [rsp+78h] [rbp-39h] BYREF
  _DWORD v70[2]; // [rsp+80h] [rbp-31h] BYREF
  PVOID P; // [rsp+88h] [rbp-29h]
  int v72; // [rsp+90h] [rbp-21h] BYREF
  unsigned int v73; // [rsp+94h] [rbp-1Dh] BYREF
  _DWORD v74[2]; // [rsp+98h] [rbp-19h] BYREF
  _DWORD v75[2]; // [rsp+A0h] [rbp-11h] BYREF
  _DWORD v76[2]; // [rsp+A8h] [rbp-9h] BYREF
  _BYTE v77[64]; // [rsp+B0h] [rbp-1h] BYREF
  char v79; // [rsp+110h] [rbp+5Fh]

  v66[0] = -1;
  v7 = 0LL;
  v59 = 0;
  v60 = 0;
  v9 = a1;
  v66[1] = 0;
  v70[0] = -1;
  v70[1] = 0;
  v69[0] = -1;
  v69[1] = 0;
  v75[0] = -1;
  v75[1] = 0;
  v74[0] = -1;
  v74[1] = 0;
  v64 = -1;
  P = 0LL;
  v10 = (a6 & 1) != 0;
  v11 = (unsigned int)(a7 - 1) <= 1;
  v79 = v11;
  v65[1] = 0;
  v63 = 0;
  v12 = 0LL;
  v65[0] = -1;
  Src = 0LL;
  v61 = -1;
  v62 = 1;
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
      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v69);
    v15 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, *v14, v69);
    v12 = (__int64)v15;
    if ( !v15 )
      break;
    if ( (int)CmpFindSubKeyByNumber(a4, v15, v14[2], &v72) < 0 )
      goto LABEL_102;
    ++v14[2];
    v16 = (unsigned int)v72;
    if ( v72 == -1 || !v10 && v72 < 0 )
    {
      if ( v11 && a7 != 2 )
      {
        v19 = BugCheckParameter2;
        v28 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          v14[1],
                          v75);
        v30 = v28;
        if ( !v28 )
          goto LABEL_101;
        if ( (a6 & 1) != 0 )
          v31 = *(_DWORD *)(v12 + 24);
        else
          v31 = 0;
        if ( v28[5] + v28[6] > (unsigned int)(*(_DWORD *)(v12 + 20) + v31) )
          CmpSyncSubKeysAfterDelete(a4, v12, BugCheckParameter2, v28, (__int64)P);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, _DWORD *))(BugCheckParameter2 + 16))(
          BugCheckParameter2,
          v75,
          v29,
          v30);
      }
      if ( (v14[4] & 1) != 0 )
      {
        if ( ++v61 < v63 )
        {
          v47 = Src;
        }
        else
        {
          v42 = 1;
          if ( v63 + 1 <= (v63 >> 1) + v63 )
            v42 = v63 >> 1;
          v43 = v63 + v42;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v43, 0x20204D43u);
          v45 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_102;
          v46 = Src;
          memmove(PoolWithTag, Src, 20LL * v63);
          if ( v46 )
            ExFreePoolWithTag(v46, 0);
          v47 = v45;
          v63 = v43;
          v11 = v79;
          Src = v45;
        }
        v48 = ((unsigned __int8)v62 ^ (unsigned __int8)v14[3]) & 7;
        v14[2] = 0;
        v14[3] ^= v48;
        *((_BYTE *)v14 + 16) &= ~1u;
        v49 = 5LL * v61;
        *(_OWORD *)&v47[v49] = *(_OWORD *)v14;
        v47[v49 + 4] = v14[4];
      }
      if ( (_DWORD)v7 )
      {
        v32 = a1;
      }
      else
      {
        if ( v61 == -1 )
        {
          v19 = BugCheckParameter2;
          if ( (a6 & 0x40) != 0 )
            *(_DWORD *)(BugCheckParameter2 + 6024) = *(_DWORD *)(BugCheckParameter2 + 1400);
          v24 = 0LL;
          v60 = 1;
          v18 = 0LL;
          goto LABEL_59;
        }
        v50 = Src;
        v51 = *((_DWORD *)Src + 5 * v61 + 3);
        v52 = (char *)Src + 20 * v61;
        v53 = v61--;
        if ( ((*((_BYTE *)Src + 12) ^ (unsigned __int8)v51) & 7) != 0 )
        {
          v54 = 20 * v53;
          v55 = (char *)Src + 20;
          *(_OWORD *)a1 = *(_OWORD *)Src;
          *(_DWORD *)(a1 + 16) = v50[4];
          memmove(v50, v55, v54);
          v32 = a1;
        }
        else
        {
          v32 = a1;
          *(_OWORD *)a1 = *(_OWORD *)v52;
          *(_DWORD *)(a1 + 16) = *((_DWORD *)v52 + 4);
        }
        LODWORD(v7) = 1;
        v56 = v62;
        if ( v62 == (int)(*(_DWORD *)(v32 + 12) << 29) >> 29 )
        {
          ++v62;
          v57 = *(_DWORD *)(BugCheckParameter2 + 1400);
          if ( v56 == 1 )
            *(_DWORD *)(BugCheckParameter2 + 6016) = v57;
          else
            *(_DWORD *)(BugCheckParameter2 + 6020) = v57;
        }
      }
      v10 = (a6 & 1) != 0;
      v7 = (unsigned int)(v7 - 1);
      v14 = (unsigned int *)(v32 + 20 * v7);
      if ( v59 && (_DWORD)v7 == v64 )
      {
        v11 = 1;
        v59 = 0;
        v79 = 1;
      }
    }
    else
    {
      if ( v11 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, (unsigned int)v72, v66);
        v18 = v17;
        if ( !v17 )
          goto LABEL_99;
        CmpInitializeKeyNameString(v17, v77, P);
        v19 = BugCheckParameter2;
        v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v14[1],
                v74);
        if ( !v20 )
        {
          v24 = 0LL;
          goto LABEL_59;
        }
        CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v20, (__int64)v77, &v73);
        v21 = v73;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v74);
        if ( v21 != -1 )
        {
          v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v21,
                  v70);
          v24 = v22;
          if ( v22 )
          {
            if ( a7 == 2 )
            {
              if ( (unsigned __int8)CmpMergeKeyValues(a4, v23, v18, BugCheckParameter2, v21, v22) )
                goto LABEL_37;
            }
            else
            {
              if ( *(_QWORD *)(v22 + 4) >= *(_QWORD *)(v18 + 4) )
                goto LABEL_19;
              v58 = v22;
              if ( (unsigned __int8)CmpSyncKeyValues(a4, v23, v18, BugCheckParameter2, v21) )
              {
LABEL_37:
                *(_QWORD *)(v24 + 4) = *(_QWORD *)(v18 + 4);
LABEL_19:
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v70);
                (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v66);
                v25 = 0;
LABEL_20:
                v7 = (unsigned int)(v7 + 1);
                if ( (unsigned int)v7 < 0x200 )
                {
                  v9 = a1;
                  v26 = 5 * v7;
                  v27 = *(_BYTE *)(a1 + 20 * v7 + 16);
                  *(_DWORD *)(a1 + 4 * v26 + 12) &= 0xFFFFFFF8;
                  *(_DWORD *)(a1 + 4 * v26 + 4) = v21;
                  v10 = (a6 & 1) != 0;
                  *(_BYTE *)(a1 + 4 * v26 + 16) = v27 & 0xFC | (2 * v25);
                  v11 = v79;
                  *(_DWORD *)(a1 + 4 * v26) = v16;
                  goto LABEL_4;
                }
                v18 = 0LL;
LABEL_99:
                v24 = 0LL;
              }
            }
          }
LABEL_103:
          v19 = BugCheckParameter2;
          goto LABEL_59;
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v66);
        v11 = v79;
        v10 = (a6 & 1) != 0;
        v59 = 1;
      }
      v33 = a6;
      if ( (a6 & 0x40) == 0 )
        goto LABEL_40;
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, (unsigned int)v16, v65);
      if ( !v39 )
        goto LABEL_102;
      v40 = *(_BYTE *)(v39 + 12);
      if ( (v40 & 2) != 0 )
        v41 = 1;
      else
        v41 = ((v40 & 1) == 0) | 2;
      if ( v41 <= v62 )
      {
        if ( v41 > (int)(v14[3] << 29) >> 29 )
        {
          (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v65);
          v33 = a6;
LABEL_40:
          v21 = CmpCopyKeyPartial(a4, (unsigned int)v16, BugCheckParameter2, v14[1], v33 | 4u, v58, 2u);
          if ( v21 != -1 )
          {
            v25 = 1;
            if ( (v14[4] & 2) != 0 )
              goto LABEL_42;
            if ( HvpMarkCellDirty(BugCheckParameter2, v14[1], 0) )
            {
              *((_BYTE *)v14 + 16) |= 2u;
LABEL_42:
              if ( CmpAddSubKeyEx(BugCheckParameter2, v14[1], v21, *(_DWORD *)(v12 + 4 * (v16 >> 31) + 20)) )
              {
                v34 = v14[1];
                v68[1] = 0;
                v76[1] = 0;
                v35 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
                v68[0] = -1;
                v76[0] = -1;
                v36 = v35(BugCheckParameter2, v34, v68);
                if ( v36 )
                {
                  v37 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          v21,
                          v76);
                  if ( !v37 )
                  {
                    v19 = BugCheckParameter2;
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v68);
LABEL_101:
                    v24 = 0LL;
                    v18 = 0LL;
LABEL_59:
                    (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v69);
                    if ( v18 )
                      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v66);
                    if ( v24 )
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v19 + 16))(v19, v70);
                    break;
                  }
                  v38 = *(_WORD *)(v37 + 72);
                  if ( (*(_BYTE *)(v37 + 2) & 0x20) != 0 )
                    v38 *= 2;
                  if ( (unsigned __int16)*(_DWORD *)(v36 + 52) < (unsigned int)v38 )
                    *(_WORD *)(v36 + 52) = v38;
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v76);
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v68);
                  if ( !v79 || !v59 )
                    goto LABEL_20;
                  if ( (unsigned __int8)CmpMarkKeyParentDirty(BugCheckParameter2) )
                  {
                    v64 = v7;
                    v79 = 0;
                    goto LABEL_20;
                  }
                }
              }
            }
          }
LABEL_102:
          v24 = 0LL;
          v18 = 0LL;
          goto LABEL_103;
        }
      }
      else
      {
        *((_BYTE *)v14 + 16) |= 1u;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v65);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (PVOID)v60;
}
