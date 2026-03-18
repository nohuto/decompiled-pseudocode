/*
 * XREFs of PnpiAddSidebandResources @ 0x1C00A204C
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C008C0D8 (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     memcmp @ 0x1C002C670 (memcmp.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     PnpiValidateSidebandResources @ 0x1C00A331C (PnpiValidateSidebandResources.c)
 */

__int64 __fastcall PnpiAddSidebandResources(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        char *a5,
        int *a6)
{
  unsigned int v6; // ebx
  unsigned int *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned int v11; // edi
  int *v13; // r13
  unsigned int v14; // eax
  int v15; // r11d
  __int64 v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edi
  __int64 v20; // xmm0_8
  unsigned int v21; // eax
  unsigned int v22; // r9d
  unsigned int v23; // edx
  __int64 v24; // rcx
  int v25; // ecx
  _DWORD *v26; // r9
  char v27; // r10
  char *v28; // r13
  unsigned int v29; // esi
  unsigned int v30; // eax
  bool v31; // bp
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // esi
  unsigned int v35; // r8d
  unsigned int v36; // r12d
  _OWORD *v37; // rbp
  __int64 v38; // rax
  unsigned int v39; // eax
  char *v40; // rcx
  unsigned int v41; // esi
  unsigned int v42; // r13d
  bool v43; // zf
  __int64 v44; // rax
  char v45; // [rsp+20h] [rbp-98h]
  unsigned int v46; // [rsp+24h] [rbp-94h]
  int v47; // [rsp+28h] [rbp-90h]
  unsigned int v48; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v49; // [rsp+30h] [rbp-88h]
  int v50; // [rsp+34h] [rbp-84h]
  int v51; // [rsp+38h] [rbp-80h]
  int v52; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v53; // [rsp+40h] [rbp-78h]
  _DWORD *v54; // [rsp+48h] [rbp-70h]
  unsigned int v55; // [rsp+50h] [rbp-68h]
  unsigned int v56; // [rsp+54h] [rbp-64h]
  __int64 v57; // [rsp+58h] [rbp-60h]
  char *v58; // [rsp+60h] [rbp-58h]

  v6 = 0;
  v48 = 0;
  v7 = a3;
  v46 = *a4;
  v8 = a2;
  v50 = 0;
  v9 = a1;
  v51 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( a1 && !(unsigned __int8)PnpiValidateSidebandResources() )
    return 3221225524LL;
  v13 = a6;
  if ( a6 )
    v14 = *a6;
  else
    v14 = 0;
  v15 = 40;
  v49 = v14;
  if ( v14 >= 0x28 )
  {
    memset(a5, 0, 0x28uLL);
    v15 = 40;
    *((_DWORD *)a5 + 1) = 0;
  }
  v16 = v8 + 32;
  v17 = 8;
  v18 = 0;
  v47 = 8;
  v57 = v8 + 32;
  v53 = 0;
  if ( *(_DWORD *)(v8 + 28) )
  {
    while ( 1 )
    {
      if ( v18 )
      {
        v21 = *(_DWORD *)(v16 + 4);
        v16 += v21 <= 1 ? 40LL : 32LL * (v21 - 1) + 40;
        v57 = v16;
      }
      else
      {
        v19 = v11 + 72;
        if ( v46 >= v19 )
        {
          if ( v9 )
          {
            *(_OWORD *)((char *)v7 + v10) = *(_OWORD *)v9;
            *(_OWORD *)((char *)v7 + v10 + 16) = *(_OWORD *)(v9 + 16);
            *(_OWORD *)((char *)v7 + v10 + 32) = *(_OWORD *)(v9 + 32);
            *(_OWORD *)((char *)v7 + v10 + 48) = *(_OWORD *)(v9 + 48);
            v20 = *(_QWORD *)(v9 + 64);
          }
          else
          {
            *(_OWORD *)((char *)v7 + v10) = *(_OWORD *)v8;
            *(_OWORD *)((char *)v7 + v10 + 16) = *(_OWORD *)(v8 + 16);
            *(_OWORD *)((char *)v7 + v10 + 32) = *(_OWORD *)(v8 + 32);
            *(_OWORD *)((char *)v7 + v10 + 48) = *(_OWORD *)(v8 + 48);
            v20 = *(_QWORD *)(v8 + 64);
          }
          *(_QWORD *)((char *)v7 + v10 + 64) = v20;
          v7[7] = 0;
        }
        v11 = v19 - 40;
        v10 += 32LL;
      }
      v22 = *(_DWORD *)(v16 + 4);
      v23 = 0;
      if ( v22 )
        break;
LABEL_27:
      if ( (unsigned int)++v51 <= 1 )
        goto LABEL_28;
LABEL_72:
      v18 = v53 + 1;
      v53 = v18;
      if ( v18 >= *(_DWORD *)(v8 + 28) )
      {
        v17 = v47;
        v13 = a6;
        goto LABEL_74;
      }
    }
    while ( 1 )
    {
      v24 = 32LL * v23;
      if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
        && *(_BYTE *)(v24 + v16 + 9) != 2 )
      {
        break;
      }
      if ( *(_DWORD *)(v24 + v16 + 16) == *(_DWORD *)(v24 + v16 + 20) )
        break;
      if ( ++v23 >= v22 )
        goto LABEL_27;
    }
LABEL_28:
    v25 = 1;
    if ( v9 )
    {
      v26 = (_DWORD *)(v9 + 32);
      v54 = (_DWORD *)(v9 + 32);
      if ( !*(_DWORD *)(v9 + 28) )
        v25 = *(_DWORD *)(v9 + 28);
    }
    else
    {
      v26 = 0LL;
      v54 = 0LL;
    }
    v27 = 1;
    v45 = 1;
    v56 = v25 + v48;
    if ( v48 < v25 + v48 )
    {
      do
      {
        v28 = (char *)v7 + v10;
        v29 = 40;
        v58 = (char *)v7 + v10;
        if ( v26 )
        {
          v30 = v26[1];
          v31 = 0;
          if ( v30 <= 1 )
            v31 = v30 == 0;
          else
            v29 = 32 * v30 + 8;
          if ( v46 >= v29 + v11 )
          {
            memmove((char *)v7 + v10, v26, v29);
            v26 = v54;
            v15 = 40;
            v27 = v45;
            *((_DWORD *)v28 + 1) = 0;
          }
          v32 = v26[1];
          v33 = v29 - 32;
          v26 = (_DWORD *)((char *)v26 + v29);
          v54 = v26;
          if ( !v31 )
            v33 = v29;
          v34 = v46;
        }
        else
        {
          v34 = v46;
          if ( v46 >= v11 + 40 )
          {
            *(_WORD *)v28 = *(_WORD *)v16;
            *((_WORD *)v28 + 1) = *(_WORD *)(v16 + 2);
            *((_DWORD *)v28 + 1) = 0;
          }
          v32 = 0;
          v33 = 8;
        }
        v11 += v33;
        v10 += v33;
        v52 = 0;
        v35 = 0;
        if ( *(_DWORD *)(v16 + 4) )
        {
          v36 = v47;
          do
          {
            v37 = (_OWORD *)(32LL * v35 + v16 + 8);
            if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
              && *((_BYTE *)v37 + 1) != 2
              || *((_DWORD *)v37 + 2) == *((_DWORD *)v37 + 3) )
            {
              v11 += 32;
              if ( v34 >= v11 )
              {
                v38 = 32LL * v32;
                *(_OWORD *)&v28[v38 + 8] = *v37;
                *(_OWORD *)&v28[v38 + 24] = v37[1];
              }
              ++v50;
              ++v32;
              v10 += 32LL;
              v55 = v32;
              if ( v27 )
              {
                v39 = v49;
                if ( v49 < 0x28 )
                {
                  v36 += 32;
                  v47 = v36;
                }
                else
                {
                  v40 = a5;
                  v41 = 0;
                  v42 = *((_DWORD *)a5 + 1);
                  if ( v42 )
                  {
                    do
                    {
                      if ( !memcmp(&a5[32 * v41 + 8], v37, 0x20uLL) )
                        break;
                      ++v41;
                    }
                    while ( v41 < v42 );
                    v16 = v57;
                    v15 = 40;
                    v32 = v55;
                    v35 = v52;
                    v27 = v45;
                    v36 = v47;
                    v40 = a5;
                    v39 = v49;
                  }
                  v43 = v41 == v42;
                  v28 = v58;
                  if ( v43 )
                  {
                    v36 += 32;
                    v47 = v36;
                    if ( v39 >= v36 )
                    {
                      v44 = 32LL * v41;
                      *(_OWORD *)&v40[v44 + 8] = *v37;
                      *(_OWORD *)&v40[v44 + 24] = v37[1];
                      ++*((_DWORD *)v40 + 1);
                    }
                  }
                }
              }
            }
            v34 = v46;
            v52 = ++v35;
          }
          while ( v35 < *(_DWORD *)(v16 + 4) );
          v7 = a3;
          v26 = v54;
        }
        if ( !v32 )
        {
          v10 += 32LL;
          v11 += 32;
        }
        if ( v46 >= v11 )
          *((_DWORD *)v28 + 1) = v32;
        v45 = 0;
        v27 = 0;
        ++v48;
      }
      while ( v48 < v56 );
      v9 = a1;
      v8 = a2;
    }
    goto LABEL_72;
  }
LABEL_74:
  if ( v13 )
  {
    if ( v17 >= 0x28 )
      v15 = v17;
    *v13 = v15;
  }
  if ( v50 )
  {
    if ( v11 <= v46 )
    {
      v7[7] = v48;
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
