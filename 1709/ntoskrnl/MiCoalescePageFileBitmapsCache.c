/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x1400C0700
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x140224310 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402257E0 (MiFinishPageFileExtension.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     RtlLengthCurrentClearRunForward @ 0x1400C0BFC (RtlLengthCurrentClearRunForward.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400C300C (MiBitmapsCachedEntryLengthChanged.c)
 *     MiRescanPageFileBitmapPortion @ 0x14011A238 (MiRescanPageFileBitmapPortion.c)
 */

__int64 __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r14
  unsigned int v9; // ebp
  unsigned __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // r12d
  unsigned __int64 v17; // r13
  char v18; // r9
  unsigned __int64 j; // rax
  int v20; // r8d
  unsigned __int64 v21; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v23; // r14
  int v24; // edx
  int v25; // ecx
  int v26; // ecx
  int v27; // ebx
  unsigned int v28; // eax
  __int64 v29; // r9
  int v30; // edx
  unsigned __int64 *v31; // r14
  unsigned int v32; // ebx
  unsigned __int64 v33; // r14
  unsigned int v34; // r8d
  int v35; // eax
  unsigned int v36; // r14d
  _DWORD *v37; // r15
  _DWORD *v38; // rbx
  __int64 v39; // rax
  int v40; // r11d
  unsigned int v41; // r9d
  bool v42; // zf
  __int64 v43; // rcx
  unsigned int v44; // ebp
  unsigned int v45; // ecx
  unsigned int v46; // eax
  __int64 v47; // r14
  __int64 v48; // rcx
  int v49; // edx
  int v50; // r8d
  unsigned int v51; // ebx
  __int64 v52; // r13
  __int64 v53; // r11
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // edx
  __int64 v57; // r11
  unsigned int v58; // ebx
  __int64 v59; // rcx
  unsigned int v60; // eax
  unsigned int v61; // ebp
  unsigned __int64 *v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // [rsp+30h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned __int64 v66; // [rsp+80h] [rbp+8h] BYREF
  __int64 v67; // [rsp+98h] [rbp+20h]

  result = (__int64)&retaddr;
  v5 = a3;
  if ( (*(_BYTE *)(a1 + 207) & 1) != 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 112);
  if ( a2 )
  {
    v7 = v6 + 24;
    v8 = v6 + 8;
  }
  else
  {
    v7 = v6 + 8;
    v8 = v6 + 24;
  }
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 160);
  v11 = *(_BYTE *)(a1 + 168) & 1;
  v67 = v8;
  v12 = 0LL;
  v64 = v7;
  v13 = 0LL;
  while ( v10 )
  {
    v14 = *(_DWORD *)(v10 + 24);
    if ( a3 < v14 )
    {
      v15 = *(_QWORD *)v10;
      v13 = v10;
      if ( v11 && v15 )
        goto LABEL_92;
    }
    else
    {
      if ( a3 <= v14 )
        goto LABEL_11;
      v15 = *(_QWORD *)(v10 + 8);
      if ( v11 && v15 )
      {
LABEL_92:
        v10 ^= v15;
        continue;
      }
    }
    v10 = v15;
  }
  v10 = v13;
LABEL_11:
  v16 = *(_DWORD *)(v10 + 24);
  v17 = v10 - 24;
  v18 = -1;
  if ( v16 == a3 + 1 && v16 != -1 )
  {
    ++*(_DWORD *)(v17 + 52);
    v12 = v10 - 24;
    *(_DWORD *)(v17 + 48) = a3;
  }
  j = *(_QWORD *)v10;
  v20 = 0;
  v21 = v10;
  if ( *(_QWORD *)v10 )
  {
    for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
      j = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(j + 8) == v21 )
        break;
      v21 = j;
    }
  }
  if ( j )
  {
    v23 = j - 24;
    v24 = *(_DWORD *)(j - 24 + 52);
    v25 = v24 + *(_DWORD *)(j + 24);
    v20 = v25 - 1;
    LODWORD(v66) = v25 - 1;
    if ( v25 == (_DWORD)v5 )
    {
      if ( *(_DWORD *)(v17 + 48) == (_DWORD)v5 )
      {
        *(_DWORD *)(v23 + 52) = *(_DWORD *)(v17 + 52) + v24;
        *(_DWORD *)(v17 + 52) = 0;
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)(v10 - 24));
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v10);
        v62 = *(unsigned __int64 **)(a1 + 184);
        if ( *v62 != a1 + 176 )
          __fastfail(3u);
        v20 = v66;
        v7 = v64;
        v12 = v23 | 1;
        *(_QWORD *)v17 = a1 + 176;
        v18 = -1;
        *(_QWORD *)(v17 + 8) = v62;
        *v62 = v17;
        *(_QWORD *)(a1 + 184) = v17;
      }
      else
      {
        v12 = j - 24;
        *(_DWORD *)(v23 + 52) = v24 + 1;
      }
    }
    v8 = v67;
  }
  if ( !v12 )
  {
    v30 = v16 - v5 - 1;
    if ( v16 != -1 )
      v30 = v16 - v5 - 2;
    v31 = (unsigned __int64 *)(a1 + 176);
    v32 = v5 - v20 - 2;
    if ( !v20 )
      v32 = v5 - 1;
    if ( (unsigned __int64 *)*v31 == v31 )
      v33 = *(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v33 = *v31;
    v34 = *(_DWORD *)(v33 + 52);
    result = v32 + v30 + 1;
    v66 = v33;
    if ( (unsigned int)result < 0x20 || v34 >= (unsigned int)result )
    {
      v45 = *(_DWORD *)(a1 + 140);
      if ( v45 > (unsigned int)result )
        goto LABEL_54;
    }
    else
    {
      if ( !v30
        || (v35 = RtlLengthCurrentClearRunForward(v7, (unsigned int)v5, (unsigned int)(v30 + 1), 0xFFFFFFFFLL),
            v34 = *(_DWORD *)(v33 + 52),
            v30 = v35 - 1,
            result = v32 + v35,
            (unsigned int)result >= 0x20)
        && v34 < (unsigned int)result )
      {
        if ( !v32 )
          return MiRescanPageFileBitmapPortion(a1, v67, (unsigned int)v5 - v32, result, (__int64)&v66);
        v36 = v32 + 1;
        v37 = *(_DWORD **)(v64 + 8);
        v38 = &v37[v5 >> 5];
        v39 = v5 & 0x1F;
        v40 = 31 - v39;
        v41 = *v38 & dword_1402C05D0[v39];
        if ( v41 )
        {
LABEL_47:
          v42 = !_BitScanReverse64((unsigned __int64 *)&v43, v41);
          if ( v42 )
            LOBYTE(v43) = -1;
          v9 += 31 - (char)v43;
        }
        else
        {
          while ( 1 )
          {
            v46 = v9 + 32;
            v9 = v46;
            if ( v46 >= v36 && v46 - v40 >= v36 )
              break;
            if ( v38 == v37 )
              break;
            v41 = *--v38;
            if ( v41 )
              goto LABEL_47;
          }
        }
        v44 = v9 - v40;
        if ( v44 > v36 )
          v44 = v36;
        v32 = v44 - 1;
        result = v44 + v30;
        if ( (unsigned int)result >= 0x20 && v34 < (unsigned int)result )
          return MiRescanPageFileBitmapPortion(a1, v67, (unsigned int)v5 - v32, result, (__int64)&v66);
      }
      v45 = *(_DWORD *)(a1 + 140);
      if ( v45 > (unsigned int)result )
      {
LABEL_54:
        *(_DWORD *)(a1 + 140) = v45;
        return result;
      }
    }
    v45 = result;
    goto LABEL_54;
  }
  if ( (v12 & 1) != 0 )
  {
    v12 &= ~1uLL;
  }
  else
  {
    v26 = *(_DWORD *)(v12 + 48);
    if ( v26 == (_DWORD)v5 )
    {
      v47 = *(_QWORD *)(v7 + 8);
      v48 = v5 & 0x1F;
      v49 = 0;
      v50 = 31 - v48;
      v51 = dword_1402C05D0[v48];
      v52 = 4 * (v5 >> 5);
      v53 = v47 + v52;
      v54 = v51 & *(_DWORD *)(v47 + v52);
      if ( (v51 & *(_DWORD *)(v47 + v52)) != 0 )
      {
LABEL_66:
        v42 = !_BitScanReverse64((unsigned __int64 *)&v55, v54);
        if ( v42 )
          LOBYTE(v55) = -1;
        v49 += 31 - (char)v55;
      }
      else
      {
        while ( 1 )
        {
          v49 += 32;
          if ( v49 == -1 && v50 == 0 )
            break;
          if ( v53 == v47 )
            break;
          v54 = *(unsigned int *)(v53 - 4);
          v53 -= 4LL;
          if ( (_DWORD)v54 )
            goto LABEL_66;
        }
      }
      v56 = v49 - v50;
      if ( v56 > 1 )
      {
        v57 = *(_QWORD *)(v67 + 8);
        v58 = *(_DWORD *)(v57 + v52) & v51;
        v59 = v57 + v52;
        if ( v58 )
        {
LABEL_96:
          v42 = !_BitScanReverse64((unsigned __int64 *)&v63, v58);
          if ( !v42 )
            v18 = v63;
          v9 += 31 - v18;
        }
        else
        {
          while ( 1 )
          {
            v60 = v9 + 32;
            v9 = v60;
            if ( v60 >= v56 && v60 - v50 >= v56 )
              break;
            if ( v59 == v57 )
              break;
            v58 = *(_DWORD *)(v59 - 4);
            v59 -= 4LL;
            if ( v58 )
              goto LABEL_96;
          }
        }
        v61 = v9 - v50;
        if ( v61 <= v56 )
          v56 = v61;
        *(_DWORD *)(v12 + 52) += v56 - 1;
        *(_DWORD *)(v12 + 48) = v5 - v56 + 1;
      }
    }
    else
    {
      v27 = v26 + *(_DWORD *)(v12 + 52);
      v28 = RtlLengthCurrentClearRunForward(v7, (unsigned int)(v27 - 1), 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( v28 > 1 )
        *(_DWORD *)(v12 + 52) += RtlLengthCurrentClearRunForward(v8, (unsigned int)(v27 - 1), v28, v29) - 1;
    }
  }
  return MiBitmapsCachedEntryLengthChanged(a1, v12, 1LL);
}
