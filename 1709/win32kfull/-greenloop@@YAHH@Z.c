/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C00C3EB0
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C00C3D68 (-redloop@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // r10d
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  int v5; // eax
  int v6; // ecx
  int v7; // r12d
  int v8; // ebx
  int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // rdi
  int v12; // eax
  int v13; // ebp
  int v14; // r11d
  int v15; // eax
  int v16; // r8d
  int v17; // ebx
  _BYTE *v18; // r9
  int v19; // edx
  int v20; // r14d
  int v21; // esi
  unsigned int v22; // ecx
  unsigned int *v23; // rax
  char v24; // di
  unsigned int *v25; // rcx
  int v26; // r8d
  int v27; // edx
  unsigned int v28; // eax
  _BYTE *v29; // r9
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rdi
  int v33; // r8d
  __int64 v34; // rsi
  int v35; // edx
  int v36; // r14d
  int v37; // r12d
  __int64 v38; // r13
  int v39; // eax
  int v40; // eax
  int v41; // r8d
  int v42; // r11d
  int v43; // r15d
  int v44; // edx
  unsigned int v45; // eax
  int v46; // ebx
  unsigned int *v47; // rcx
  _BYTE *v48; // r9
  unsigned int *v49; // rcx
  _BYTE *v50; // r9
  int v51; // r8d
  unsigned int v52; // eax
  int v53; // edx
  unsigned int v54; // r11d
  __int64 v55; // rcx
  int v56; // r15d
  char v57; // r10
  int v58; // r15d
  int v59; // ecx
  char v60; // r10
  int v61; // eax
  int v63; // [rsp+0h] [rbp-78h]
  int v64; // [rsp+4h] [rbp-74h]
  int v65; // [rsp+8h] [rbp-70h]
  int v66; // [rsp+Ch] [rbp-6Ch]
  __int64 v67; // [rsp+10h] [rbp-68h]
  __int64 v68; // [rsp+18h] [rbp-60h]
  __int64 v69; // [rsp+20h] [rbp-58h]
  int v70; // [rsp+80h] [rbp+8h]
  unsigned int v71; // [rsp+80h] [rbp+8h]
  int v72; // [rsp+88h] [rbp+10h]
  int v73; // [rsp+88h] [rbp+10h]
  int v74; // [rsp+90h] [rbp+18h]
  int v75; // [rsp+98h] [rbp+20h]

  v1 = 2 * dword_1C0327A0C;
  v66 = 2 * dword_1C0327A0C;
  if ( a1 )
  {
    v2 = dword_1C03279B0;
    v5 = 0;
    v3 = dword_1C03279C8;
    v4 = 31;
    dword_1C0327D30 = 0;
    dword_1C0327D34 = 31;
    dword_1C0327D3C = 0;
    dword_1C0327D2C = dword_1C03279B0;
    dword_1C0327D38 = dword_1C03279C8;
    dword_1C0327D40 = 32;
  }
  else
  {
    v2 = dword_1C0327D2C;
    v3 = dword_1C0327D38;
    v4 = dword_1C0327D34;
    v5 = dword_1C0327D30;
  }
  v6 = dword_1C03279BC;
  v7 = dword_1C03279BC;
  v8 = dword_1C03279AC;
  v9 = v3;
  v64 = v5;
  v68 = qword_1C03279D8;
  v10 = qword_1C03279D8;
  v67 = qword_1C03279F0;
  v11 = qword_1C03279F0;
  v69 = qword_1C03279F0;
  v12 = 1;
  v13 = dword_1C0327D68;
  v72 = v3;
  v65 = v4;
  v74 = 0;
  v75 = v2;
  v70 = dword_1C03279BC;
  v63 = dword_1C03279BC;
  if ( v2 > v4 )
    goto LABEL_29;
  v14 = dword_1C0327D64;
  while ( 1 )
  {
    if ( v12 )
    {
      v14 = 0;
      v13 = 31;
      dword_1C0327D64 = 0;
      dword_1C0327D68 = 31;
      v15 = v8;
      dword_1C0327D74 = 0;
      dword_1C0327D60 = v8;
      dword_1C0327D6C = dword_1C03279C4;
      dword_1C0327D70 = 32;
    }
    else
    {
      v15 = dword_1C0327D60;
    }
    v16 = dword_1C0327D6C;
    v17 = 0;
    v18 = (_BYTE *)v11;
    v19 = v15;
    v20 = v14;
    v21 = v13;
    v22 = v7;
    v23 = (unsigned int *)v10;
    if ( dword_1C0327D60 > v13 )
      goto LABEL_10;
    while ( *v23 <= v22 )
    {
      v22 += v16;
      ++v19;
      v16 += v1;
      ++v23;
      ++v18;
      if ( v19 > v13 )
        goto LABEL_10;
    }
    if ( v19 > dword_1C0327D60 )
    {
      dword_1C0327D60 = v19;
      v10 = (__int64)v23;
      v67 = (__int64)v18;
      v7 = v22;
      dword_1C0327D6C = v16;
      v20 = v19;
    }
    v17 = 1;
    if ( v19 > v13 )
    {
LABEL_10:
      v24 = dword_1C0327A14;
    }
    else
    {
      while ( 1 )
      {
        v24 = dword_1C0327A14;
        if ( *v23 <= v22 )
          break;
        *v23 = v22;
        ++v19;
        v22 += v16;
        *v18++ = v24;
        v16 += v1;
        ++v23;
        if ( v19 > v13 )
          goto LABEL_16;
      }
      v21 = v19 - 1;
    }
LABEL_16:
    v25 = (unsigned int *)(v10 - 4);
    v26 = dword_1C0327D6C - v1;
    v27 = dword_1C0327D60 - 1;
    v28 = v7 - (dword_1C0327D6C - v1);
    v29 = (_BYTE *)(v67 - 1);
    if ( v17 )
      goto LABEL_17;
    if ( v27 >= v14 )
    {
      while ( *v25 <= v28 )
      {
        v26 -= v1;
        --v27;
        v28 -= v26;
        --v25;
        --v29;
        if ( v27 < v14 )
          goto LABEL_45;
      }
      dword_1C0327D60 = v27;
      v10 = (__int64)v25;
      v67 = (__int64)v29;
      v7 = v28;
      dword_1C0327D6C = v26;
      v21 = v27;
LABEL_17:
      if ( v27 >= v14 )
      {
        while ( *v25 > v28 )
        {
          *v25 = v28;
          v26 -= v1;
          *v29 = v24;
          v28 -= v26;
          --v29;
          --v27;
          --v25;
          if ( v27 < v14 )
            goto LABEL_22;
        }
        v20 = v27 + 1;
      }
LABEL_22:
      v30 = v75;
      if ( v21 < dword_1C0327D74 )
        v13 = v21;
      dword_1C0327D74 = v21;
      dword_1C0327D68 = v13;
      if ( v20 > dword_1C0327D70 )
        v14 = v20;
      dword_1C0327D70 = v20;
      dword_1C0327D64 = v14;
      if ( !v74 )
      {
        if ( v75 > dword_1C0327D2C )
        {
          qword_1C03279D8 = v68;
          qword_1C03279F0 = v69;
          v70 = v63;
          dword_1C03279BC = v63;
          dword_1C0327D2C = v75;
          v72 = v9;
          dword_1C0327D38 = v9;
          v64 = v75;
        }
        v74 = 1;
      }
      goto LABEL_27;
    }
LABEL_45:
    if ( v74 )
      break;
    v30 = v75;
LABEL_27:
    v7 += v9;
    v63 += v9;
    v11 = v67 + 32;
    v68 += 128LL;
    v69 += 32LL;
    v10 += 128LL;
    v8 = dword_1C03279AC;
    v9 += v1;
    v12 = 0;
    v75 = v30 + 1;
    v67 += 32LL;
    if ( v30 + 1 > dword_1C0327D34 )
      goto LABEL_28;
  }
  v65 = v75 - 1;
LABEL_28:
  v8 = dword_1C03279AC;
  v6 = v70;
LABEL_29:
  v31 = v6 - (v72 - v1);
  v32 = qword_1C03279D8 - 128;
  v33 = dword_1C0327D30;
  v34 = qword_1C03279F0 - 32;
  v35 = dword_1C0327D64;
  v36 = dword_1C0327D2C - 1;
  v73 = v72 - v1;
  v37 = v31;
  dword_1C0327D48 = v73;
  v38 = qword_1C03279D8 - 128;
  v71 = v31;
  v39 = 1;
  dword_1C03279B8 = v31;
  dword_1C0327D44 = v31;
  qword_1C03279D0 = qword_1C03279D8 - 128;
  qword_1C0327D50 = qword_1C03279D8 - 128;
  qword_1C03279E8 = qword_1C03279F0 - 32;
  qword_1C0327D58 = qword_1C03279F0 - 32;
  if ( dword_1C0327D2C - 1 >= dword_1C0327D30 )
  {
    while ( 2 )
    {
      if ( v39 )
      {
        v41 = dword_1C03279C4;
        v35 = 0;
        v13 = 31;
        dword_1C0327D64 = 0;
        dword_1C0327D68 = 31;
        v40 = v8;
        dword_1C0327D74 = 0;
        dword_1C0327D60 = v8;
        dword_1C0327D6C = dword_1C03279C4;
        dword_1C0327D70 = 32;
      }
      else
      {
        v40 = dword_1C0327D60;
        v41 = dword_1C0327D6C;
      }
      v42 = 0;
      v43 = v35;
      v44 = v40;
      v45 = v31;
      v46 = v13;
      v47 = (unsigned int *)v32;
      v48 = (_BYTE *)v34;
      if ( dword_1C0327D60 <= v13 )
      {
        while ( *v47 <= v45 )
        {
          v45 += v41;
          ++v44;
          v41 += v1;
          ++v47;
          ++v48;
          if ( v44 > v13 )
            goto LABEL_35;
        }
        if ( v44 > dword_1C0327D60 )
        {
          dword_1C0327D60 = v44;
          v32 = (__int64)v47;
          qword_1C03279D0 = (__int64)v47;
          v34 = (__int64)v48;
          qword_1C03279E8 = (__int64)v48;
          v43 = v44;
          v71 = v45;
          dword_1C03279B8 = v45;
          dword_1C0327D6C = v41;
        }
        v42 = 1;
        if ( v44 <= v13 )
        {
          while ( *v47 > v45 )
          {
            v60 = dword_1C0327A14;
            ++v44;
            *v47 = v45;
            v45 += v41;
            *v48 = v60;
            ++v47;
            v1 = v66;
            ++v48;
            v41 += v66;
            if ( v44 > v13 )
              goto LABEL_35;
          }
          v46 = v44 - 1;
        }
      }
LABEL_35:
      v49 = (unsigned int *)(v32 - 4);
      v50 = (_BYTE *)(v34 - 1);
      v51 = dword_1C0327D6C - v1;
      v52 = v71 - (dword_1C0327D6C - v1);
      v53 = dword_1C0327D60 - 1;
      if ( v42 )
      {
LABEL_52:
        if ( v53 >= dword_1C0327D64 )
        {
          while ( *v49 > v52 )
          {
            v57 = dword_1C0327A14;
            --v53;
            *v49-- = v52;
            *v50-- = v57;
            v1 = v66;
            v51 -= v66;
            v52 -= v51;
            if ( v53 < dword_1C0327D64 )
              goto LABEL_57;
          }
          v43 = v53 + 1;
        }
LABEL_57:
        v35 = dword_1C0327D64;
        v54 = v74;
        if ( v46 < dword_1C0327D74 )
          v13 = v46;
        v55 = qword_1C0327D58;
        if ( v43 > dword_1C0327D70 )
          v35 = v43;
        dword_1C0327D70 = v43;
        v56 = v73;
        dword_1C0327D64 = v35;
        dword_1C0327D68 = v13;
        dword_1C0327D74 = v46;
        if ( !v74 )
        {
          v54 = 1;
          dword_1C0327D2C = v36;
          v74 = 1;
          qword_1C03279D8 = v38;
          qword_1C03279F0 = qword_1C0327D58;
          dword_1C03279BC = v37;
          dword_1C0327D38 = v73;
          v65 = v36;
        }
      }
      else
      {
        if ( v53 >= dword_1C0327D64 )
        {
          while ( *v49 <= v52 )
          {
            v51 -= v1;
            --v53;
            v52 -= v51;
            --v49;
            --v50;
            if ( v53 < dword_1C0327D64 )
              goto LABEL_39;
          }
          dword_1C0327D60 = v53;
          v32 = (__int64)v49;
          qword_1C03279D0 = (__int64)v49;
          v34 = (__int64)v50;
          qword_1C03279E8 = (__int64)v50;
          v46 = v53;
          v71 = v52;
          dword_1C03279B8 = v52;
          dword_1C0327D6C = v51;
          goto LABEL_52;
        }
LABEL_39:
        v54 = v74;
        if ( v74 )
        {
          v33 = dword_1C0327D30;
          v59 = v36 + 1;
          goto LABEL_74;
        }
        v55 = qword_1C0327D58;
        v35 = dword_1C0327D64;
        v56 = v73;
      }
      v33 = dword_1C0327D30;
      v58 = v56 - v1;
      v8 = dword_1C03279AC;
      qword_1C0327D58 = v55 - 32;
      v32 -= 128LL;
      v38 -= 128LL;
      v31 = v71 - v58;
      qword_1C03279D0 = v32;
      v34 -= 32LL;
      qword_1C0327D50 = v38;
      v37 -= v58;
      qword_1C03279E8 = v34;
      --v36;
      v73 = v58;
      v39 = 0;
      dword_1C0327D48 = v58;
      v71 = v31;
      dword_1C03279B8 = v31;
      dword_1C0327D44 = v37;
      if ( v36 < dword_1C0327D30 )
      {
        v59 = v64;
        goto LABEL_74;
      }
      continue;
    }
  }
  v54 = v74;
  v59 = v64;
LABEL_74:
  if ( v54 )
  {
    v61 = dword_1C0327D34;
    if ( v65 < dword_1C0327D3C )
      v61 = v65;
    dword_1C0327D3C = v65;
    dword_1C0327D34 = v61;
    if ( v59 > dword_1C0327D40 )
      v33 = v59;
    dword_1C0327D40 = v59;
    dword_1C0327D30 = v33;
  }
  return v54;
}
