/*
 * XREFs of RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E7A30
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x180079544 (RtlStringCbLengthW.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpConvertRelativeToAbsoluteSecurityAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r13
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // eax
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  unsigned int v17; // r9d
  unsigned int v18; // ebp
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // r10d
  unsigned int *v28; // r9
  int v29; // ebp
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // r12d
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // edx
  unsigned __int64 v38; // rax
  unsigned int v39; // edx
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // ebp
  __int64 v43; // rcx
  unsigned int v44; // r11d
  unsigned int v45; // ecx
  unsigned int v46; // eax
  int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // edx
  int v50; // eax
  unsigned __int64 v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // edx
  _DWORD *v56; // rcx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned int v59; // ebp
  char *v60; // rdx
  unsigned int v61; // eax
  unsigned int v62; // r8d
  int v63; // ecx
  unsigned __int64 v64; // rax
  unsigned int v65; // eax
  unsigned int v66; // r12d
  unsigned int v67; // eax
  char *v68; // rbp
  __int64 v69; // r13
  unsigned int v70; // ecx
  unsigned int *v71; // r9
  unsigned int v72; // edx
  unsigned int v73; // eax
  unsigned int v74; // eax
  int v75; // r12d
  __int64 v76; // r13
  unsigned int v77; // r8d
  int v78; // ecx
  unsigned __int64 v79; // rax
  unsigned int v80; // eax
  unsigned int v81; // r12d
  unsigned int v82; // eax
  char *v83; // rbp
  unsigned __int64 v84; // rdx
  __int64 v85; // r13
  unsigned int v86; // r11d
  unsigned int v87; // edx
  unsigned int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // eax
  unsigned int v91; // r12d
  unsigned int v92; // r8d
  int v93; // ecx
  unsigned __int64 v94; // rax
  __int64 v95; // rdx
  unsigned int Size; // [rsp+20h] [rbp-48h]
  size_t Sizea; // [rsp+20h] [rbp-48h]
  _QWORD v99[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v100; // [rsp+70h] [rbp+8h]
  unsigned int v101; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  v99[0] = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( a2 < *a1 )
    return (unsigned int)-1073741705;
  v9 = a2 - *a1;
  if ( v9 < 4 )
    return (unsigned int)-1073741705;
  v8 = RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v9, v99);
  if ( (v8 & 0x80000000) != 0 )
    return v8;
  v10 = LODWORD(v99[0]) + 2;
  if ( (unsigned int)(LODWORD(v99[0]) + 2) < LODWORD(v99[0]) )
    return (unsigned int)-1073741675;
  v11 = LODWORD(v99[0]) + 5;
  v12 = -1;
  v13 = -1;
  if ( LODWORD(v99[0]) + 5 >= (unsigned int)(LODWORD(v99[0]) + 2) )
    v13 = LODWORD(v99[0]) + 5;
  v8 = v11 < v10 ? 0xC0000095 : 0;
  if ( v11 < v10 )
    return v8;
  v14 = v13 & 0xFFFFFFFC;
  v15 = -1;
  if ( v14 < 0xFFFFFFE0 )
    v15 = v14 + 32;
  v8 = v14 >= 0xFFFFFFE0 ? 0xC0000095 : 0;
  v16 = v15;
  v17 = v15;
  v18 = v15;
  if ( v14 + 32 < 0x20 )
    return v8;
  v19 = a1[3];
  v20 = -1;
  v21 = 4 * v19;
  if ( (unsigned __int64)(4 * v19) <= 0xFFFFFFFF )
    v20 = 4 * v19;
  v8 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v21 > 0xFFFFFFFF )
    return v8;
  if ( (int)v5 - 16 < v20 )
    return (unsigned int)-1073741705;
  v22 = *((unsigned __int16 *)a1 + 2);
  if ( !*((_WORD *)a1 + 2) )
  {
LABEL_84:
    v29 = -1;
    goto LABEL_81;
  }
  if ( v22 <= 2 )
  {
LABEL_69:
    v51 = 8 * v19;
    if ( (unsigned __int64)(8 * v19) <= 0xFFFFFFFF )
      v12 = 8 * v19;
    v8 = v51 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v51 > 0xFFFFFFFF )
      return v8;
    v52 = v15 + v12;
    v53 = v15;
    v54 = -1;
    if ( v52 >= v15 )
      v54 = v52;
    v15 = v54;
    v8 = v52 < v53 ? 0xC0000095 : 0;
    if ( v52 < v16 )
      return v8;
    v55 = 0;
    if ( (_DWORD)v19 )
    {
      v56 = a1 + 4;
      while ( (unsigned int)v5 >= *v56 && (unsigned int)(v5 - *v56) >= 8 )
      {
        ++v55;
        ++v56;
        if ( v55 >= (unsigned int)v19 )
          goto LABEL_80;
      }
      return (unsigned int)-1073741705;
    }
    goto LABEL_80;
  }
  if ( v22 != 3 )
  {
    if ( v22 == 5 )
    {
LABEL_25:
      v23 = 16 * v19;
      if ( (unsigned __int64)(16 * v19) <= 0xFFFFFFFF )
        v12 = 16 * v19;
      v8 = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v23 > 0xFFFFFFFF )
        return v8;
      v24 = v15 + v12;
      v25 = v15;
      v26 = -1;
      if ( v24 >= v15 )
        v26 = v24;
      v15 = v26;
      v8 = v24 < v25 ? 0xC0000095 : 0;
      if ( v24 < v18 )
        return v8;
      v27 = 0;
      if ( (_DWORD)v19 )
      {
        v28 = a1 + 4;
        v29 = -1;
        while ( 1 )
        {
          v30 = *v28;
          if ( (unsigned int)v5 < (unsigned int)v30 || (unsigned int)(v5 - v30) < 4 )
            return (unsigned int)-1073741705;
          v31 = *(unsigned int *)((char *)a1 + v30);
          v32 = v30 + 4;
          if ( (int)v30 + 4 >= (unsigned int)v30 )
            v29 = v30 + 4;
          v8 = v32 < (unsigned int)v30 ? 0xC0000095 : 0;
          if ( v32 < (unsigned int)v30 )
            return v8;
          if ( (int)v5 - v29 < v31 )
            return (unsigned int)-1073741705;
          v33 = v31 + 3;
          v29 = -1;
          v34 = -1;
          if ( v31 + 3 >= v31 )
            v34 = v31 + 3;
          v8 = v33 < v31 ? 0xC0000095 : 0;
          if ( v33 < v31 )
            return v8;
          v35 = v15;
          v36 = -1;
          v37 = (v34 & 0xFFFFFFFC) + v15;
          if ( v37 >= v15 )
            v36 = (v34 & 0xFFFFFFFC) + v15;
          v15 = v36;
          v8 = v37 < v35 ? 0xC0000095 : 0;
          if ( v37 < v35 )
            return v8;
          ++v27;
          ++v28;
          if ( v27 >= (unsigned int)v19 )
          {
            v10 = LODWORD(v99[0]) + 2;
            goto LABEL_81;
          }
        }
      }
LABEL_80:
      v29 = -1;
      goto LABEL_81;
    }
    if ( v22 != 6 )
    {
      if ( v22 == 16 )
        goto LABEL_25;
      goto LABEL_84;
    }
    goto LABEL_69;
  }
  v38 = 8 * v19;
  if ( (unsigned __int64)(8 * v19) <= 0xFFFFFFFF )
    v12 = 8 * v19;
  v8 = v38 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v38 > 0xFFFFFFFF )
    return v8;
  v39 = v15 + v12;
  v40 = v15;
  v41 = -1;
  if ( v39 >= v15 )
    v41 = v39;
  v15 = v41;
  v8 = v39 < v40 ? 0xC0000095 : 0;
  if ( v39 < v17 )
    return v8;
  v42 = 0;
  if ( (_DWORD)v19 )
  {
    while ( 1 )
    {
      v43 = a1[v42 + 4];
      if ( (unsigned int)v5 < (unsigned int)v43 || (unsigned int)(v5 - v43) < 2 )
        return (unsigned int)-1073741705;
      v8 = RtlStringCbLengthW((unsigned int *)((char *)a1 + v43), (unsigned int)(v5 - v43), v99);
      if ( (v8 & 0x80000000) != 0 )
        return v8;
      v45 = LODWORD(v99[0]) + 2;
      if ( (unsigned int)(LODWORD(v99[0]) + 2) < LODWORD(v99[0]) )
      {
        v45 = -1;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( (v8 & 0x80000000) != 0 )
        return v8;
      v46 = v45 + 3;
      v47 = -1;
      if ( v45 + 3 >= v45 )
        v47 = v45 + 3;
      v8 = v46 < v45 ? 0xC0000095 : 0;
      if ( v46 < v45 )
        return v8;
      v48 = v44;
      v49 = v44 + (v47 & 0xFFFFFFFC);
      v50 = -1;
      if ( v49 >= v44 )
        v50 = v49;
      v15 = v50;
      v8 = v49 < v48 ? 0xC0000095 : 0;
      if ( v49 < v48 )
        return v8;
      if ( ++v42 >= a1[3] )
      {
        v29 = -1;
        goto LABEL_81;
      }
    }
  }
  v29 = -1;
LABEL_81:
  if ( *a4 < v15 )
  {
    *a4 = v15;
    return (unsigned int)-1073741789;
  }
  if ( !a3 )
    return (unsigned int)-1073741811;
  *a4 = v15;
  memset(a3, 0, v15);
  v57 = -1;
  *((_WORD *)a3 + 4) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 5) = *((_WORD *)a1 + 3);
  a3[3] = a1[2];
  a3[4] = a1[3];
  if ( v10 < 0xFFFFFFE0 )
    v57 = v10 + 32;
  v8 = v10 >= 0xFFFFFFE0 ? 0xC0000095 : 0;
  if ( v10 + 32 >= 0x20 )
  {
    v58 = v57 + 3;
    if ( v57 + 3 >= v57 )
      v29 = v57 + 3;
    v8 = v58 < v57 ? 0xC0000095 : 0;
    if ( v58 >= v57 )
    {
      v59 = v29 & 0xFFFFFFFC;
      memmove(a3 + 8, (char *)a1 + *a1, v10);
      *(_QWORD *)a3 = a3 + 8;
      v60 = (char *)a3 + v59;
      v61 = *((unsigned __int16 *)a3 + 4);
      if ( !*((_WORD *)a3 + 4) )
        return (unsigned int)-1073741705;
      if ( v61 <= 2 )
      {
LABEL_134:
        v92 = a3[4];
        v93 = -1;
        v94 = 8LL * v92;
        if ( v94 <= 0xFFFFFFFF )
          v93 = 8 * v92;
        v8 = v94 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v94 <= 0xFFFFFFFF )
        {
          v8 = v93 + v59 < v59 ? 0xC0000095 : 0;
          if ( v93 + v59 >= v59 )
          {
            *((_QWORD *)a3 + 3) = v60;
            if ( v92 )
            {
              do
              {
                v95 = v4++;
                *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v95) = *(_QWORD *)((char *)a1 + a1[v95 + 4]);
              }
              while ( v4 < a3[4] );
            }
          }
        }
        return v8;
      }
      if ( v61 != 3 )
      {
        if ( v61 == 5 )
        {
LABEL_98:
          v62 = a3[4];
          v63 = -1;
          v64 = 16LL * v62;
          if ( v64 <= 0xFFFFFFFF )
            v63 = 16 * v62;
          v8 = v64 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v64 <= 0xFFFFFFFF )
          {
            v65 = v63 + v59;
            v66 = -1;
            if ( v63 + v59 >= v59 )
              v66 = v63 + v59;
            v8 = v65 < v59 ? 0xC0000095 : 0;
            if ( v65 >= v59 )
            {
              v67 = 0;
              v68 = (char *)a3 + v66;
              *((_QWORD *)a3 + 3) = v60;
              v100 = 0;
              if ( v62 )
              {
                do
                {
                  v69 = v67;
                  v70 = -1;
                  v71 = &a1[v67];
                  v72 = *(unsigned int *)((char *)a1 + v71[4]);
                  Size = v72;
                  v73 = v72 + v66;
                  if ( v72 + v66 >= v66 )
                    v70 = v72 + v66;
                  v8 = v73 < v66 ? 0xC0000095 : 0;
                  if ( v73 < v66 )
                    break;
                  v74 = v70 + 3;
                  v75 = -1;
                  if ( v70 + 3 >= v70 )
                    v75 = v70 + 3;
                  v8 = v74 < v70 ? 0xC0000095 : 0;
                  if ( v74 < v70 )
                    break;
                  v76 = 2 * v69;
                  v66 = v75 & 0xFFFFFFFC;
                  *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v76) = 0LL;
                  if ( v72 )
                  {
                    memmove(v68, (char *)a1 + v71[4] + 4, v72);
                    v72 = Size;
                    *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v76) = v68;
                  }
                  v68 = (char *)a3 + v66;
                  *(_DWORD *)(*((_QWORD *)a3 + 3) + 8 * v76 + 8) = v72;
                  v67 = v100 + 1;
                  v100 = v67;
                }
                while ( v67 < a3[4] );
              }
            }
          }
          return v8;
        }
        if ( v61 != 6 )
        {
          if ( v61 == 16 )
            goto LABEL_98;
          return (unsigned int)-1073741705;
        }
        goto LABEL_134;
      }
      v77 = a3[4];
      v78 = -1;
      v79 = 8LL * v77;
      if ( v79 <= 0xFFFFFFFF )
        v78 = 8 * v77;
      v8 = v79 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v79 <= 0xFFFFFFFF )
      {
        v80 = v78 + v59;
        v81 = -1;
        if ( v78 + v59 >= v59 )
          v81 = v78 + v59;
        v8 = v80 < v59 ? 0xC0000095 : 0;
        if ( v80 >= v59 )
        {
          v82 = 0;
          v83 = (char *)a3 + v81;
          *((_QWORD *)a3 + 3) = v60;
          v101 = 0;
          if ( v77 )
          {
            v84 = v5;
            for ( Sizea = v5; ; v84 = Sizea )
            {
              v85 = v82;
              v8 = RtlStringCbLengthW((unsigned int *)((char *)a1 + a1[v82 + 4]), v84, v99);
              if ( (v8 & 0x80000000) != 0 )
                break;
              v87 = LODWORD(v99[0]) + 2;
              if ( (unsigned int)(LODWORD(v99[0]) + 2) < LODWORD(v99[0]) )
                return (unsigned int)-1073741675;
              v88 = v87 + v81;
              v89 = v86;
              if ( v87 + v81 >= v81 )
                v89 = v87 + v81;
              v8 = v88 < v81 ? 0xC0000095 : 0;
              if ( v88 < v81 )
                return v8;
              v90 = v89 + 3;
              v91 = v86;
              if ( v89 + 3 >= v89 )
                v91 = v89 + 3;
              v8 = v90 < v89 ? 0xC0000095 : 0;
              if ( v90 < v89 )
                return v8;
              v81 = v91 & 0xFFFFFFFC;
              memmove(v83, (char *)a1 + a1[v85 + 4], v87);
              *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v85) = v83;
              v82 = v101 + 1;
              v83 = (char *)a3 + v81;
              v101 = v82;
              if ( v82 >= a3[4] )
                return v8;
            }
          }
        }
      }
    }
  }
  return v8;
}
