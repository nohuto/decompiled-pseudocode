/*
 * XREFs of sfac_ReadOutlineData @ 0x1C02C4D80
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C105C (fsg_ExecuteGlyph.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     UShortToShort @ 0x1C02C2DC8 (UShortToShort.c)
 */

__int64 __fastcall sfac_ReadOutlineData(
        _BYTE *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int16 a8,
        _WORD *a9,
        SHORT *psResult,
        _WORD *a11,
        _QWORD *a12,
        unsigned int *a13,
        unsigned int *a14)
{
  __int16 v14; // si
  char *v16; // r15
  _WORD *v17; // rdi
  __int64 v19; // r11
  __int16 v20; // dx
  unsigned int v21; // r8d
  unsigned __int16 v22; // ax
  char *v23; // rcx
  __int16 v24; // ax
  _WORD *v25; // rcx
  int v26; // r14d
  int v27; // r10d
  _WORD *v28; // r9
  char *v29; // rbp
  signed __int64 v30; // r15
  __int64 v31; // r9
  int v32; // r10d
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // eax
  _BYTE *v37; // r15
  unsigned __int16 v38; // bp
  int v39; // r12d
  char v40; // al
  char *v41; // r10
  __int16 v42; // cx
  char *v43; // r8
  int i; // r9d
  char v45; // dl
  __int16 v46; // ax
  int v47; // edx
  char v48; // cl
  __int16 v49; // ax
  _DWORD *v51; // [rsp+68h] [rbp+10h]
  _DWORD *v52; // [rsp+70h] [rbp+18h]

  v52 = a3;
  v51 = a2;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  *a9 = 0;
  *psResult = 0;
  *a1 = 1;
  *a3 = 0;
  *a2 = 0;
  *a12 = 0LL;
  *a11 = 0;
  if ( !a6 && !a7 )
    return 0LL;
  if ( a8 > 0 )
  {
    v19 = a5;
    v20 = *(_WORD *)(a5 + 8);
    if ( a8 <= v20 )
    {
      v21 = *a14 + a8;
      if ( v21 >= *a14 )
      {
        v22 = *(_WORD *)(a5 + 12);
        *a14 = v21;
        if ( (unsigned __int16)v20 > v22 )
          v22 = v20;
        if ( v21 <= v22 )
        {
          if ( a6 )
          {
            v16 = *(char **)(a4 + 8);
            v23 = &v16[2 * a8];
            if ( (unsigned __int64)v23 > *(_QWORD *)(a4 + 16) - 2LL )
              return 5133LL;
            v24 = *(_WORD *)v23;
            v25 = v23 + 2;
            *a11 = __ROR2__(v24, 8);
            *a12 = v25;
            v17 = (_WORD *)((char *)v25 + (unsigned __int16)*a11);
            if ( v17 < v25 )
              return 5133LL;
            *a9 = 0;
            if ( UShortToShort(__ROR2__(*(_WORD *)v16, 8), psResult) < 0 )
              return 5121LL;
          }
          v26 = *psResult + 1;
          v27 = 1;
          if ( a8 > 1 )
          {
            v28 = a9 + 1;
            v29 = (char *)((char *)psResult - (char *)a9);
            v30 = v16 - (char *)a9;
            do
            {
              *v28 = *(_WORD *)&v29[(_QWORD)v28 - 2] + 1;
              if ( UShortToShort(__ROR2__(*(_WORD *)((char *)v28 + v30), 8), &psResult[v27]) < 0 )
                return 5121LL;
              v33 = *(__int16 *)&v29[v31];
              if ( v26 > v33 || v26 > *(unsigned __int16 *)(v19 + 6) || v26 <= 0 )
                return 5121LL;
              v26 = v33 + 1;
              v28 = (_WORD *)(v31 + 2);
              v27 = v32 + 1;
            }
            while ( v27 < a8 );
          }
          if ( v26 <= 0 )
            return 5121LL;
          v34 = *(unsigned __int16 *)(v19 + 6);
          if ( v26 > (int)v34 )
            return 5121LL;
          v35 = *a13 + v26;
          if ( v35 < *a13 )
            return 5121LL;
          v36 = *(unsigned __int16 *)(v19 + 10);
          *a13 = v35;
          if ( (unsigned __int16)v34 <= (unsigned __int16)v36 )
            v34 = v36;
          if ( v35 > v34 )
            return 5121LL;
          if ( !a6 )
            return 0LL;
          v37 = a1;
          v38 = 0;
          v39 = v26;
          do
          {
            if ( v38 )
            {
              v39 -= v38;
              if ( v39 < 0 )
                return 5133LL;
              LOBYTE(v35) = *(v37 - 1);
              memset(v37, v35, v38);
              v37 += v38;
              do
                --v38;
              while ( v38 );
            }
            else
            {
              if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 1LL )
                return 5133LL;
              v40 = *(_BYTE *)v17;
              *v37 = *(_BYTE *)v17;
              if ( (v40 & 8) != 0 )
              {
                v17 = (_WORD *)((char *)v17 + 1);
                if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 1LL )
                  return 5133LL;
                v38 = *(unsigned __int8 *)v17;
              }
              v17 = (_WORD *)((char *)v17 + 1);
              ++v37;
              --v39;
            }
          }
          while ( v39 > 0 );
          if ( v38 )
            return 5121LL;
          v41 = a1;
          v42 = 0;
          v43 = a1;
          for ( i = 0; i < v26; ++i )
          {
            v45 = *v43;
            if ( (*v43 & 2) != 0 )
            {
              if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 1LL )
                return 5133LL;
              v46 = *(unsigned __int8 *)v17;
              if ( (v45 & 0x10) != 0 )
                v42 += v46;
              else
                v42 -= v46;
              v17 = (_WORD *)((char *)v17 + 1);
            }
            else if ( (v45 & 0x10) == 0 )
            {
              if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 2LL )
                return 5133LL;
              v42 += __ROR2__(*v17++, 8);
            }
            ++v43;
            *v52++ = v42;
          }
          v47 = 0;
          do
          {
            v48 = *v41;
            if ( (*v41 & 4) != 0 )
            {
              if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 1LL )
                return 5133LL;
              v49 = *(unsigned __int8 *)v17;
              if ( (v48 & 0x20) != 0 )
                v14 += v49;
              else
                v14 -= v49;
              v17 = (_WORD *)((char *)v17 + 1);
            }
            else if ( (v48 & 0x20) == 0 )
            {
              if ( (unsigned __int64)v17 > *(_QWORD *)(a4 + 16) - 2LL )
                return 5133LL;
              v14 += __ROR2__(*v17++, 8);
            }
            ++v47;
            *v51 = v14;
            *v41++ &= 1u;
            ++v51;
          }
          while ( v47 < v26 );
          if ( (unsigned __int64)v17 <= *(_QWORD *)(a4 + 16) )
          {
            *(_QWORD *)(a4 + 8) = v17;
            return 0LL;
          }
          return 5133LL;
        }
      }
    }
  }
  return 5123LL;
}
