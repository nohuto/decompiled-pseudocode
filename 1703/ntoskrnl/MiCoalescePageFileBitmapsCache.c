/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x1400AC1E0
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x1402196E0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140219F78 (MiFinishPageFileExtension.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     MiRescanPageFileBitmapPortion @ 0x14007DABC (MiRescanPageFileBitmapPortion.c)
 *     RtlLengthCurrentClearRunForward @ 0x1400AC6E8 (RtlLengthCurrentClearRunForward.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400AF604 (MiBitmapsCachedEntryLengthChanged.c)
 */

__int64 __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // r12d
  unsigned __int64 v17; // r13
  unsigned __int64 j; // rax
  int v19; // edx
  unsigned __int64 v20; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v22; // r14
  int v23; // r8d
  int v24; // ecx
  int v25; // ecx
  int v26; // ebx
  int v27; // r8d
  unsigned __int64 *v28; // r14
  unsigned int v29; // ebx
  unsigned __int64 v30; // r14
  unsigned int v31; // r11d
  int v32; // eax
  unsigned int v33; // ebx
  _DWORD *v34; // r10
  _DWORD *v35; // rdx
  __int64 v36; // rax
  int v37; // r15d
  unsigned int v38; // r9d
  bool v39; // zf
  __int64 v40; // rcx
  unsigned int v41; // esi
  unsigned int v42; // ecx
  unsigned __int64 *v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r12
  int v46; // r11d
  int v47; // edx
  __int64 v48; // r13
  unsigned int v49; // r10d
  __int64 v50; // r8
  __int64 v51; // rcx
  unsigned int v52; // edx
  int v53; // r11d
  __int64 v54; // rbx
  unsigned int v55; // r10d
  __int64 v56; // r8
  unsigned int v57; // esi
  __int64 v58; // rcx
  __int64 v59; // [rsp+30h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned __int64 v61; // [rsp+80h] [rbp+8h] BYREF
  __int64 v62; // [rsp+98h] [rbp+20h]

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
  v62 = v8;
  v12 = 0LL;
  v59 = v7;
  v13 = 0LL;
  while ( v10 )
  {
    v14 = *(_DWORD *)(v10 + 24);
    if ( a3 < v14 )
    {
      v15 = *(_QWORD *)v10;
      v13 = v10;
      if ( v11 && v15 )
        goto LABEL_93;
    }
    else
    {
      if ( a3 <= v14 )
        goto LABEL_11;
      v15 = *(_QWORD *)(v10 + 8);
      if ( v11 && v15 )
      {
LABEL_93:
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
  if ( v16 == a3 + 1 && v16 != -1 )
  {
    ++*(_DWORD *)(v17 + 52);
    v12 = v10 - 24;
    *(_DWORD *)(v17 + 48) = a3;
  }
  j = *(_QWORD *)v10;
  v19 = 0;
  v20 = v10;
  if ( *(_QWORD *)v10 )
  {
    for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
      j = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(j + 8) == v20 )
        break;
      v20 = j;
    }
  }
  if ( j )
  {
    v22 = j - 24;
    v23 = *(_DWORD *)(j - 24 + 52);
    v24 = v23 + *(_DWORD *)(j + 24);
    v19 = v24 - 1;
    LODWORD(v61) = v24 - 1;
    if ( v24 == (_DWORD)v5 )
    {
      if ( *(_DWORD *)(v17 + 48) == (_DWORD)v5 )
      {
        *(_DWORD *)(v22 + 52) = v23 + *(_DWORD *)(v17 + 52);
        *(_DWORD *)(v17 + 52) = 0;
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)(v10 - 24));
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v10);
        v43 = *(unsigned __int64 **)(a1 + 184);
        if ( *v43 != a1 + 176 )
          __fastfail(3u);
        v19 = v61;
        v7 = v59;
        v12 = v22 | 1;
        *(_QWORD *)v17 = a1 + 176;
        *(_QWORD *)(v17 + 8) = v43;
        *v43 = v17;
        *(_QWORD *)(a1 + 184) = v17;
      }
      else
      {
        v12 = j - 24;
        *(_DWORD *)(v22 + 52) = v23 + 1;
      }
    }
    v8 = v62;
  }
  if ( !v12 )
  {
    v27 = v16 - v5 - 1;
    if ( v16 != -1 )
      v27 = v16 - v5 - 2;
    v28 = (unsigned __int64 *)(a1 + 176);
    v29 = v5 - v19 - 2;
    if ( !v19 )
      v29 = v5 - 1;
    if ( (unsigned __int64 *)*v28 == v28 )
      v30 = *(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v30 = *v28;
    v31 = *(_DWORD *)(v30 + 52);
    result = v29 + v27 + 1;
    v61 = v30;
    if ( (unsigned int)result < 0x20 || v31 >= (unsigned int)result )
    {
      v42 = *(_DWORD *)(a1 + 140);
      if ( v42 > (unsigned int)result )
        goto LABEL_49;
    }
    else
    {
      if ( !v27
        || (v32 = RtlLengthCurrentClearRunForward(v7, (unsigned int)v5),
            v31 = *(_DWORD *)(v30 + 52),
            v27 = v32 - 1,
            result = v29 + v32,
            (unsigned int)result >= 0x20)
        && v31 < (unsigned int)result )
      {
        if ( !v29 )
          return MiRescanPageFileBitmapPortion(a1, v62, (unsigned int)v5 - v29, result, &v61);
        v33 = v29 + 1;
        v34 = *(_DWORD **)(v59 + 8);
        v35 = &v34[v5 >> 5];
        v36 = v5 & 0x1F;
        v37 = 31 - v36;
        v38 = *v35 & dword_14029CF70[v36];
        if ( v38 )
        {
LABEL_42:
          v39 = !_BitScanReverse64((unsigned __int64 *)&v40, v38);
          if ( v39 )
            LOBYTE(v40) = -1;
          v9 += 31 - (char)v40;
        }
        else
        {
          while ( 1 )
          {
            v9 += 32;
            if ( v9 >= v33 && v9 - v37 >= v33 )
              break;
            if ( v35 == v34 )
              break;
            v38 = *--v35;
            if ( v38 )
              goto LABEL_42;
          }
        }
        v41 = v9 - v37;
        if ( v41 <= v33 )
          v33 = v41;
        v29 = v33 - 1;
        result = v29 + v27 + 1;
        if ( (unsigned int)result >= 0x20 && v31 < (unsigned int)result )
          return MiRescanPageFileBitmapPortion(a1, v62, (unsigned int)v5 - v29, result, &v61);
      }
      v42 = *(_DWORD *)(a1 + 140);
      if ( v42 > (unsigned int)result )
      {
LABEL_49:
        *(_DWORD *)(a1 + 140) = v42;
        return result;
      }
    }
    v42 = result;
    goto LABEL_49;
  }
  if ( (v12 & 1) != 0 )
  {
    v12 &= ~1uLL;
  }
  else
  {
    v25 = *(_DWORD *)(v12 + 48);
    if ( v25 == (_DWORD)v5 )
    {
      v44 = *(_QWORD *)(v7 + 8);
      v45 = v5 & 0x1F;
      v46 = 31 - v45;
      v47 = 0;
      v48 = 4 * (v5 >> 5);
      v49 = *(_DWORD *)(v44 + v48) & dword_14029CF70[v45];
      v50 = v44 + v48;
      if ( v49 )
      {
LABEL_69:
        v39 = !_BitScanReverse64((unsigned __int64 *)&v51, v49);
        if ( v39 )
          LOBYTE(v51) = -1;
        v47 += 31 - (char)v51;
      }
      else
      {
        while ( 1 )
        {
          v47 += 32;
          if ( v47 == -1 && !v46 )
            break;
          if ( v50 == v44 )
            break;
          v49 = *(_DWORD *)(v50 - 4);
          v50 -= 4LL;
          if ( v49 )
            goto LABEL_69;
        }
      }
      v52 = v47 - v46;
      if ( v52 > 1 )
      {
        v53 = 31 - v45;
        v54 = *(_QWORD *)(v62 + 8);
        v55 = *(_DWORD *)(v54 + v48) & dword_14029CF70[v45];
        v56 = v54 + v48;
        if ( v55 )
        {
LABEL_87:
          v39 = !_BitScanReverse64((unsigned __int64 *)&v58, v55);
          if ( v39 )
            LOBYTE(v58) = -1;
          v9 += 31 - (char)v58;
        }
        else
        {
          while ( 1 )
          {
            v9 += 32;
            if ( v9 >= v52 && v9 - v53 >= v52 )
              break;
            if ( v56 == v54 )
              break;
            v55 = *(_DWORD *)(v56 - 4);
            v56 -= 4LL;
            if ( v55 )
              goto LABEL_87;
          }
        }
        v57 = v9 - v53;
        if ( v57 <= v52 )
          v52 = v57;
        *(_DWORD *)(v12 + 52) += v52 - 1;
        *(_DWORD *)(v12 + 48) = v5 - v52 + 1;
      }
    }
    else
    {
      v26 = v25 + *(_DWORD *)(v12 + 52);
      if ( (unsigned int)RtlLengthCurrentClearRunForward(v7, (unsigned int)(v26 - 1)) > 1 )
        *(_DWORD *)(v12 + 52) += RtlLengthCurrentClearRunForward(v8, (unsigned int)(v26 - 1)) - 1;
    }
  }
  return MiBitmapsCachedEntryLengthChanged(a1, v12, 1LL);
}
