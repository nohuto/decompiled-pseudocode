/*
 * XREFs of PnpiAddSidebandResources @ 0x1C00A4CA4
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C008C458 (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     memcmp @ 0x1C002C090 (memcmp.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     PnpiValidateSidebandResources @ 0x1C00A5F68 (PnpiValidateSidebandResources.c)
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
  unsigned int *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned int v11; // edi
  unsigned int *v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // r11d
  unsigned int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // xmm0_8
  unsigned int v21; // eax
  unsigned int v22; // r9d
  unsigned int v23; // edx
  __int64 v24; // rcx
  BOOL v25; // ecx
  _DWORD *v26; // r9
  char v27; // r10
  char *v28; // r13
  unsigned int v29; // esi
  unsigned int v30; // eax
  bool v31; // bp
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  unsigned int v35; // r12d
  _OWORD *v36; // rbp
  __int64 v37; // rax
  unsigned int v38; // eax
  char *v39; // rcx
  unsigned int v40; // esi
  unsigned int v41; // r13d
  bool v42; // zf
  __int64 v43; // rax
  char v44; // [rsp+20h] [rbp-98h]
  unsigned int v45; // [rsp+24h] [rbp-94h]
  int v46; // [rsp+28h] [rbp-90h]
  unsigned int v47; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v48; // [rsp+30h] [rbp-88h]
  int v49; // [rsp+34h] [rbp-84h]
  int v50; // [rsp+38h] [rbp-80h]
  int v51; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v52; // [rsp+40h] [rbp-78h]
  _DWORD *v53; // [rsp+48h] [rbp-70h]
  unsigned int v54; // [rsp+50h] [rbp-68h]
  unsigned int v55; // [rsp+54h] [rbp-64h]
  __int64 v56; // [rsp+58h] [rbp-60h]
  char *v57; // [rsp+60h] [rbp-58h]

  v6 = 0;
  v47 = 0;
  v7 = a3;
  v45 = *a4;
  v8 = a2;
  v49 = 0;
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
  v15 = 40LL;
  v48 = v14;
  if ( v14 >= 0x28 )
  {
    memset(a5, 0, 0x28uLL);
    v15 = 40LL;
    *((_DWORD *)a5 + 1) = 0;
  }
  v16 = v8 + 32;
  v17 = 8;
  v18 = 0;
  v46 = 8;
  v56 = v8 + 32;
  v52 = 0;
  if ( *(_DWORD *)(v8 + 28) )
  {
    while ( 1 )
    {
      if ( v18 )
      {
        v21 = *(_DWORD *)(v16 + 4);
        if ( v21 > 1 )
        {
          v15 = 32LL * (v21 - 1);
          v16 += 40LL;
        }
        v16 += v15;
        v56 = v16;
      }
      else
      {
        v19 = v11 + 72;
        if ( v45 >= v19 )
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
      {
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
            goto LABEL_28;
        }
      }
      else
      {
LABEL_28:
        if ( (unsigned int)++v50 > 1 )
          goto LABEL_71;
      }
      v25 = 1;
      if ( v9 )
      {
        v26 = (_DWORD *)(v9 + 32);
        v53 = (_DWORD *)(v9 + 32);
        v25 = *(_DWORD *)(v9 + 28) != 0;
      }
      else
      {
        v26 = 0LL;
        v53 = 0LL;
      }
      v27 = 1;
      v44 = 1;
      v55 = v25 + v47;
      if ( v47 < v25 + v47 )
      {
        do
        {
          v28 = (char *)v7 + v10;
          v29 = 40;
          v57 = (char *)v7 + v10;
          if ( v26 )
          {
            v30 = v26[1];
            v31 = 0;
            if ( v30 <= 1 )
              v31 = v30 == 0;
            else
              v29 = 32 * v30 + 8;
            if ( v45 >= v29 + v11 )
            {
              memmove((char *)v7 + v10, v26, v29);
              v17 = v46;
              v26 = v53;
              v27 = v44;
              *((_DWORD *)v28 + 1) = 0;
            }
            v32 = v26[1];
            v33 = v29 - 32;
            v26 = (_DWORD *)((char *)v26 + v29);
            v53 = v26;
            if ( !v31 )
              v33 = v29;
          }
          else
          {
            if ( v45 >= v11 + 40 )
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
          v51 = 0;
          v34 = 0;
          if ( *(_DWORD *)(v16 + 4) )
          {
            v35 = v45;
            do
            {
              v36 = (_OWORD *)(32LL * v34 + v16 + 8);
              if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
                && *((_BYTE *)v36 + 1) != 2
                || *((_DWORD *)v36 + 2) == *((_DWORD *)v36 + 3) )
              {
                v11 += 32;
                if ( v35 >= v11 )
                {
                  v37 = 32LL * v32;
                  *(_OWORD *)&v28[v37 + 8] = *v36;
                  *(_OWORD *)&v28[v37 + 24] = v36[1];
                }
                ++v49;
                ++v32;
                v10 += 32LL;
                v54 = v32;
                if ( v27 )
                {
                  v38 = v48;
                  if ( v48 < 0x28 )
                  {
                    v17 += 32;
                    v46 = v17;
                  }
                  else
                  {
                    v39 = a5;
                    v40 = 0;
                    v41 = *((_DWORD *)a5 + 1);
                    if ( v41 )
                    {
                      do
                      {
                        if ( !memcmp(&a5[32 * v40 + 8], v36, 0x20uLL) )
                          break;
                        ++v40;
                      }
                      while ( v40 < v41 );
                      v16 = v56;
                      v32 = v54;
                      v34 = v51;
                      v27 = v44;
                      v35 = v45;
                      v39 = a5;
                      v38 = v48;
                    }
                    v17 = v46;
                    v42 = v40 == v41;
                    v28 = v57;
                    if ( v42 )
                    {
                      v17 = v46 + 32;
                      v46 = v17;
                      if ( v38 >= v17 )
                      {
                        v43 = 32LL * v40;
                        *(_OWORD *)&v39[v43 + 8] = *v36;
                        *(_OWORD *)&v39[v43 + 24] = v36[1];
                        ++*((_DWORD *)v39 + 1);
                      }
                    }
                  }
                }
              }
              v51 = ++v34;
            }
            while ( v34 < *(_DWORD *)(v16 + 4) );
            v7 = a3;
            v26 = v53;
          }
          if ( !v32 )
          {
            v10 += 32LL;
            v11 += 32;
          }
          if ( v45 >= v11 )
            *((_DWORD *)v28 + 1) = v32;
          v44 = 0;
          v27 = 0;
          ++v47;
        }
        while ( v47 < v55 );
        v9 = a1;
        v8 = a2;
      }
LABEL_71:
      v18 = v52 + 1;
      v52 = v18;
      if ( v18 >= *(_DWORD *)(v8 + 28) )
      {
        v13 = a6;
        break;
      }
      v15 = 40LL;
    }
  }
  if ( v13 )
  {
    if ( v17 < 0x28 )
      v17 = 40;
    *v13 = v17;
  }
  if ( v49 )
  {
    if ( v11 <= v45 )
    {
      v7[7] = v47;
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
