/*
 * XREFs of sub_1800642B0 @ 0x1800642B0
 * Callers:
 *     sub_180064250 @ 0x180064250 (sub_180064250.c)
 * Callees:
 *     sub_180064B00 @ 0x180064B00 (sub_180064B00.c)
 *     sub_180064DE8 @ 0x180064DE8 (sub_180064DE8.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180104190 @ 0x180104190 (sub_180104190.c)
 */

__int64 __fastcall sub_1800642B0(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int8 *v8; // rdi
  void *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned __int8 *v12; // r14
  unsigned __int8 *v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int8 *v15; // rbx
  int v16; // esi
  unsigned __int8 v17; // al
  unsigned __int8 *v18; // r10
  unsigned __int8 *v19; // r11
  _DWORD *v20; // rdx
  __int64 v21; // r8
  unsigned __int8 *v22; // r9
  unsigned __int8 v23; // r14
  unsigned __int8 v24; // bp
  unsigned __int8 v25; // bp
  _BYTE *v26; // r13
  unsigned __int8 v27; // r14
  unsigned __int8 v28; // r12
  unsigned __int8 v29; // r13
  unsigned __int8 *v30; // r9
  int v31; // eax
  int v32; // ecx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  char v36; // cl
  unsigned __int64 v37; // r8
  _BYTE *v38; // rax
  unsigned __int8 v39; // cl
  _WORD *v40; // rbx
  int v41; // eax
  unsigned __int8 v42; // al
  int v43; // esi
  __int64 v44; // rax
  bool v45; // zf
  __int64 v47; // r8
  unsigned __int8 *v48; // rcx
  __int64 v49; // rdx
  unsigned __int8 *v50; // rcx
  __int64 v51; // r8
  unsigned __int8 *v52; // rdx
  int *v53; // rcx
  unsigned __int64 v54; // r8
  __int64 v55; // rax
  unsigned __int8 v56; // al
  unsigned __int64 v57; // r8
  unsigned __int8 *v58; // r8
  unsigned __int64 v59; // [rsp+30h] [rbp-A8h]
  __int64 v60; // [rsp+38h] [rbp-A0h]
  __int64 v61; // [rsp+40h] [rbp-98h]
  unsigned __int64 v62; // [rsp+48h] [rbp-90h]
  _BYTE *v63; // [rsp+50h] [rbp-88h]
  char *v64; // [rsp+58h] [rbp-80h]
  __int64 v65; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v66; // [rsp+70h] [rbp-68h]
  unsigned __int64 v67; // [rsp+78h] [rbp-60h]
  __int64 v68; // [rsp+80h] [rbp-58h]
  _QWORD v69[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v70; // [rsp+98h] [rbp-40h]
  int v72; // [rsp+F0h] [rbp+18h]
  unsigned __int8 *v73; // [rsp+110h] [rbp+38h]
  unsigned __int64 v74; // [rsp+118h] [rbp+40h]

  v72 = a3;
  v6 = a2;
  v68 = a2;
  v67 = a3 + a4;
  v7 = a2 + a1;
  v62 = v7;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v65 = a3;
  memset64(a6, a1, 0xAF6uLL);
  v69[0] = 0LL;
  v69[1] = 0LL;
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v8 = (unsigned __int8 *)a1;
  v70 = a2;
  v9 = a6 + 22608;
  while ( 2 )
  {
    v10 = 0LL;
    v60 = 0LL;
    v11 = 0LL;
    v61 = 0LL;
    v12 = (unsigned __int8 *)(a6 + 23184);
    memset(v9, 0, 0x800uLL);
    v13 = (unsigned __int8 *)v7;
    if ( (unsigned __int64)(v8 + 0x10000) <= v7 )
      v13 = v8 + 0x10000;
    v66 = v13;
    v74 = (unsigned __int64)&v8[v6];
    v14 = (unsigned __int64)(v13 - 40);
    v59 = (unsigned __int64)(v13 - 40);
    if ( v13 - 40 < &v8[v6] )
      v74 = (unsigned __int64)(v13 - 40);
    v15 = (unsigned __int8 *)(a6 + 23185);
    v16 = 1;
    v73 = (unsigned __int8 *)(a6 + 23184);
    if ( v8 == (unsigned __int8 *)a1 )
    {
      v16 = 2;
      ++a6[*v8 + 22608];
      v17 = *v8++;
      *v15 = v17;
      v15 = (unsigned __int8 *)a6 + 92741;
    }
    if ( (unsigned __int64)v8 >= v14 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = v8 + 1;
          v19 = v8;
          v20 = &a6[2 * *v8];
          v21 = v8[2] + 4 * (unsigned int)v8[1];
          v22 = *(unsigned __int8 **)&v20[4 * v21];
          *(_QWORD *)&v20[4 * v21] = v8;
          if ( *(_WORD *)v22 != *(_WORD *)v8 || v22[2] != v8[2] || v8 - v22 >= 0x10000 )
            break;
          v23 = v8[3];
          v24 = v22[3];
          v63 = v8 + 3;
          if ( v23 != v24 )
          {
            v47 = *v8 + 2 * v21;
            v48 = *(unsigned __int8 **)&a6[2 * v47 + 5612 + 2 * v23];
            *(_QWORD *)&a6[2 * v47 + 5612 + 2 * v24] = v22;
            if ( v8 - v48 >= 0x10000 || *(_DWORD *)v8 != *(_DWORD *)v48 )
            {
              v8 += 3;
              v30 = v22 + 3;
              goto LABEL_21;
            }
            v22 = v48;
            *(_QWORD *)&a6[2 * v47 + 5612 + 2 * (unsigned __int8)HIBYTE(*(_DWORD *)v8)] = v8;
          }
          v25 = v22[4];
          v26 = v8 + 4;
          v27 = v8[4];
          v64 = (char *)(v8 + 4);
          if ( v27 != v25 )
          {
            v49 = 2
                * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(*v8 + *v63, 3), 1)
                 + 4 * (unsigned int)(unsigned __int8)__ROL1__(*v8 ^ __ROR1__(v8[2] + *v18 + 97, 1), 3));
            v50 = *(unsigned __int8 **)&a6[2 * v49 + 5612 + 2 * v27];
            *(_QWORD *)&a6[2 * v49 + 5612 + 2 * v25] = v22;
            if ( v8 - v50 >= 0x10000 || *(_DWORD *)v8 != *(_DWORD *)v50 || *v26 != v50[4] || v8 == v50 )
            {
              v8 += 4;
              v30 = v22 + 4;
              goto LABEL_21;
            }
            v22 = v50;
            *(_QWORD *)&a6[2 * v49 + 5612 + 2 * (unsigned __int8)*v26] = v8;
          }
          v28 = v22[5];
          v29 = v8[5];
          if ( v29 != v28 )
          {
            v51 = 2
                * ((v8[2] ^ (unsigned __int8)__ROL1__(*v8, *v64))
                 + 4
                 * ((unsigned __int8)__ROR1__(*v18 ^ __ROL1__(*v63, 3), 1)
                  + (unsigned __int8)__ROL1__(*v64 ^ (__ROR1__(*v8, 1) + 69), 3)));
            v52 = *(unsigned __int8 **)&a6[2 * v51 + 5612 + 2 * v29];
            *(_QWORD *)&a6[2 * v51 + 5612 + 2 * v28] = v22;
            if ( v8 - v52 >= 0x10000
              || *(_DWORD *)v8 != *(_DWORD *)v52
              || *v64 != v52[4]
              || (v56 = v8[5], v56 != v52[5])
              || v8 == v52 )
            {
              v8 += 5;
              v30 = v22 + 5;
              goto LABEL_21;
            }
            v22 = v52;
            *(_QWORD *)&a6[2 * v51 + 5612 + 2 * v56] = v8;
          }
          v8 += 6;
          v30 = v22 + 6;
          if ( (unsigned __int64)v8 >= v62 - 40 )
          {
LABEL_59:
            while ( (unsigned __int64)v8 < v62 )
            {
              if ( *v8 != *v30 )
                break;
              ++v8;
              ++v30;
            }
          }
          else
          {
            while ( 1 )
            {
              v31 = *(_DWORD *)v30;
              v32 = *(_DWORD *)v8;
              if ( *(_DWORD *)v8 != *(_DWORD *)v30 )
                break;
              v31 = *((_DWORD *)v30 + 1);
              v32 = *((_DWORD *)v8 + 1);
              if ( v32 != v31 )
              {
                v8 += 4;
                v30 += 4;
                break;
              }
              v31 = *((_DWORD *)v30 + 2);
              v32 = *((_DWORD *)v8 + 2);
              if ( v32 != v31 )
              {
                v8 += 8;
                v30 += 8;
                break;
              }
              v31 = *((_DWORD *)v30 + 3);
              v32 = *((_DWORD *)v8 + 3);
              if ( v32 != v31 )
              {
                v8 += 12;
                v30 += 12;
                break;
              }
              v31 = *((_DWORD *)v30 + 4);
              v32 = *((_DWORD *)v8 + 4);
              if ( v32 != v31 )
              {
                v8 += 16;
                v30 += 16;
                break;
              }
              v31 = *((_DWORD *)v30 + 5);
              v32 = *((_DWORD *)v8 + 5);
              if ( v32 != v31 )
              {
                v8 += 20;
                v30 += 20;
                break;
              }
              v31 = *((_DWORD *)v30 + 6);
              v32 = *((_DWORD *)v8 + 6);
              if ( v32 != v31 )
              {
                v8 += 24;
                v30 += 24;
                break;
              }
              v31 = *((_DWORD *)v30 + 7);
              v32 = *((_DWORD *)v8 + 7);
              if ( v32 != v31 )
              {
                v8 += 28;
                v30 += 28;
                break;
              }
              v8 += 32;
              v30 += 32;
              if ( (unsigned __int64)v8 >= v62 - 40 )
                goto LABEL_59;
            }
            if ( (_BYTE)v32 == (_BYTE)v31 )
            {
              if ( v8[1] == v30[1] )
              {
                if ( v8[2] == v30[2] )
                {
                  v8 += 3;
                  v30 += 3;
                }
                else
                {
                  v8 += 2;
                  v30 += 2;
                }
              }
              else
              {
                ++v8;
                ++v30;
              }
            }
          }
LABEL_21:
          v33 = v8 - v30;
          if ( v8 - v19 == 3 && v33 > 0x1000 )
          {
            v12 = v73;
            v14 = v59;
            break;
          }
          if ( v33 >= 0x100 )
            v34 = (unsigned int)byte_180119CE0[v33 >> 8] + 8;
          else
            v34 = byte_180119CE0[v33];
          v10 = v34 + v60;
          v35 = v33 - (1LL << v34);
          v36 = 16 * v34;
          v37 = v8 - v19 - 3;
          v60 = v10;
          v38 = v15 + 1;
          if ( v37 >= 0xF )
          {
            v39 = v36 + 15;
            v54 = v8 - v19 - 18;
            *v15 = v39;
            v40 = v15 + 2;
            if ( v54 >= 0xFF )
            {
              v57 = v54 + 15;
              *v38 = -1;
              if ( v57 < 0x10000 )
              {
                *v40 = v57;
                v40 = v38 + 3;
                v61 += 3LL;
                goto LABEL_26;
              }
              *v40 = 0;
              v40 = v38 + 7;
              *(_DWORD *)(v38 + 3) = v57;
              v55 = 7LL;
            }
            else
            {
              *v38 = v54;
              v55 = 1LL;
            }
            v61 += v55;
          }
          else
          {
            v39 = v37 + v36;
            *v15 = v39;
            v40 = v15 + 1;
          }
LABEL_26:
          ++a6[v39 + 22864];
          v41 = 2 * v16 + 1;
          *v40 = v35;
          v15 = (unsigned __int8 *)(v40 + 1);
          if ( v16 <= 0 )
          {
            v53 = (int *)v73;
            v16 = 1;
            v73 = v15;
            v15 += 4;
            *v53 = v41;
          }
          else
          {
            v16 = 2 * v16 + 1;
          }
          v12 = v73;
          v14 = v59;
          if ( (unsigned __int64)v8 >= v74 )
          {
            if ( (unsigned __int64)v8 >= v59 )
              goto LABEL_30;
            v58 = v8;
LABEL_100:
            v74 = sub_180104190(v69, v14, v58);
          }
        }
        v8 = v18;
        ++a6[*v19 + 22608];
        *v15++ = *v19;
        if ( v16 <= 0 )
          break;
        v16 *= 2;
      }
      *(_DWORD *)v12 = 2 * v16;
      v16 = 1;
      v12 = v15;
      v73 = v15;
      v15 += 4;
    }
    while ( (unsigned __int64)v18 < v74 );
    if ( (unsigned __int64)v18 < v14 )
    {
      v58 = v18;
      goto LABEL_100;
    }
    v10 = v60;
LABEL_30:
    v11 = v61;
    v13 = v66;
LABEL_31:
    while ( v8 < v13 )
    {
      ++a6[*v8 + 22608];
      v42 = *v8++;
      *v15++ = v42;
      if ( v16 <= 0 )
      {
        *(_DWORD *)v12 = 2 * v16;
        v16 = 1;
        v12 = v15;
        v15 += 4;
      }
      else
      {
        v16 *= 2;
      }
    }
    for ( ; v16 > 0; v16 = 2 * v16 + 1 )
      ;
    *(_DWORD *)v12 = 2 * v16 + 1;
    if ( (unsigned __int64)v8 < v62 )
    {
      v43 = 0;
    }
    else
    {
      ++a6[22864];
      v43 = 1;
    }
    if ( v11 + 4 * ((unsigned __int64)(v10 + sub_180064DE8(a6 + 15304) + 31) >> 5) + v65 + 258 < v67 )
    {
      v44 = sub_180064B00((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v15, v65, v43);
      v7 = v62;
      v9 = a6 + 22608;
      v45 = v43 == 0;
      v65 = v44;
      v6 = v68;
      if ( !v45 )
      {
        *a5 = v44 - v72;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
