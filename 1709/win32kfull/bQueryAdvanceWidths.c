/*
 * XREFs of bQueryAdvanceWidths @ 0x1C022E178
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C0226B70 (ttfdSemQueryAdvanceWidths.c)
 * Callees:
 *     ttfdOpenFontContext @ 0x1C023298C (ttfdOpenFontContext.c)
 *     IsFullWidthCharacter @ 0x1C02332A0 (IsFullWidthCharacter.c)
 */

__int64 __fastcall bQueryAdvanceWidths(__int64 a1, unsigned int a2, unsigned int *a3, _WORD *a4, unsigned int a5)
{
  unsigned int v5; // r15d
  __int64 v11; // rdi
  unsigned int v12; // r9d
  __int64 v13; // rcx
  _WORD *v14; // rdi
  __int64 v15; // r8
  unsigned int v16; // edi
  _WORD *v17; // rcx
  unsigned int *v18; // rdx
  __int16 v19; // r9
  unsigned __int8 v20; // r11
  unsigned __int8 v21; // r11
  unsigned __int8 v22; // r11
  unsigned __int8 v23; // r11
  unsigned __int8 v24; // r11
  unsigned __int8 v25; // r11
  unsigned __int8 v26; // r11
  unsigned __int8 v27; // r11
  unsigned int *v28; // rax
  __int64 v29; // r11
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // r10
  __int64 v33; // r13
  __int64 v34; // rbp
  unsigned int v35; // edx
  unsigned int v36; // r9d
  unsigned __int16 v37; // r8
  int v38; // eax
  __int16 v39; // r9
  int v40; // r10d
  int v41; // r11d
  __int64 i; // r12
  __int64 v43; // rax
  unsigned __int16 v44; // cx
  bool v45; // zf
  __int64 v46; // rcx
  unsigned __int16 v47; // r10
  int v48; // ecx
  __int16 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int16 v52; // cx
  int v53; // eax
  unsigned int v54; // [rsp+20h] [rbp-48h]
  int v55; // [rsp+24h] [rbp-44h]
  unsigned __int16 v56; // [rsp+70h] [rbp+8h]
  int v57; // [rsp+88h] [rbp+20h]

  v5 = 1;
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
  if ( v15 )
  {
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
                      v20 = *(_BYTE *)(v18[1] + v15 + 2);
                      if ( v20 )
                        v17[1] = v19 + 16 * v20;
                      else
                        v17[1] = 0;
                    }
                    v21 = *(_BYTE *)(*v18 + v15 + 2);
                    if ( v21 )
                      *v17 = v19 + 16 * v21;
                    else
                      *v17 = 0;
                  }
                  v22 = *(_BYTE *)(*(v18 - 1) + v15 + 2);
                  if ( v22 )
                    *(v17 - 1) = v19 + 16 * v22;
                  else
                    *(v17 - 1) = 0;
                }
                v23 = *(_BYTE *)(*(v18 - 2) + v15 + 2);
                if ( v23 )
                  *(v17 - 2) = v19 + 16 * v23;
                else
                  *(v17 - 2) = 0;
              }
              v24 = *(_BYTE *)(*(v18 - 3) + v15 + 2);
              if ( v24 )
                *(v17 - 3) = v19 + 16 * v24;
              else
                *(v17 - 3) = 0;
            }
            v25 = *(_BYTE *)(*(v18 - 4) + v15 + 2);
            if ( v25 )
              *(v17 - 4) = v19 + 16 * v25;
            else
              *(v17 - 4) = 0;
          }
          v26 = *(_BYTE *)(*(v18 - 5) + v15 + 2);
          if ( v26 )
            *(v17 - 5) = v19 + 16 * v26;
          else
            *(v17 - 5) = 0;
        }
        v27 = *(_BYTE *)(*(v18 - 6) + v15 + 2);
        if ( v27 )
          *(v17 - 6) = v19 + 16 * v27;
        else
          *(v17 - 6) = 0;
      }
      if ( v16 <= 8 )
        break;
      v17 += 8;
      v18 += 8;
      v16 -= 8;
    }
    return v5;
  }
  v28 = *(unsigned int **)(v11 + 192);
  v29 = *(_QWORD *)(v11 + 8);
  v30 = *(_QWORD *)(v29 + 64);
  v31 = v30 + v28[4];
  v32 = v28[24];
  v33 = v30 + v28[8];
  if ( !(_DWORD)v32 || (v34 = v30 + v32, (unsigned __int64)*(unsigned int *)(v29 + 552) + 4 > v28[25]) )
    v34 = 0LL;
  v35 = (unsigned __int16)__ROR2__(*(_WORD *)(v30 + v28[6] + 34), 8);
  v36 = v12 >> 9;
  v54 = v35;
  v37 = __ROR2__(*(_WORD *)(v33 + 4LL * (v35 - 1)), 8);
  v38 = *(_DWORD *)(v11 + 116);
  v56 = v37;
  if ( (v38 & 1) == 0 )
  {
    v49 = v36 & 0x10;
    if ( a5 )
    {
      v50 = a5;
      do
      {
        v51 = *a3;
        if ( (unsigned int)v51 >= v54 )
          v52 = v37;
        else
          v52 = __ROR2__(*(_WORD *)(v33 + 4 * v51), 8);
        if ( v52 )
          LOWORD(v53) = v49 + (int)(float)((float)v52 * *(float *)(v11 + 224));
        else
          v53 = (int)(float)(*(float *)(v11 + 224) * 0.0);
        *a4 = v53;
        ++a3;
        ++a4;
        --v50;
      }
      while ( v50 );
    }
    return v5;
  }
  v39 = v36 & 0x10;
  v55 = *(_DWORD *)(v11 + 124);
  v57 = 1;
  if ( (v38 & 0x10) != 0 && (*(_BYTE *)(v31 + 17) & 0x14) != 0 && (*(_DWORD *)(v29 + 400) & 0x10000000) == 0 )
  {
    v40 = 1;
  }
  else
  {
    v40 = 0;
    v57 = 0;
  }
  v41 = *(_DWORD *)(v11 + 80);
  if ( v41 < 0 )
    v41 = -v41;
  if ( a5 )
  {
    for ( i = a5; i; --i )
    {
      if ( (*(_DWORD *)(v11 + 40) & 0x42000000) == 0x40000000 )
      {
        if ( !(unsigned int)IsFullWidthCharacter(*(_QWORD *)(v11 + 8), *a3) )
          goto LABEL_71;
        v37 = v56;
        v35 = v54;
      }
      if ( !v40 || v34 && v55 >= *(unsigned __int8 *)(*a3 + v34 + 4) )
      {
        v43 = *a3;
        if ( (unsigned int)v43 >= v35 )
          v44 = v37;
        else
          v44 = __ROR2__(*(_WORD *)(v33 + 4 * v43), 8);
        v45 = gbJpn98FixPitch == 0;
        *a4 = ((v41 * v44 + 0x8000) >> 12) & 0xFFF0;
        if ( v45 )
        {
          v46 = *(_QWORD *)(v11 + 8);
          if ( (*(_DWORD *)(v46 + 400) & 0x10000000) != 0 )
          {
            if ( (unsigned int)IsFullWidthCharacter(v46, *a3) )
            {
              v48 = *(_DWORD *)(v11 + 404);
              if ( *(int *)(v11 + 80) <= 0 )
              {
                if ( v47 != -16 * v48 )
                  *a4 = -32 * *(_WORD *)(v11 + 404);
              }
              else if ( v47 != 16 * v48 )
              {
                *a4 = 32 * *(_WORD *)(v11 + 404);
              }
            }
          }
        }
        if ( *a4 )
          *a4 += v39;
        goto LABEL_85;
      }
LABEL_71:
      *a4 = -1;
      v5 = 0;
LABEL_85:
      v37 = v56;
      ++a3;
      v40 = v57;
      ++a4;
      v35 = v54;
    }
  }
  return v5;
}
