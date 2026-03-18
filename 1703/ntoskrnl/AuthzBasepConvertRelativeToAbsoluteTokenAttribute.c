/*
 * XREFs of AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140262EC0
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  size_t v5; // r13
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // r11d
  unsigned int v12; // eax
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  unsigned int v15; // r12d
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // r10d
  unsigned int *v22; // r9
  int v23; // ebp
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // r12d
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // edx
  bool v32; // cf
  unsigned int v33; // edx
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // ebp
  unsigned int v37; // r12d
  __int64 v38; // rcx
  unsigned int v39; // r11d
  unsigned int v40; // ecx
  unsigned int v41; // eax
  int v42; // edx
  unsigned int v43; // ecx
  unsigned int v44; // edx
  int v45; // eax
  unsigned int v46; // edx
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // edx
  _DWORD *v50; // rcx
  unsigned int v51; // ecx
  unsigned int v52; // eax
  int v53; // ebp
  unsigned int v54; // ebp
  char *v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // edx
  unsigned __int64 v58; // rax
  unsigned int v59; // eax
  unsigned int v60; // r12d
  unsigned int v61; // eax
  char *v62; // rbp
  __int64 v63; // r13
  unsigned int *v64; // r9
  size_t v65; // rdx
  unsigned int v66; // ecx
  unsigned int v67; // eax
  int v68; // r12d
  __int64 v69; // r13
  unsigned int v70; // edx
  unsigned __int64 v71; // rax
  unsigned int v72; // eax
  unsigned int v73; // r12d
  unsigned int v74; // eax
  char *v75; // rbp
  size_t v76; // rdx
  __int64 v77; // r13
  unsigned int v78; // r11d
  unsigned int v79; // edx
  unsigned int v80; // ecx
  unsigned int v81; // eax
  unsigned int v82; // r12d
  __int64 v83; // r13
  unsigned int v84; // edx
  unsigned __int64 v85; // rax
  unsigned int v86; // eax
  __int64 v87; // rdx
  int v89; // [rsp+20h] [rbp-58h]
  __int16 v90; // [rsp+20h] [rbp-58h]
  size_t pcbLength; // [rsp+28h] [rbp-50h] BYREF
  size_t i; // [rsp+30h] [rbp-48h]
  unsigned int Size; // [rsp+80h] [rbp+8h]
  unsigned int Sizea; // [rsp+80h] [rbp+8h]
  unsigned int Sizeb; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  pcbLength = 0LL;
  if ( !a1 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( !a1[3] )
    return (unsigned int)-1073741705;
  v9 = *a1;
  if ( a2 < (unsigned int)v9 || a2 - (unsigned int)v9 < 4 )
    return (unsigned int)-1073741705;
  v8 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v9), a2 - (unsigned int)v9, &pcbLength);
  if ( (v8 & 0x80000000) != 0 )
    return v8;
  v10 = pcbLength + 2;
  Size = pcbLength + 2;
  if ( (int)pcbLength + 2 < (unsigned int)pcbLength || (int)pcbLength + 5 < (unsigned int)(pcbLength + 2) )
    return (unsigned int)-1073741675;
  v11 = -1;
  v12 = ((pcbLength + 5) & 0xFFFFFFFC) + 40;
  if ( v12 >= 0x28 )
    v11 = ((pcbLength + 5) & 0xFFFFFFFC) + 40;
  v8 = (((_DWORD)pcbLength + 5) & 0xFFFFFFFC) >= 0xFFFFFFD8 ? 0xC0000095 : 0;
  v13 = v11;
  v14 = v11;
  v15 = v11;
  if ( v12 < 0x28 )
    return v8;
  v16 = a1[3];
  if ( (unsigned __int64)(4 * v16) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v16) )
    return (unsigned int)-1073741705;
  v17 = *((unsigned __int16 *)a1 + 2);
  if ( !*((_WORD *)a1 + 2) )
    goto LABEL_44;
  if ( v17 > 2 )
  {
    if ( v17 == 3 )
    {
      if ( (unsigned __int64)(16 * v16) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v33 = 16 * v16 + v11;
      v34 = v11;
      v35 = -1;
      if ( v33 >= v11 )
        v35 = 16 * v16 + v11;
      v11 = v35;
      v8 = v33 < v34 ? 0xC0000095 : 0;
      if ( v33 >= v14 )
      {
        v36 = 0;
        if ( (_DWORD)v16 )
        {
          do
          {
            v37 = v11;
            v38 = a1[v36 + 4];
            if ( (unsigned int)v5 < (unsigned int)v38 || (unsigned int)(v5 - v38) < 2 )
              return (unsigned int)-1073741705;
            v8 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v38), (unsigned int)(v5 - v38), &pcbLength);
            if ( (v8 & 0x80000000) != 0 )
              return v8;
            v40 = pcbLength + 2;
            if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
            {
              v40 = -1;
              v8 = -1073741675;
            }
            else
            {
              v8 = 0;
            }
            if ( (v8 & 0x80000000) != 0 )
              return v8;
            v41 = v40 + 3;
            v42 = -1;
            if ( v40 + 3 >= v40 )
              v42 = v40 + 3;
            v8 = v41 < v40 ? 0xC0000095 : 0;
            if ( v41 < v40 )
              return v8;
            v43 = v39;
            v44 = v39 + (v42 & 0xFFFFFFFC);
            v45 = -1;
            if ( v44 >= v39 )
              v45 = v44;
            v11 = v45;
            v8 = v44 < v43 ? 0xC0000095 : 0;
            if ( v44 < v37 )
              return v8;
          }
          while ( ++v36 < a1[3] );
        }
LABEL_43:
        v10 = Size;
        goto LABEL_44;
      }
      return v8;
    }
    if ( v17 == 5 )
      goto LABEL_24;
    if ( v17 != 6 )
    {
      if ( v17 != 16 )
        goto LABEL_44;
LABEL_24:
      if ( (unsigned __int64)(16 * v16) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v18 = 16 * v16 + v11;
      v19 = v11;
      v20 = -1;
      if ( v18 >= v11 )
        v20 = 16 * v16 + v11;
      v11 = v20;
      v8 = v18 < v19 ? 0xC0000095 : 0;
      if ( v18 >= v15 )
      {
        v21 = 0;
        if ( (_DWORD)v16 )
        {
          v22 = a1 + 4;
          v23 = -1;
          while ( 1 )
          {
            v24 = *v22;
            if ( (unsigned int)v5 < (unsigned int)v24 || (unsigned int)(v5 - v24) < 4 )
              return (unsigned int)-1073741705;
            v25 = *(unsigned int *)((char *)a1 + v24);
            v26 = v24 + 4;
            if ( (int)v24 + 4 >= (unsigned int)v24 )
              v23 = v24 + 4;
            v8 = v26 < (unsigned int)v24 ? 0xC0000095 : 0;
            if ( v26 < (unsigned int)v24 )
              return v8;
            if ( (int)v5 - v23 < v25 )
              return (unsigned int)-1073741705;
            v27 = v25 + 3;
            v23 = -1;
            v28 = -1;
            if ( v25 + 3 >= v25 )
              v28 = v25 + 3;
            v8 = v27 < v25 ? 0xC0000095 : 0;
            if ( v27 < v25 )
              return v8;
            v29 = v11;
            v30 = -1;
            v31 = (v28 & 0xFFFFFFFC) + v11;
            if ( v31 >= v11 )
              v30 = (v28 & 0xFFFFFFFC) + v11;
            v11 = v30;
            v8 = v31 < v29 ? 0xC0000095 : 0;
            if ( v31 < v29 )
              return v8;
            ++v21;
            ++v22;
            if ( v21 >= (unsigned int)v16 )
              goto LABEL_43;
          }
        }
LABEL_44:
        v32 = *a4 < v11;
        *a4 = v11;
        if ( v32 )
          return (unsigned int)-1073741789;
        memset(a3, 0, v11);
        v51 = v10 + 40;
        *((_WORD *)a3 + 8) = *((_WORD *)a1 + 2);
        *((_WORD *)a3 + 9) = *((_WORD *)a1 + 3);
        a3[5] = a1[2];
        a3[6] = a1[3];
        if ( v10 >= 0xFFFFFFD8 )
        {
          v51 = -1;
          v8 = -1073741675;
        }
        else
        {
          v8 = 0;
        }
        if ( (v8 & 0x80000000) != 0 )
          return v8;
        v52 = v51 + 3;
        v53 = -1;
        if ( v51 + 3 >= v51 )
          v53 = v51 + 3;
        v8 = v52 < v51 ? 0xC0000095 : 0;
        if ( v52 < v51 )
          return v8;
        v54 = v53 & 0xFFFFFFFC;
        memmove(a3 + 10, (char *)a1 + *a1, Size);
        *((_QWORD *)a3 + 1) = a3 + 10;
        *((_WORD *)a3 + 1) = Size;
        *(_WORD *)a3 = Size - 2;
        v55 = (char *)a3 + v54;
        v56 = *((unsigned __int16 *)a3 + 8);
        if ( *((_WORD *)a3 + 8) )
        {
          if ( v56 <= 2 )
            goto LABEL_122;
          switch ( v56 )
          {
            case 3u:
              v70 = a3[6];
              v71 = 16LL * v70;
              if ( v71 > 0xFFFFFFFF )
                return (unsigned int)-1073741675;
              v72 = v54 + v71;
              v73 = -1;
              if ( v72 >= v54 )
                v73 = v72;
              v8 = v72 < v54 ? 0xC0000095 : 0;
              if ( v72 >= v54 )
              {
                v74 = 0;
                v75 = (char *)a3 + v73;
                *((_QWORD *)a3 + 4) = v55;
                Sizeb = 0;
                if ( v70 )
                {
                  v76 = v5;
                  for ( i = v5; ; v76 = i )
                  {
                    v77 = v74;
                    v8 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + a1[v74 + 4]), v76, &pcbLength);
                    if ( (v8 & 0x80000000) != 0 )
                      break;
                    v79 = pcbLength + 2;
                    v90 = pcbLength + 2;
                    if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
                      return (unsigned int)-1073741675;
                    v80 = v79 + v73;
                    if ( v79 + v73 < v73 )
                    {
                      v80 = v78;
                      v8 = -1073741675;
                    }
                    else
                    {
                      v8 = 0;
                    }
                    if ( (v8 & 0x80000000) != 0 )
                      break;
                    v81 = v80 + 3;
                    v82 = v78;
                    if ( v80 + 3 >= v80 )
                      v82 = v80 + 3;
                    v8 = v81 < v80 ? 0xC0000095 : 0;
                    if ( v81 < v80 )
                      break;
                    v73 = v82 & 0xFFFFFFFC;
                    memmove(v75, (char *)a1 + a1[v77 + 4], v79);
                    v83 = 2 * v77;
                    *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v83 + 8) = v75;
                    v75 = (char *)a3 + v73;
                    *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v83) = v90 - 2;
                    *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v83 + 2) = v90;
                    v74 = Sizeb + 1;
                    Sizeb = v74;
                    if ( v74 >= a3[6] )
                      break;
                  }
                }
              }
              return v8;
            case 5u:
              goto LABEL_89;
            case 6u:
LABEL_122:
              v84 = a3[6];
              v85 = 8LL * v84;
              if ( v85 > 0xFFFFFFFF )
                return (unsigned int)-1073741675;
              v86 = v54 + v85;
              v8 = v86 < v54 ? 0xC0000095 : 0;
              if ( v86 >= v54 )
              {
                *((_QWORD *)a3 + 4) = v55;
                if ( v84 )
                {
                  do
                  {
                    v87 = v4++;
                    *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v87) = *(_QWORD *)((char *)a1 + a1[v87 + 4]);
                  }
                  while ( v4 < a3[6] );
                }
              }
              return v8;
            case 0x10u:
LABEL_89:
              v57 = a3[6];
              v58 = 16LL * v57;
              if ( v58 > 0xFFFFFFFF )
                return (unsigned int)-1073741675;
              v59 = v54 + v58;
              v60 = -1;
              if ( v59 >= v54 )
                v60 = v59;
              v8 = v59 < v54 ? 0xC0000095 : 0;
              if ( v59 >= v54 )
              {
                v61 = 0;
                v62 = (char *)a3 + v60;
                *((_QWORD *)a3 + 4) = v55;
                Sizea = 0;
                if ( v57 )
                {
                  do
                  {
                    v63 = v61;
                    v64 = &a1[v61];
                    v65 = *(unsigned int *)((char *)a1 + v64[4]);
                    v89 = v65;
                    v66 = v65 + v60;
                    if ( (unsigned int)v65 + v60 < v60 )
                    {
                      v66 = -1;
                      v8 = -1073741675;
                    }
                    else
                    {
                      v8 = 0;
                    }
                    if ( (v8 & 0x80000000) != 0 )
                      break;
                    v67 = v66 + 3;
                    v68 = -1;
                    if ( v66 + 3 >= v66 )
                      v68 = v66 + 3;
                    v8 = v67 < v66 ? 0xC0000095 : 0;
                    if ( v67 < v66 )
                      break;
                    v69 = 2 * v63;
                    v60 = v68 & 0xFFFFFFFC;
                    *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v69) = 0LL;
                    if ( (_DWORD)v65 )
                    {
                      memmove(v62, (char *)a1 + v64[4] + 4, v65);
                      LODWORD(v65) = v89;
                      *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v69) = v62;
                    }
                    v62 = (char *)a3 + v60;
                    *(_DWORD *)(*((_QWORD *)a3 + 4) + 8 * v69 + 8) = v65;
                    v61 = Sizea + 1;
                    Sizea = v61;
                  }
                  while ( v61 < a3[6] );
                }
              }
              return v8;
          }
        }
        return (unsigned int)-1073741705;
      }
      return v8;
    }
  }
  if ( (unsigned __int64)(8 * v16) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v46 = 8 * v16 + v11;
  v47 = v11;
  v48 = -1;
  if ( v46 >= v11 )
    v48 = 8 * v16 + v11;
  v11 = v48;
  v8 = v46 < v47 ? 0xC0000095 : 0;
  if ( v46 >= v13 )
  {
    v49 = 0;
    if ( (_DWORD)v16 )
    {
      v50 = a1 + 4;
      while ( (unsigned int)v5 >= *v50 && (unsigned int)(v5 - *v50) >= 8 )
      {
        ++v49;
        ++v50;
        if ( v49 >= (unsigned int)v16 )
          goto LABEL_44;
      }
      return (unsigned int)-1073741705;
    }
    goto LABEL_44;
  }
  return v8;
}
