/*
 * XREFs of PnpiAddSidebandResources @ 0x1C0083E18
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0083A6C (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     memcmp @ 0x1C00040F0 (memcmp.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     PnpiValidateSidebandResources @ 0x1C0086024 (PnpiValidateSidebandResources.c)
 */

__int64 __fastcall PnpiAddSidebandResources(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        char *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  unsigned int *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned int v11; // edi
  unsigned int *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ebp
  unsigned int v20; // edi
  __int64 v21; // xmm0_8
  unsigned int v22; // eax
  unsigned int v23; // r9d
  char v24; // r10
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // ecx
  _DWORD *v28; // rdx
  char v29; // r8
  unsigned int v30; // r9d
  _WORD *v31; // r13
  unsigned int v32; // esi
  unsigned int v33; // ebp
  bool v34; // r15
  unsigned int v35; // ecx
  unsigned int v36; // edi
  __int64 v37; // r14
  unsigned int i; // edx
  _OWORD *v39; // r15
  __int64 v40; // rax
  unsigned int v41; // r10d
  char *v42; // rcx
  unsigned int v43; // esi
  unsigned int v44; // r13d
  bool v45; // zf
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  char v49; // [rsp+20h] [rbp-98h]
  unsigned int v50; // [rsp+24h] [rbp-94h]
  unsigned int v51; // [rsp+28h] [rbp-90h]
  unsigned int v52; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v53; // [rsp+30h] [rbp-88h]
  unsigned int v54; // [rsp+34h] [rbp-84h]
  int v55; // [rsp+38h] [rbp-80h]
  unsigned int v56; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v57; // [rsp+40h] [rbp-78h]
  _DWORD *v58; // [rsp+48h] [rbp-70h]
  unsigned int v59; // [rsp+54h] [rbp-64h]
  __int64 v60; // [rsp+58h] [rbp-60h]
  _WORD *v61; // [rsp+60h] [rbp-58h]

  v6 = 0;
  v53 = 0;
  v7 = a3;
  v52 = *a4;
  v8 = a2;
  v55 = 0;
  v9 = a1;
  v50 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( a1 && !(unsigned __int8)PnpiValidateSidebandResources() )
    return 3221225524LL;
  v13 = a6;
  if ( a6 )
    v14 = *a6;
  else
    v14 = 0;
  v54 = v14;
  if ( v14 >= 0x28 )
  {
    memset(a5, 0, 0x28uLL);
    *((_DWORD *)a5 + 1) = 0;
  }
  v15 = v8 + 32;
  v16 = 8;
  v17 = 0;
  v51 = 8;
  v60 = v8 + 32;
  v57 = 0;
  if ( *(_DWORD *)(v8 + 28) )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = v18;
      if ( v17 )
      {
        v22 = *(_DWORD *)(v15 + 4);
        v15 += v22 <= 1 ? 40LL : 32LL * (v22 - 1) + 40;
        v18 = v50;
        v60 = v15;
      }
      else
      {
        v20 = v11 + 72;
        if ( v52 >= v20 )
        {
          if ( v9 )
          {
            *(_OWORD *)((char *)v7 + v10) = *(_OWORD *)v9;
            *(_OWORD *)((char *)v7 + v10 + 16) = *(_OWORD *)(v9 + 16);
            *(_OWORD *)((char *)v7 + v10 + 32) = *(_OWORD *)(v9 + 32);
            *(_OWORD *)((char *)v7 + v10 + 48) = *(_OWORD *)(v9 + 48);
            v21 = *(_QWORD *)(v9 + 64);
          }
          else
          {
            *(_OWORD *)((char *)v7 + v10) = *(_OWORD *)v8;
            *(_OWORD *)((char *)v7 + v10 + 16) = *(_OWORD *)(v8 + 16);
            *(_OWORD *)((char *)v7 + v10 + 32) = *(_OWORD *)(v8 + 32);
            *(_OWORD *)((char *)v7 + v10 + 48) = *(_OWORD *)(v8 + 48);
            v21 = *(_QWORD *)(v8 + 64);
          }
          *(_QWORD *)((char *)v7 + v10 + 64) = v21;
          v7[7] = 0;
        }
        v11 = v20 - 40;
        v10 += 32LL;
      }
      v23 = *(_DWORD *)(v15 + 4);
      v24 = 0;
      v25 = 0;
      if ( v23 )
        break;
LABEL_29:
      v50 = ++v18;
      if ( v18 <= 1 )
        goto LABEL_30;
LABEL_78:
      v17 = v57 + 1;
      v57 = v17;
      if ( v17 >= *(_DWORD *)(v8 + 28) )
      {
        v16 = v51;
        v13 = a6;
        goto LABEL_80;
      }
    }
    while ( 1 )
    {
      v26 = 32LL * v25;
      if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
        && *(_BYTE *)(v26 + v15 + 9) != 2 )
      {
        break;
      }
      if ( *(_DWORD *)(v26 + v15 + 16) == *(_DWORD *)(v26 + v15 + 20) )
        break;
      if ( ++v25 >= v23 )
      {
        v18 = v50;
        goto LABEL_29;
      }
    }
    v24 = 1;
