/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x1400D7170
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14025F6C4 (MiFinishPageFileExtension.c)
 * Callees:
 *     MiRescanPageFileBitmapPortion @ 0x14009C878 (MiRescanPageFileBitmapPortion.c)
 *     RtlLengthCurrentClearRunForward @ 0x1400D7650 (RtlLengthCurrentClearRunForward.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400DA49C (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // r14
  char v20; // r15
  unsigned __int64 j; // rax
  int v22; // r8d
  unsigned __int64 v23; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v25; // r13
  int v26; // edx
  int v27; // ecx
  unsigned __int64 *v28; // rcx
  int v29; // ecx
  __int64 v30; // r10
  __int64 v31; // rcx
  int v32; // r9d
  int v33; // r8d
  unsigned int v34; // r14d
  __int64 v35; // r11
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // rcx
  char v40; // dl
  unsigned int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rcx
  unsigned int v47; // edi
  int v48; // ebx
  int v49; // r9d
  unsigned int v50; // ebp
  __int64 v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // r14d
  unsigned int v54; // ecx
  int v55; // eax
  _DWORD *v56; // r11
  unsigned int v57; // r8d
  _DWORD *v58; // rdx
  __int64 v59; // rax
  int v60; // r10d
  __int64 v61; // rcx
  unsigned int v62; // eax
  unsigned int v63; // edi
  __int64 v64; // [rsp+30h] [rbp-48h]
  __int64 v65; // [rsp+38h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v67; // [rsp+80h] [rbp+8h] BYREF
  int v68; // [rsp+98h] [rbp+20h]

  result = (__int64)&retaddr;
  v5 = a3;
  if ( (*(_BYTE *)(a1 + 207) & 1) == 0 )
  {
    v6 = 24LL;
    v7 = *(_QWORD *)(a1 + 112);
    v8 = 8LL;
    if ( !a2 )
      v8 = 24LL;
    v65 = v7 + v8;
    v9 = *(_QWORD *)(a1 + 160);
    if ( !a2 )
      v6 = 8LL;
    v10 = v7 + v6;
    v11 = 0;
    v12 = *(_QWORD *)(a1 + 168);
    v13 = 0LL;
    v64 = v10;
    if ( (v12 & 1) != 0 )
    {
      if ( v9 )
        v9 ^= a1 + 160;
      else
        v9 = 0LL;
    }
    v14 = 0LL;
    v15 = v12 & 1;
    while ( v9 )
    {
      v16 = *(_DWORD *)(v9 + 24);
      if ( a3 < v16 )
      {
        v17 = *(_QWORD *)v9;
        v14 = v9;
      }
      else
      {
        if ( a3 <= v16 )
          goto LABEL_21;
        v17 = *(_QWORD *)(v9 + 8);
      }
      if ( v15 && v17 )
        v9 ^= v17;
      else
        v9 = v17;
    }
    v9 = v14;
LABEL_21:
    v18 = *(_DWORD *)(v9 + 24);
    v19 = v9 - 24;
    LODWORD(v67) = v18;
    v20 = -1;
    if ( v18 == a3 + 1 && v18 != -1 )
    {
      ++*(_DWORD *)(v19 + 52);
      v13 = v9 - 24;
      *(_DWORD *)(v19 + 48) = a3;
    }
    j = *(_QWORD *)v9;
    v22 = 0;
    v23 = v9;
    if ( *(_QWORD *)v9 )
    {
      for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
        j = i;
    }
    else
    {
      for ( j = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)(j + 8) == v23 )
          break;
        v23 = j;
      }
    }
    if ( j )
    {
      v25 = j - 24;
      v26 = *(_DWORD *)(j - 24 + 52);
      v27 = v26 + *(_DWORD *)(j + 24);
      v22 = v27 - 1;
      v68 = v27 - 1;
      if ( v27 == (_DWORD)v5 )
      {
        if ( *(_DWORD *)(v19 + 48) == (_DWORD)v5 )
        {
          *(_DWORD *)(v25 + 52) = *(_DWORD *)(v19 + 52) + v26;
          *(_DWORD *)(v19 + 52) = 0;
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)(v9 - 24));
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v9);
          v28 = *(unsigned __int64 **)(a1 + 184);
          if ( *v28 != a1 + 176 )
            __fastfail(3u);
          v22 = v68;
          *(_QWORD *)v19 = a1 + 176;
          v13 = v25 | 1;
          *(_QWORD *)(v19 + 8) = v28;
          *v28 = v19;
          *(_QWORD *)(a1 + 184) = v19;
        }
        else
        {
          v13 = j - 24;
          *(_DWORD *)(v25 + 52) = v26 + 1;
        }
      }
      v18 = v67;
      v10 = v64;
    }
    if ( v13 )
    {
      if ( (v13 & 1) != 0 )
      {
        v13 &= ~1uLL;
      }
      else
      {
        v29 = *(_DWORD *)(v13 + 48);
        if ( v29 == (_DWORD)v5 )
        {
          v30 = *(_QWORD *)(v10 + 8);
          v31 = v5 & 0x1F;
          v32 = 31 - v31;
          v33 = 0;
          v34 = dword_1402F9540[v31];
          v35 = 4 * (v5 >> 5);
          v36 = *(_DWORD *)(v35 + v30) & v34;
          v37 = v35 + v30;
          if ( (*(_DWORD *)(v35 + v30) & v34) != 0 )
          {
LABEL_48:
            v38 = !_BitScanReverse64((unsigned __int64 *)&v39, v36);
            v40 = -1;
            if ( !v38 )
              v40 = v39;
            v33 += 31 - v40;
          }
          else
          {
            while ( 1 )
            {
              v33 += 32;
              if ( v33 == -1 && v32 == 0 )
                break;
              if ( v37 == v30 )
                break;
              v36 = *(unsigned int *)(v37 - 4);
              v37 -= 4LL;
              if ( (_DWORD)v36 )
                goto LABEL_48;
            }
          }
          v41 = v33 - v32;
          if ( v41 > 1 )
          {
            v42 = *(_QWORD *)(v65 + 8);
            v43 = v35 + v42;
            v44 = v34 & *(_DWORD *)(v35 + v42);
            if ( (v34 & *(_DWORD *)(v35 + v42)) != 0 )
            {
LABEL_57:
              v38 = !_BitScanReverse64((unsigned __int64 *)&v46, v44);
              if ( !v38 )
                v20 = v46;
              v11 += 31 - v20;
            }
            else
            {
              while ( 1 )
              {
                v45 = v11 + 32;
                v11 = v45;
                if ( v45 >= v41 && v45 - v32 >= v41 )
                  break;
                if ( v43 == v42 )
                  break;
                v44 = *(unsigned int *)(v43 - 4);
                v43 -= 4LL;
                if ( (_DWORD)v44 )
                  goto LABEL_57;
              }
            }
            v47 = v11 - v32;
            if ( v47 <= v41 )
              v41 = v47;
            *(_DWORD *)(v13 + 52) += v41 - 1;
            *(_DWORD *)(v13 + 48) = v5 - v41 + 1;
          }
        }
        else
        {
          v48 = v29 + *(_DWORD *)(v13 + 52);
          if ( (unsigned int)RtlLengthCurrentClearRunForward(v10, (unsigned int)(v48 - 1)) > 1 )
            *(_DWORD *)(v13 + 52) += RtlLengthCurrentClearRunForward(v65, (unsigned int)(v48 - 1)) - 1;
        }
      }
      return MiBitmapsCachedEntryLengthChanged(a1, v13, 1LL);
    }
    else
    {
      v49 = v18 - v5 - 2;
      if ( v18 == -1 )
        v49 = v18 - v5 - 1;
      v50 = v5 - v22 - 2;
      if ( !v22 )
        v50 = v5 - 1;
      v51 = *(_QWORD *)(a1 + 176);
      if ( v51 == a1 + 176 )
      {
        v52 = *(_QWORD *)(a1 + 152);
        if ( (v52 & 1) != 0 )
        {
          if ( v52 == 1 )
            v51 = 0LL;
          else
            v51 = v52 ^ ((a1 + 144) | 1);
        }
        else
        {
          v51 = *(_QWORD *)(a1 + 152);
        }
      }
      v53 = *(_DWORD *)(v51 + 52);
      v54 = v50 + v49 + 1;
      v67 = v51;
      if ( v53 >= v54 )
        goto LABEL_95;
      if ( v54 < 0x20 )
        goto LABEL_95;
      if ( v49 )
      {
        v55 = RtlLengthCurrentClearRunForward(v10, (unsigned int)v5);
        v53 = *(_DWORD *)(v51 + 52);
        v49 = v55 - 1;
        v54 = v50 + v55;
        if ( v53 >= v50 + v55 || v54 < 0x20 )
          goto LABEL_95;
      }
      if ( !v50 )
        return MiRescanPageFileBitmapPortion(a1, v65, (unsigned int)v5 - v50, v54, &v67);
      v56 = *(_DWORD **)(v10 + 8);
      v57 = v50 + 1;
      v58 = &v56[v5 >> 5];
      v59 = v5 & 0x1F;
      v60 = 31 - v59;
      LODWORD(v61) = dword_1402F9540[v59] & *v58;
      if ( (_DWORD)v61 )
      {
LABEL_87:
        v38 = !_BitScanReverse64((unsigned __int64 *)&v61, (unsigned int)v61);
        if ( !v38 )
          v20 = v61;
        v11 += 31 - v20;
      }
      else
      {
        while ( 1 )
        {
          v62 = v11 + 32;
          v11 = v62;
          if ( v62 >= v57 && v62 - v60 >= v57 )
            break;
          if ( v58 == v56 )
            break;
          LODWORD(v61) = *--v58;
          if ( (_DWORD)v61 )
            goto LABEL_87;
        }
      }
      v63 = v11 - v60;
      if ( v63 <= v57 )
        v57 = v63;
      v54 = v57 + v49;
      v50 = v57 - 1;
      if ( v53 >= v57 + v49 || v54 < 0x20 )
      {
LABEL_95:
        result = *(unsigned int *)(a1 + 140);
        if ( (unsigned int)result <= v54 )
          result = v54;
        *(_DWORD *)(a1 + 140) = result;
      }
      else
      {
        return MiRescanPageFileBitmapPortion(a1, v65, (unsigned int)v5 - v50, v54, &v67);
      }
    }
  }
  return result;
}
