/*
 * XREFs of bQueryAdvanceWidths @ 0x1C022CC6C
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C0225600 (ttfdSemQueryAdvanceWidths.c)
 * Callees:
 *     ttfdOpenFontContext @ 0x1C023141C (ttfdOpenFontContext.c)
 *     IsFullWidthCharacter @ 0x1C0231D2C (IsFullWidthCharacter.c)
 */

__int64 __fastcall bQueryAdvanceWidths(__int64 a1, unsigned int a2, unsigned int *a3, _WORD *a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v11; // rdi
  unsigned int v12; // r9d
  __int64 v13; // rcx
  _WORD *v14; // rdi
  __int64 v15; // r8
  unsigned int v16; // edi
  _WORD *v17; // rcx
  unsigned int *v18; // rdx
  __int16 v19; // r9
  __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // ax
  __int16 v26; // ax
  __int16 v27; // ax
  __int16 v28; // ax
  __int16 v29; // ax
  __int16 v30; // ax
  __int16 v31; // ax
  __int16 v32; // ax
  __int16 v33; // ax
  __int16 v34; // ax
  __int16 v35; // ax
  unsigned int *v36; // rax
  __int64 v37; // r11
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r10
  __int64 v41; // r12
  __int64 v42; // rbp
  unsigned int v43; // edx
  unsigned int v44; // r9d
  unsigned __int16 v45; // r8
  int v46; // eax
  __int16 v47; // r9
  int v48; // r11d
  unsigned int v49; // r10d
  unsigned int v50; // r15d
  __int64 v51; // rax
  unsigned __int16 v52; // cx
  __int64 v53; // rcx
  unsigned __int16 v54; // r10
  int v55; // ecx
  __int16 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int16 v59; // cx
  int v60; // eax
  int v61; // [rsp+20h] [rbp-48h]
  int v62; // [rsp+24h] [rbp-44h]
  __int64 v63; // [rsp+28h] [rbp-40h]
  unsigned __int16 v64; // [rsp+70h] [rbp+8h]
  unsigned int v65; // [rsp+88h] [rbp+20h]

  v5 = 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 40) = *(_DWORD *)(v11 + 40) & 0x80000000 | *(_DWORD *)(a1 + 12);
  }
  else
  {
    v11 = ttfdOpenFontContext();
    *(_QWORD *)(a1 + 56) = v11;
  }
  if ( !v11 )
    return 0xFFFFFFFFLL;
  v12 = *(_DWORD *)(v11 + 40);
  *(_QWORD *)v11 = a1;
  if ( (v12 & 0x42000000) == 0x40000000 && (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 400LL) & 0x10000000) == 0 )
  {
    if ( a5 )
    {
      v13 = a5;
      v14 = a4;
      while ( v13 )
      {
        *v14++ = -1;
        --v13;
      }
    }
    return 0LL;
  }
  v15 = *(_QWORD *)(v11 + 136);
  if ( a2 > 1 )
    return 0LL;
  if ( !v15 )
  {
    v36 = *(unsigned int **)(v11 + 192);
    v37 = *(_QWORD *)(v11 + 8);
    v38 = *(_QWORD *)(v37 + 64);
    v39 = v38 + v36[4];
    v40 = v36[24];
    v41 = v38 + v36[8];
    if ( !(_DWORD)v40 || (v42 = v38 + v40, (unsigned __int64)*(unsigned int *)(v37 + 552) + 4 > v36[25]) )
      v42 = 0LL;
    v43 = (unsigned __int16)__ROR2__(*(_WORD *)(v38 + v36[6] + 34), 8);
    v44 = v12 >> 9;
    v65 = v43;
    v45 = __ROR2__(*(_WORD *)(v41 + 4LL * (v43 - 1)), 8);
    v46 = *(_DWORD *)(v11 + 116);
    v64 = v45;
    if ( (v46 & 1) == 0 )
    {
      v56 = v44 & 0x10;
      if ( a5 )
      {
        v57 = a5;
        do
        {
          v58 = *a3;
          if ( (unsigned int)v58 >= v65 )
            v59 = v45;
          else
            v59 = __ROR2__(*(_WORD *)(v41 + 4 * v58), 8);
          if ( v59 )
            LOWORD(v60) = v56 + (int)(float)((float)v59 * *(float *)(v11 + 224));
          else
            v60 = (int)(float)(*(float *)(v11 + 224) * 0.0);
          *a4 = v60;
          ++a3;
          ++a4;
          --v57;
        }
        while ( v57 );
      }
      return 1LL;
    }
    v47 = v44 & 0x10;
    v61 = *(_DWORD *)(v11 + 124);
    if ( (v46 & 0x10) == 0 || (*(_BYTE *)(v39 + 17) & 0x14) == 0 || (*(_DWORD *)(v37 + 400) & 0x10000000) != 0 )
      v5 = 0LL;
    v48 = *(_DWORD *)(v11 + 80);
    if ( v48 < 0 )
      v48 = -v48;
    v49 = 0;
    v50 = 1;
    if ( !a5 )
      return v50;
    v63 = a5;
    v62 = gbJpn98FixPitch;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v11 + 40) & 0x42000000) == 0x40000000 )
      {
        if ( !(unsigned int)IsFullWidthCharacter(*(_QWORD *)(v11 + 8), *a3) )
          goto LABEL_78;
        v45 = v64;
        v43 = v65;
      }
      if ( !v5 || v42 && v61 >= *(unsigned __int8 *)(*a3 + v42 + 4) )
      {
        v51 = *a3;
        if ( (unsigned int)v51 >= v43 )
          v52 = v45;
        else
          v52 = __ROR2__(*(_WORD *)(v41 + 4 * v51), 8);
        *a4 = ((v48 * v52 + 0x8000) >> 12) & 0xFFF0;
        if ( !v62 )
        {
          v53 = *(_QWORD *)(v11 + 8);
          if ( (*(_DWORD *)(v53 + 400) & 0x10000000) != 0 )
          {
            if ( (unsigned int)IsFullWidthCharacter(v53, *a3) )
            {
              v55 = *(_DWORD *)(v11 + 404);
              if ( *(int *)(v11 + 80) <= 0 )
              {
                if ( v54 != -16 * v55 )
                  *a4 = -32 * *(_WORD *)(v11 + 404);
              }
              else if ( v54 != 16 * v55 )
              {
                *a4 = 32 * *(_WORD *)(v11 + 404);
              }
            }
          }
        }
        v49 = 0;
        if ( *a4 )
          *a4 += v47;
        goto LABEL_92;
      }
