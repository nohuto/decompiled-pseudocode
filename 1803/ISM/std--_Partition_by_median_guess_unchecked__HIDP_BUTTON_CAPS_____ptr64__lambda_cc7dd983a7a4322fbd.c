/*
 * XREFs of std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A242C
 * Callers:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A222C (std--_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c.c)
 * Callees:
 *     std::_Med3_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A2D40 (std--_Med3_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 */

__int128 **__fastcall std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int128 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // r15
  __int128 *v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int128 *v17; // rcx
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // dl
  __int128 *v22; // rdx
  __int128 *v23; // r8
  unsigned __int8 v24; // r9
  unsigned __int8 v25; // r10
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int128 v29; // xmm6
  __int64 v30; // xmm2_8
  bool v31; // zf
  __int128 *v32; // r9
  unsigned __int8 v33; // r10
  unsigned __int8 v34; // r11
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  __int128 v38; // xmm6
  __int64 v39; // xmm2_8
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  __int128 v42; // xmm5
  __int128 v43; // xmm6
  __int64 v44; // xmm2_8
  __int128 v45; // xmm3
  __int128 v46; // xmm4
  __int128 v47; // xmm5
  __int128 v48; // xmm6
  __int64 v49; // xmm2_8
  __int128 v50; // xmm3
  __int128 v51; // xmm4
  __int128 v52; // xmm5
  __int128 v53; // xmm6
  __int64 v54; // xmm2_8
  __int128 v55; // xmm3
  __int128 v56; // xmm4
  __int128 v57; // xmm5
  __int128 v58; // xmm6
  __int64 v59; // xmm2_8
  __int128 v60; // xmm3
  __int128 v61; // xmm4
  __int128 v62; // xmm5
  __int128 v63; // xmm6
  __int64 v64; // xmm2_8
  __int128 **result; // rax

  v6 = a3 - 72;
  v7 = (__int128 *)(a2
                  + 72
                  * (((__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2)
                   / 2));
  v8 = a2;
  v9 = (__int64)(a3 - 72 - a2) / 72;
  if ( v9 <= 40 )
  {
    v16 = a3 - 72;
  }
  else
  {
    v10 = (v9 + 1) / 8;
    v11 = 72 * v10 + a2;
    std::_Med3_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
      v8,
      v11,
      144 * v10 + a2);
    std::_Med3_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
      (char *)v7 - v12,
      v7,
      (char *)v7 + v12);
    std::_Med3_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v6 - v14, v6 - v13, v6);
    v16 = v15;
    v8 = v11;
  }
  std::_Med3_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(v8, v7, v16);
  v17 = (__int128 *)((char *)v7 + 72);
  while ( a2 < (unsigned __int64)v7 )
  {
    v18 = *((_BYTE *)v7 - 70);
    v19 = *((_BYTE *)v7 + 2);
    if ( v18 < v19 || v18 == v19 && *((_WORD *)v7 - 33) < *((_WORD *)v7 + 3) )
      break;
    if ( v19 < v18 || v19 == v18 && *((_WORD *)v7 + 3) < *((_WORD *)v7 - 33) )
      break;
    v7 = (__int128 *)((char *)v7 - 72);
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v20 = *((_BYTE *)v7 + 2);
    do
    {
      v21 = *((_BYTE *)v17 + 2);
      if ( v21 < v20 || v21 == v20 && *((_WORD *)v17 + 3) < *((_WORD *)v7 + 3) )
        break;
      if ( v20 < v21 || v20 == v21 && *((_WORD *)v7 + 3) < *((_WORD *)v17 + 3) )
        break;
      v17 = (__int128 *)((char *)v17 + 72);
    }
    while ( (unsigned __int64)v17 < a3 );
  }
  v22 = v17;
  v23 = v7;
  while ( 2 )
  {
    while ( (unsigned __int64)v22 < a3 )
    {
      v24 = *((_BYTE *)v7 + 2);
      v25 = *((_BYTE *)v22 + 2);
      if ( v24 >= v25 && (v24 != v25 || *((_WORD *)v7 + 3) >= *((_WORD *)v22 + 3)) )
      {
        if ( v25 < v24 || v25 == v24 && *((_WORD *)v22 + 3) < *((_WORD *)v7 + 3) )
          break;
        if ( v17 != v22 )
        {
          v26 = *v17;
          v27 = v17[1];
          v28 = v17[2];
          v29 = v17[3];
          v30 = *((_QWORD *)v17 + 8);
          *v17 = *v22;
          v17[1] = v22[1];
          v17[2] = v22[2];
          v17[3] = v22[3];
          *((_QWORD *)v17 + 8) = *((_QWORD *)v22 + 8);
          *v22 = v26;
          v22[1] = v27;
          v22[2] = v28;
          v22[3] = v29;
          *((_QWORD *)v22 + 8) = v30;
        }
        v17 = (__int128 *)((char *)v17 + 72);
      }
LABEL_32:
      v22 = (__int128 *)((char *)v22 + 72);
    }
    v31 = v23 == (__int128 *)a2;
    if ( (unsigned __int64)v23 <= a2 )
      goto LABEL_46;
    v32 = (__int128 *)((char *)v23 - 72);
    while ( 1 )
    {
      v33 = *((_BYTE *)v32 + 2);
      v34 = *((_BYTE *)v7 + 2);
      if ( v33 >= v34 && (v33 != v34 || *((_WORD *)v32 + 3) >= *((_WORD *)v7 + 3)) )
        break;
LABEL_44:
      v23 = (__int128 *)((char *)v23 - 72);
      v32 = (__int128 *)((char *)v32 - 72);
      if ( a2 >= (unsigned __int64)v23 )
        goto LABEL_45;
    }
    if ( v34 >= v33 && (v34 != v33 || *((_WORD *)v7 + 3) >= *((_WORD *)v32 + 3)) )
    {
      v7 = (__int128 *)((char *)v7 - 72);
      if ( v7 != v32 )
      {
        v35 = *v7;
        v36 = v7[1];
        v37 = v7[2];
        v38 = v7[3];
        v39 = *((_QWORD *)v7 + 8);
        *v7 = *v32;
        v7[1] = v32[1];
        v7[2] = v32[2];
        v7[3] = v32[3];
        *((_QWORD *)v7 + 8) = *((_QWORD *)v32 + 8);
        *v32 = v35;
        v32[1] = v36;
        v32[2] = v37;
        v32[3] = v38;
        *((_QWORD *)v32 + 8) = v39;
      }
      goto LABEL_44;
    }
LABEL_45:
    v31 = v23 == (__int128 *)a2;
LABEL_46:
    if ( !v31 )
    {
      v23 = (__int128 *)((char *)v23 - 72);
      if ( v22 != (__int128 *)a3 )
      {
        v60 = *v22;
        v61 = v22[1];
        v62 = v22[2];
        v63 = v22[3];
        v64 = *((_QWORD *)v22 + 8);
        *v22 = *v23;
        v22[1] = v23[1];
        v22[2] = v23[2];
        v22[3] = v23[3];
        *((_QWORD *)v22 + 8) = *((_QWORD *)v23 + 8);
        *v23 = v60;
        v23[1] = v61;
        v23[2] = v62;
        v23[3] = v63;
        *((_QWORD *)v23 + 8) = v64;
        goto LABEL_32;
      }
      v7 = (__int128 *)((char *)v7 - 72);
      if ( v23 != v7 )
      {
        v50 = *v23;
        v51 = v23[1];
        v52 = v23[2];
        v53 = v23[3];
        v54 = *((_QWORD *)v23 + 8);
        *v23 = *v7;
        v23[1] = v7[1];
        v23[2] = v7[2];
        v23[3] = v7[3];
        *((_QWORD *)v23 + 8) = *((_QWORD *)v7 + 8);
        *v7 = v50;
        v7[1] = v51;
        v7[2] = v52;
        v7[3] = v53;
        *((_QWORD *)v7 + 8) = v54;
      }
      v55 = *v7;
      v17 = (__int128 *)((char *)v17 - 72);
      v56 = v7[1];
      v57 = v7[2];
      v58 = v7[3];
      v59 = *((_QWORD *)v7 + 8);
      *v7 = *v17;
      v7[1] = v17[1];
      v7[2] = v17[2];
      v7[3] = v17[3];
      *((_QWORD *)v7 + 8) = *((_QWORD *)v17 + 8);
      *v17 = v55;
      v17[1] = v56;
      v17[2] = v57;
      v17[3] = v58;
      *((_QWORD *)v17 + 8) = v59;
      continue;
    }
    break;
  }
  if ( v22 != (__int128 *)a3 )
  {
    if ( v17 != v22 )
    {
      v40 = *v7;
      v41 = v7[1];
      v42 = v7[2];
      v43 = v7[3];
      v44 = *((_QWORD *)v7 + 8);
      *v7 = *v17;
      v7[1] = v17[1];
      v7[2] = v17[2];
      v7[3] = v17[3];
      *((_QWORD *)v7 + 8) = *((_QWORD *)v17 + 8);
      *v17 = v40;
      v17[1] = v41;
      v17[2] = v42;
      v17[3] = v43;
      *((_QWORD *)v17 + 8) = v44;
    }
    v17 = (__int128 *)((char *)v17 + 72);
    v45 = *v7;
    v46 = v7[1];
    v47 = v7[2];
    v48 = v7[3];
    v49 = *((_QWORD *)v7 + 8);
    *v7 = *v22;
    v7[1] = v22[1];
    v7[2] = v22[2];
    v7[3] = v22[3];
    *((_QWORD *)v7 + 8) = *((_QWORD *)v22 + 8);
    v7 = (__int128 *)((char *)v7 + 72);
    *v22 = v45;
    v22[1] = v46;
    v22[2] = v47;
    v22[3] = v48;
    *((_QWORD *)v22 + 8) = v49;
    goto LABEL_32;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v17;
  return result;
}
