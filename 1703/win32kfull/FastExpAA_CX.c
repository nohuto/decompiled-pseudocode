/*
 * XREFs of FastExpAA_CX @ 0x1C011DF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FastExpAA_CX(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, int a5)
{
  unsigned __int64 v5; // r12
  unsigned __int16 *v7; // r9
  __int64 v8; // rcx
  __int16 v9; // r10
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int8 v12; // si
  __int16 v13; // di
  unsigned __int8 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r11
  bool v18; // zf
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned __int8 v21; // r12
  int v22; // r10d
  int v23; // r9d
  int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // r10d
  _BYTE *v30; // r8
  int v31; // ebx
  _BYTE *v32; // r8
  _BYTE *v33; // r8
  int v34; // r13d
  int v35; // r10d
  int v36; // r9d
  _BYTE *v37; // r8
  _BYTE *v38; // r8
  int v39; // r13d
  int v40; // edi
  int v41; // r15d
  int v42; // esi
  _BYTE *v43; // r8
  int v44; // ecx
  __int16 v45; // [rsp+0h] [rbp-60h]
  __int16 v46; // [rsp+3h] [rbp-5Dh]
  __int16 v47; // [rsp+6h] [rbp-5Ah]
  __int16 v48; // [rsp+10h] [rbp-50h]
  __int16 v49; // [rsp+12h] [rbp-4Eh]
  __int64 v50; // [rsp+20h] [rbp-40h]
  unsigned __int16 *v51; // [rsp+28h] [rbp-38h]
  __int64 v52; // [rsp+30h] [rbp-30h]
  unsigned __int64 v53; // [rsp+48h] [rbp-18h]
  unsigned __int8 v54; // [rsp+A8h] [rbp+48h]
  unsigned __int8 v55; // [rsp+B0h] [rbp+50h]

  v5 = *(_QWORD *)(a1 + 96);
  v7 = *(unsigned __int16 **)(a1 + 88);
  v8 = *(unsigned __int8 *)(a1 + 80);
  v53 = v5;
  v9 = *(_WORD *)(a2 + v8 + 2 * v8 - 3);
  v10 = a2 + v8 + 2 * v8;
  result = a5;
  v12 = *(_BYTE *)(v10 - 1);
  v13 = *(_WORD *)v10;
  v14 = *(_BYTE *)(v10 + 2);
  v15 = v10 + 3;
  v16 = -(__int64)a5;
  v17 = a4 - a3;
  v50 = a4 - a3;
  do
  {
    v18 = result == 4;
    result = v17;
    if ( v18 )
    {
      v19 = v17 / 4;
    }
    else
    {
      result = v17 / a5;
      LODWORD(v19) = result;
    }
    if ( (unsigned __int64)v7 >= v5 )
      break;
    v20 = *v7++;
    v51 = v7;
    if ( v20 > (unsigned int)v19 )
      v20 = v19;
    v45 = v9;
    v21 = v12;
    v55 = v12;
    v9 = v13;
    v12 = v14;
    v48 = v13;
    v46 = v13;
    v13 = *(_WORD *)v15;
    v54 = v14;
    v14 = *(_BYTE *)(v15 + 2);
    v15 += 3LL;
    v49 = v13;
    v47 = v13;
    v52 = v15;
    if ( v20 == 2 )
    {
      v17 -= a5;
      v22 = 3 * v12;
      a3[2] = (v22 + (unsigned int)v21 + 2) >> 2;
      v23 = 3 * HIBYTE(v46);
      a3[1] = (v23 + (unsigned int)HIBYTE(v45) + 2) >> 2;
      v24 = 3 * (unsigned __int8)v46;
      *a3 = (v24 + (unsigned int)(unsigned __int8)v45 + 2) >> 2;
      a3 += a5;
      a3[2] = (v22 + (unsigned int)v14 + 2) >> 2;
      a3[1] = ((unsigned int)HIBYTE(v13) + v23 + 2) >> 2;
      v25 = (v24 + (unsigned int)(unsigned __int8)v13 + 2) >> 2;
    }
    else
    {
      v26 = v20 - 1;
      if ( !v26 )
      {
        a3[2] = (v21 + v14 + 2 * (v12 + 2 * (v21 + v12 + v14 + 4 * ((unsigned int)v12 + 1)))) >> 5;
        a3[1] = (HIBYTE(v45)
               + HIBYTE(v13)
               + 2 * (HIBYTE(v46) + 8 + 2 * (HIBYTE(v45) + HIBYTE(v46) + HIBYTE(v13) + 4 * (unsigned int)HIBYTE(v46)))) >> 5;
        v25 = ((unsigned __int8)v45
             + (unsigned __int8)v13
             + 2
             * ((unsigned __int8)v46
              + 2
              * ((unsigned __int8)v45
               + (unsigned __int8)v46
               + (unsigned __int8)v13
               + 4 * ((unsigned int)(unsigned __int8)v46 + 1)))) >> 5;
        goto LABEL_10;
      }
      v27 = v26 - 2;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 != 1 )
            goto LABEL_11;
          a3[2] = (13 * v21 + 16 + 19 * (unsigned int)v12) >> 5;
          a3[1] = (13 * HIBYTE(v45) + 16 + 19 * (unsigned int)HIBYTE(v46)) >> 5;
          *a3 = (13 * (unsigned __int8)v45 + 16 + 19 * (unsigned int)(unsigned __int8)v46) >> 5;
          v29 = 25 * (unsigned __int8)v46;
          v30 = &a3[a5];
          v31 = 25 * HIBYTE(v46);
          v30[2] = (25 * v12 + v14 + 2 * (v21 + 2 * ((unsigned int)v21 + 4))) >> 5;
          v30[1] = (HIBYTE(v13) + 6 * (unsigned int)HIBYTE(v45) + v31 + 16) >> 5;
          *v30 = ((unsigned __int8)v13 + 6 * (unsigned int)(unsigned __int8)v45 + v29 + 16) >> 5;
          v32 = &v30[a5];
          v32[2] = (v55 + v14 + 2 * (v55 + v14 + 13 * (unsigned int)v12 + 8)) >> 5;
          v32[1] = (HIBYTE(v45) + HIBYTE(v13) + 2 * (HIBYTE(v45) + HIBYTE(v13) + 13 * (unsigned int)HIBYTE(v46) + 8)) >> 5;
          v17 = v16 + v50 - a5 - a5 - a5;
          *v32 = ((unsigned __int8)v45
                + (unsigned __int8)v13
                + 2 * ((unsigned __int8)v45 + (unsigned __int8)v13 + 13 * (unsigned int)(unsigned __int8)v46 + 8)) >> 5;
          v33 = &v32[a5];
          v33[2] = (25 * v12 + 6 * v14 + (unsigned int)v55 + 16) >> 5;
          v33[1] = (v31 + 6 * HIBYTE(v13) + (unsigned int)HIBYTE(v45) + 16) >> 5;
          *v33 = (v29 + 6 * (unsigned __int8)v13 + (unsigned int)(unsigned __int8)v45 + 16) >> 5;
          a3 = &v33[a5];
          a3[2] = (13 * v14 + 19 * (unsigned int)v12 + 16) >> 5;
          v12 = v54;
          a3[1] = (13 * HIBYTE(v13) + 19 * (unsigned int)HIBYTE(v46) + 16) >> 5;
          v25 = (13 * (unsigned __int8)v13 + 19 * (unsigned int)(unsigned __int8)v46 + 16) >> 5;
        }
        else
        {
          v34 = 2 * (unsigned __int8)v46;
          a3[2] = (v21 + v12 + 2 * (v21 + 2 * (unsigned int)v12 + 2)) >> 3;
          v35 = 4 * HIBYTE(v46);
          a3[1] = (HIBYTE(v45) + HIBYTE(v46) + 2 * (HIBYTE(v45) + 2 * (unsigned int)HIBYTE(v46) + 2)) >> 3;
          v36 = 4 * (unsigned __int8)v46;
          *a3 = ((unsigned __int8)v45 + (unsigned __int8)v46 + 2 * (v34 + (unsigned int)(unsigned __int8)v45 + 2)) >> 3;
          v37 = &a3[a5];
          v37[2] = (4 * v12 + v21 + 8 + v14 + 2 * (4 * v12 + (unsigned int)v21)) >> 4;
          v37[1] = (v35 + HIBYTE(v45) + 8 + HIBYTE(v13) + 2 * (v35 + (unsigned int)HIBYTE(v45))) >> 4;
          *v37 = (v36 + (unsigned __int8)v45 + 8 + (unsigned __int8)v13 + 2 * (v36 + (unsigned int)(unsigned __int8)v45)) >> 4;
          v38 = &v37[a5];
          v38[2] = (4 * v12 + v14 + 8 + v21 + 2 * (4 * v12 + (unsigned int)v14)) >> 4;
          v38[1] = (v35 + HIBYTE(v13) + 8 + HIBYTE(v45) + 2 * (v35 + (unsigned int)HIBYTE(v13))) >> 4;
          *v38 = (v36 + (unsigned __int8)v13 + 8 + (unsigned __int8)v45 + 2 * (v36 + (unsigned int)(unsigned __int8)v13)) >> 4;
          a3 = &v38[a5];
          v17 = v17 - a5 - a5 - a5;
          v12 = v54;
          a3[2] = (v54 + 4 + v14 + 2 * (v14 + 2 * (unsigned int)v54)) >> 3;
          a3[1] = (HIBYTE(v46) + HIBYTE(v13) + 2 * (HIBYTE(v13) + 2 * (unsigned int)HIBYTE(v46) + 2)) >> 3;
          v25 = ((unsigned __int8)v46 + (unsigned __int8)v13 + 2 * (v34 + (unsigned int)(unsigned __int8)v13 + 2)) >> 3;
        }
      }
      else
      {
        v39 = v12;
        v40 = 2 * (unsigned __int8)v46;
        v41 = 2 * v12;
        v42 = 2 * HIBYTE(v46);
        a3[2] = (v21 + v39 + 2 * (v41 + (unsigned int)v21 + 2)) >> 3;
        a3[1] = (HIBYTE(v45) + HIBYTE(v46) + 2 * (v42 + (unsigned int)HIBYTE(v45) + 2)) >> 3;
        *a3 = ((unsigned __int8)v45 + (unsigned __int8)v46 + 2 * (v40 + (unsigned int)(unsigned __int8)v45 + 2)) >> 3;
        v43 = &a3[a5];
        v43[2] = (v14 + 14 * v39 + v21 + 8) >> 4;
        v17 = v50 - a5 - a5;
        v43[1] = (HIBYTE(v47) + 14 * HIBYTE(v46) + HIBYTE(v45) + 8) >> 4;
        *v43 = ((unsigned __int8)v47 + 14 * (unsigned __int8)v46 + (unsigned __int8)v45 + 8) >> 4;
        a3 = &v43[a5];
        a3[2] = (v39 + v14 + 2 * (v41 + (unsigned int)v14 + 2)) >> 3;
        a3[1] = (HIBYTE(v46) + HIBYTE(v47) + 2 * (v42 + (unsigned int)HIBYTE(v47) + 2)) >> 3;
        v44 = (unsigned __int8)v47 + 2 * (v40 + (unsigned __int8)v47 + 2);
        v13 = v49;
        v12 = v54;
        v25 = ((unsigned int)(unsigned __int8)v46 + v44) >> 3;
      }
    }
    v16 = -(__int64)a5;
LABEL_10:
    v7 = v51;
    v9 = v48;
    *a3 = v25;
    v15 = v52;
LABEL_11:
    result = a5;
    v17 += v16;
    v5 = v53;
    a3 += a5;
    v50 = v17;
  }
  while ( a3 != a4 );
  return result;
}