LABEL_78:
      *a4 = -1;
      v50 = v49;
LABEL_92:
      v45 = v64;
      ++a3;
      v43 = v65;
      ++a4;
      if ( !--v63 )
        return v50;
    }
  }
  v16 = a5;
  v17 = a4 + 6;
  v18 = a3 + 6;
  v19 = (v12 >> 9) & 0x10;
  while ( 1 )
  {
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        if ( v16 != 2 )
        {
          if ( v16 != 3 )
          {
            if ( v16 != 4 )
            {
              if ( v16 != 5 )
              {
                if ( v16 != 6 )
                {
                  if ( v16 != 7 )
                  {
                    v20 = *(unsigned __int8 *)(v18[1] + v15 + 2);
                    if ( (_BYTE)v20 )
                      v21 = v19 + 16 * v20;
                    else
                      v21 = 16 * v20;
                    v17[1] = v21;
                  }
                  v22 = *(unsigned __int8 *)(*v18 + v15 + 2);
                  if ( (_BYTE)v22 )
                    v23 = v19 + 16 * v22;
                  else
                    v23 = 16 * v22;
                  *v17 = v23;
                }
                v24 = *(unsigned __int8 *)(*(v18 - 1) + v15 + 2);
                if ( (_BYTE)v24 )
                  v25 = v19 + 16 * v24;
                else
                  v25 = 16 * v24;
                *(v17 - 1) = v25;
              }
              v26 = *(unsigned __int8 *)(*(v18 - 2) + v15 + 2);
              if ( (_BYTE)v26 )
                v27 = v19 + 16 * v26;
              else
                v27 = 16 * v26;
              *(v17 - 2) = v27;
            }
            v28 = *(unsigned __int8 *)(*(v18 - 3) + v15 + 2);
            if ( (_BYTE)v28 )
              v29 = v19 + 16 * v28;
            else
              v29 = 16 * v28;
            *(v17 - 3) = v29;
          }
          v30 = *(unsigned __int8 *)(*(v18 - 4) + v15 + 2);
          if ( (_BYTE)v30 )
            v31 = v19 + 16 * v30;
          else
            v31 = 16 * v30;
          *(v17 - 4) = v31;
        }
        v32 = *(unsigned __int8 *)(*(v18 - 5) + v15 + 2);
        if ( (_BYTE)v32 )
          v33 = v19 + 16 * v32;
        else
          v33 = 16 * v32;
        *(v17 - 5) = v33;
      }
      v34 = *(unsigned __int8 *)(*(v18 - 6) + v15 + 2);
      if ( (_BYTE)v34 )
        v35 = v19 + 16 * v34;
      else
        v35 = 16 * v34;
      *(v17 - 6) = v35;
    }
    if ( v16 <= 8 )
      break;
    v17 += 8;
    v18 += 8;
    v16 -= 8;
  }
  return 1LL;
}