LABEL_30:
    v18 = v19 + 1;
    v27 = 1;
    if ( v24 )
      v18 = v19;
    v50 = v18;
    if ( v9 )
    {
      v28 = (_DWORD *)(v9 + 32);
      if ( !*(_DWORD *)(v9 + 28) )
        v27 = 0;
    }
    else
    {
      v28 = 0LL;
    }
    v29 = 1;
    v58 = v28;
    v59 = v53 + v27;
    v49 = 1;
    if ( v53 < v53 + v27 )
    {
      v30 = v52;
      do
      {
        v31 = (_WORD *)((char *)v7 + v10);
        v32 = 40;
        v61 = v31;
        if ( v28 )
        {
          v33 = v28[1];
          v34 = 0;
          if ( v33 <= 1 )
            v34 = v33 == 0;
          else
            v32 = 32 * v33 + 8;
          if ( v30 >= v32 + v11 )
          {
            memmove(v31, v28, v32);
            v28 = v58;
            v29 = v49;
            v30 = v52;
            *((_DWORD *)v31 + 1) = 0;
            v33 = v58[1];
          }
          v35 = v32 - 32;
          v58 = (_DWORD *)((char *)v28 + v32);
          if ( !v34 )
            v35 = v32;
        }
        else
        {
          if ( v30 >= v11 + 40 )
          {
            *v31 = *(_WORD *)v15;
            v31[1] = *(_WORD *)(v15 + 2);
            *((_DWORD *)v31 + 1) = 0;
          }
          v33 = 0;
          v35 = 8;
        }
        v36 = v35 + v11;
        v37 = v35 + v10;
        v56 = 0;
        for ( i = 0; i < *(_DWORD *)(v15 + 4); v56 = i )
        {
          v39 = (_OWORD *)(32LL * i + v15 + 8);
          if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
            && *((_BYTE *)v39 + 1) != 2
            || *((_DWORD *)v39 + 2) == *((_DWORD *)v39 + 3) )
          {
            v36 += 32;
            if ( v30 >= v36 )
            {
              v40 = 16LL * v33;
              *(_OWORD *)&v31[v40 + 4] = *v39;
              *(_OWORD *)&v31[v40 + 12] = v39[1];
            }
            ++v55;
            ++v33;
            v37 += 32LL;
            if ( v29 )
            {
              v41 = v54;
              if ( v54 < 0x28 )
              {
                v51 += 32;
              }
              else
              {
                v42 = a5;
                v43 = 0;
                v44 = *((_DWORD *)a5 + 1);
                if ( v44 )
                {
                  do
                  {
                    if ( !memcmp(&a5[32 * v43 + 8], v39, 0x20uLL) )
                      break;
                    ++v43;
                  }
                  while ( v43 < v44 );
                  v15 = v60;
                  i = v56;
                  v29 = v49;
                  v30 = v52;
                  v42 = a5;
                  v41 = v54;
                }
                v45 = v43 == v44;
                v31 = v61;
                if ( v45 )
                {
                  v51 += 32;
                  if ( v41 >= v51 )
                  {
                    v46 = 32LL * v43;
                    *(_OWORD *)&v42[v46 + 8] = *v39;
                    *(_OWORD *)&v42[v46 + 24] = v39[1];
                    ++*((_DWORD *)v42 + 1);
                  }
                }
              }
            }
          }
          ++i;
        }
        v47 = v36 + 32;
        if ( v33 )
          v47 = v36;
        v11 = v47;
        v48 = v37 + 32;
        if ( v33 )
          v48 = v37;
        v10 = v48;
        if ( v30 >= v11 )
          *((_DWORD *)v31 + 1) = v33;
        v29 = 0;
        v7 = a3;
        v28 = v58;
        v49 = 0;
        ++v53;
      }
      while ( v53 < v59 );
      v18 = v50;
      v9 = a1;
      v8 = a2;
    }
    goto LABEL_78;
  }
LABEL_80:
  if ( v13 )
  {
    if ( v16 < 0x28 )
      v16 = 40;
    *v13 = v16;
  }
  if ( v55 )
  {
    if ( v11 <= v52 )
    {
      v7[7] = v53;
      *v7 = v11;
    }
    else
    {
      v6 = -1073741789;
      *a4 = v11;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v6;
}
