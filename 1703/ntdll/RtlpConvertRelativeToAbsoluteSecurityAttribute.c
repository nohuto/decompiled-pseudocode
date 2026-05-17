/*
 * XREFs of RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E8650
 * Callers:
 *     <none>
 * Callees:
 *     sub_180058198 @ 0x180058198 (sub_180058198.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlpConvertRelativeToAbsoluteSecurityAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r13
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // r11d
  unsigned int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // ebp
  __int64 v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // r10d
  int v24; // ebp
  unsigned int *v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // r12d
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // ebp
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
  unsigned int v53; // ebp
  char *v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // edx
  unsigned __int64 v57; // rax
  unsigned int v58; // eax
  unsigned int v59; // r12d
  unsigned int v60; // eax
  char *v61; // rbp
  __int64 v62; // r13
  unsigned int v63; // ecx
  unsigned int *v64; // r9
  unsigned int v65; // edx
  unsigned int v66; // eax
  unsigned int v67; // eax
  int v68; // r12d
  __int64 v69; // r13
  unsigned int v70; // edx
  unsigned __int64 v71; // rax
  unsigned int v72; // eax
  unsigned int v73; // r12d
  unsigned int v74; // eax
  char *v75; // rbp
  unsigned __int64 v76; // rdx
  __int64 v77; // r13
  unsigned int v78; // r11d
  unsigned int v79; // edx
  unsigned int v80; // eax
  unsigned int v81; // ecx
  unsigned int v82; // eax
  unsigned int v83; // r12d
  unsigned int v84; // edx
  unsigned __int64 v85; // rax
  unsigned int v86; // eax
  __int64 v87; // rdx
  unsigned int v89; // [rsp+20h] [rbp-48h]
  unsigned __int64 i; // [rsp+20h] [rbp-48h]
  _QWORD v91[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v92; // [rsp+70h] [rbp+8h]
  unsigned int v93; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  v91[0] = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( a2 < *a1 )
    return (unsigned int)-1073741705;
  v9 = a2 - *a1;
  if ( v9 < 4 )
    return (unsigned int)-1073741705;
  v8 = sub_180058198((unsigned int *)((char *)a1 + *a1), v9, v91);
  if ( (v8 & 0x80000000) != 0 )
    return v8;
  v10 = LODWORD(v91[0]) + 2;
  if ( (unsigned int)(LODWORD(v91[0]) + 2) < LODWORD(v91[0]) )
    return (unsigned int)-1073741675;
  v11 = LODWORD(v91[0]) + 5;
  v12 = -1;
  if ( LODWORD(v91[0]) + 5 >= (unsigned int)(LODWORD(v91[0]) + 2) )
    v12 = LODWORD(v91[0]) + 5;
  v8 = v11 < v10 ? 0xC0000095 : 0;
  if ( v11 < v10 )
    return v8;
  v13 = v12 & 0xFFFFFFFC;
  v14 = -1;
  if ( v13 < 0xFFFFFFE0 )
    v14 = v13 + 32;
  v8 = v13 >= 0xFFFFFFE0 ? 0xC0000095 : 0;
  v15 = v14;
  v16 = v14;
  v17 = v14;
  if ( v13 + 32 < 0x20 )
    return v8;
  v18 = a1[3];
  if ( (unsigned __int64)(4 * v18) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v18) )
    return (unsigned int)-1073741705;
  v19 = *((unsigned __int16 *)a1 + 2);
  if ( !*((_WORD *)a1 + 2) )
    goto LABEL_74;
  if ( v19 > 2 )
  {
    if ( v19 == 3 )
    {
      if ( (unsigned __int64)(8 * v18) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v34 = 8 * v18 + v14;
      v35 = v14;
      v36 = -1;
      if ( v34 >= v14 )
        v36 = 8 * v18 + v14;
      v14 = v36;
      v8 = v34 < v35 ? 0xC0000095 : 0;
      if ( v34 >= v16 )
      {
        v37 = 0;
        if ( (_DWORD)v18 )
        {
          do
          {
            v38 = a1[v37 + 4];
            if ( (unsigned int)v5 < (unsigned int)v38 || (unsigned int)(v5 - v38) < 2 )
              return (unsigned int)-1073741705;
            v8 = sub_180058198((unsigned int *)((char *)a1 + v38), (unsigned int)(v5 - v38), v91);
            if ( (v8 & 0x80000000) != 0 )
              return v8;
            v40 = LODWORD(v91[0]) + 2;
            if ( (unsigned int)(LODWORD(v91[0]) + 2) < LODWORD(v91[0]) )
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
            v14 = v45;
            v8 = v44 < v43 ? 0xC0000095 : 0;
            if ( v44 < v43 )
              return v8;
          }
          while ( ++v37 < a1[3] );
        }
        v24 = -1;
        goto LABEL_75;
      }
      return v8;
    }
    if ( v19 == 5 )
      goto LABEL_24;
    if ( v19 != 6 )
    {
      if ( v19 == 16 )
      {
LABEL_24:
        if ( (unsigned __int64)(16 * v18) > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        v20 = 16 * v18 + v14;
        v21 = v14;
        v22 = -1;
        if ( v20 >= v14 )
          v22 = 16 * v18 + v14;
        v14 = v22;
        v8 = v20 < v21 ? 0xC0000095 : 0;
        if ( v20 >= v17 )
        {
          v23 = 0;
          v24 = -1;
          if ( (_DWORD)v18 )
          {
            v25 = a1 + 4;
            while ( 1 )
            {
              v26 = *v25;
              if ( (unsigned int)v5 < (unsigned int)v26 || (unsigned int)(v5 - v26) < 4 )
                return (unsigned int)-1073741705;
              v27 = *(unsigned int *)((char *)a1 + v26);
              v28 = v26 + 4;
              if ( (int)v26 + 4 >= (unsigned int)v26 )
                v24 = v26 + 4;
              v8 = v28 < (unsigned int)v26 ? 0xC0000095 : 0;
              if ( v28 < (unsigned int)v26 )
                return v8;
              if ( (int)v5 - v24 < v27 )
                return (unsigned int)-1073741705;
              v29 = v27 + 3;
              v24 = -1;
              v30 = -1;
              if ( v27 + 3 >= v27 )
                v30 = v27 + 3;
              v8 = v29 < v27 ? 0xC0000095 : 0;
              if ( v29 < v27 )
                return v8;
              v31 = v14;
              v32 = -1;
              v33 = (v30 & 0xFFFFFFFC) + v14;
              if ( v33 >= v14 )
                v32 = (v30 & 0xFFFFFFFC) + v14;
              v14 = v32;
              v8 = v33 < v31 ? 0xC0000095 : 0;
              if ( v33 < v31 )
                return v8;
              ++v23;
              ++v25;
              if ( v23 >= (unsigned int)v18 )
              {
                v10 = LODWORD(v91[0]) + 2;
                break;
              }
            }
          }
LABEL_75:
          if ( *a4 < v14 )
          {
            *a4 = v14;
            return (unsigned int)-1073741789;
          }
          if ( a3 )
          {
            *a4 = v14;
            memset(a3, 0, v14);
            v51 = -1;
            *((_WORD *)a3 + 4) = *((_WORD *)a1 + 2);
            *((_WORD *)a3 + 5) = *((_WORD *)a1 + 3);
            a3[3] = a1[2];
            a3[4] = a1[3];
            if ( v10 < 0xFFFFFFE0 )
              v51 = v10 + 32;
            v8 = v10 >= 0xFFFFFFE0 ? 0xC0000095 : 0;
            if ( v10 + 32 < 0x20 )
              return v8;
            v52 = v51 + 3;
            if ( v51 + 3 >= v51 )
              v24 = v51 + 3;
            v8 = v52 < v51 ? 0xC0000095 : 0;
            if ( v52 < v51 )
              return v8;
            v53 = v24 & 0xFFFFFFFC;
            memmove(a3 + 8, (char *)a1 + *a1, v10);
            *(_QWORD *)a3 = a3 + 8;
            v54 = (char *)a3 + v53;
            v55 = *((unsigned __int16 *)a3 + 4);
            if ( *((_WORD *)a3 + 4) )
            {
              if ( v55 <= 2 )
                goto LABEL_121;
              switch ( v55 )
              {
                case 3u:
                  v70 = a3[4];
                  v71 = 8LL * v70;
                  if ( v71 > 0xFFFFFFFF )
                    return (unsigned int)-1073741675;
                  v72 = v53 + v71;
                  v73 = -1;
                  if ( v72 >= v53 )
                    v73 = v72;
                  v8 = v72 < v53 ? 0xC0000095 : 0;
                  if ( v72 >= v53 )
                  {
                    v74 = 0;
                    v75 = (char *)a3 + v73;
                    *((_QWORD *)a3 + 3) = v54;
                    v93 = 0;
                    if ( v70 )
                    {
                      v76 = v5;
                      for ( i = v5; ; v76 = i )
                      {
                        v77 = v74;
                        v8 = sub_180058198((unsigned int *)((char *)a1 + a1[v74 + 4]), v76, v91);
                        if ( (v8 & 0x80000000) != 0 )
                          break;
                        v79 = LODWORD(v91[0]) + 2;
                        if ( (unsigned int)(LODWORD(v91[0]) + 2) < LODWORD(v91[0]) )
                          return (unsigned int)-1073741675;
                        v80 = v79 + v73;
                        v81 = v78;
                        if ( v79 + v73 >= v73 )
                          v81 = v79 + v73;
                        v8 = v80 < v73 ? 0xC0000095 : 0;
                        if ( v80 < v73 )
                          break;
                        v82 = v81 + 3;
                        v83 = v78;
                        if ( v81 + 3 >= v81 )
                          v83 = v81 + 3;
                        v8 = v82 < v81 ? 0xC0000095 : 0;
                        if ( v82 < v81 )
                          break;
                        v73 = v83 & 0xFFFFFFFC;
                        memmove(v75, (char *)a1 + a1[v77 + 4], v79);
                        *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v77) = v75;
                        v74 = v93 + 1;
                        v75 = (char *)a3 + v73;
                        v93 = v74;
                        if ( v74 >= a3[4] )
                          break;
                      }
                    }
                  }
                  return v8;
                case 5u:
                  goto LABEL_90;
                case 6u:
LABEL_121:
                  v84 = a3[4];
                  v85 = 8LL * v84;
                  if ( v85 > 0xFFFFFFFF )
                    return (unsigned int)-1073741675;
                  v86 = v53 + v85;
                  v8 = v86 < v53 ? 0xC0000095 : 0;
                  if ( v86 >= v53 )
                  {
                    *((_QWORD *)a3 + 3) = v54;
                    if ( v84 )
                    {
                      do
                      {
                        v87 = v4++;
                        *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v87) = *(_QWORD *)((char *)a1 + a1[v87 + 4]);
                      }
                      while ( v4 < a3[4] );
                    }
                  }
                  return v8;
                case 0x10u:
LABEL_90:
                  v56 = a3[4];
                  v57 = 16LL * v56;
                  if ( v57 > 0xFFFFFFFF )
                    return (unsigned int)-1073741675;
                  v58 = v53 + v57;
                  v59 = -1;
                  if ( v58 >= v53 )
                    v59 = v58;
                  v8 = v58 < v53 ? 0xC0000095 : 0;
                  if ( v58 >= v53 )
                  {
                    v60 = 0;
                    v61 = (char *)a3 + v59;
                    *((_QWORD *)a3 + 3) = v54;
                    v92 = 0;
                    if ( v56 )
                    {
                      do
                      {
                        v62 = v60;
                        v63 = -1;
                        v64 = &a1[v60];
                        v65 = *(unsigned int *)((char *)a1 + v64[4]);
                        v89 = v65;
                        v66 = v65 + v59;
                        if ( v65 + v59 >= v59 )
                          v63 = v65 + v59;
                        v8 = v66 < v59 ? 0xC0000095 : 0;
                        if ( v66 < v59 )
                          break;
                        v67 = v63 + 3;
                        v68 = -1;
                        if ( v63 + 3 >= v63 )
                          v68 = v63 + 3;
                        v8 = v67 < v63 ? 0xC0000095 : 0;
                        if ( v67 < v63 )
                          break;
                        v69 = 2 * v62;
                        v59 = v68 & 0xFFFFFFFC;
                        *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v69) = 0LL;
                        if ( v65 )
                        {
                          memmove(v61, (char *)a1 + v64[4] + 4, v65);
                          v65 = v89;
                          *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v69) = v61;
                        }
                        v61 = (char *)a3 + v59;
                        *(_DWORD *)(*((_QWORD *)a3 + 3) + 8 * v69 + 8) = v65;
                        v60 = v92 + 1;
                        v92 = v60;
                      }
                      while ( v60 < a3[4] );
                    }
                  }
                  return v8;
              }
            }
            return (unsigned int)-1073741705;
          }
          return (unsigned int)-1073741811;
        }
        return v8;
      }
LABEL_74:
      v24 = -1;
      goto LABEL_75;
    }
  }
  if ( (unsigned __int64)(8 * v18) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v46 = 8 * v18 + v14;
  v47 = v14;
  v24 = -1;
  v48 = -1;
  if ( v46 >= v14 )
    v48 = 8 * v18 + v14;
  v14 = v48;
  v8 = v46 < v47 ? 0xC0000095 : 0;
  if ( v46 >= v15 )
  {
    v49 = 0;
    if ( (_DWORD)v18 )
    {
      v50 = a1 + 4;
      while ( (unsigned int)v5 >= *v50 && (unsigned int)(v5 - *v50) >= 8 )
      {
        ++v49;
        ++v50;
        if ( v49 >= (unsigned int)v18 )
          goto LABEL_75;
      }
      return (unsigned int)-1073741705;
    }
    goto LABEL_75;
  }
  return v8;
}
