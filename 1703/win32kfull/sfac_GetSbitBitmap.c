/*
 * XREFs of sfac_GetSbitBitmap @ 0x1C02C9D98
 * Callers:
 *     GetSbitComponent @ 0x1C02C1E60 (GetSbitComponent.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetSbitBitmap(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        unsigned int a4,
        __int16 a5,
        unsigned __int16 a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10,
        unsigned __int16 a11,
        unsigned __int16 a12,
        unsigned __int16 a13,
        unsigned __int16 a14,
        unsigned int a15,
        unsigned __int64 a16,
        _WORD *a17)
{
  unsigned __int64 v17; // r12
  __int64 v19; // rbp
  unsigned __int64 v20; // r15
  __int64 result; // rax
  unsigned __int16 v22; // r13
  _BYTE *v23; // r8
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r11
  __int64 v26; // r10
  __int16 v27; // r14
  __int16 v28; // di
  __int16 v29; // r9
  __int16 v30; // bx
  unsigned __int16 v31; // cx
  __int16 v32; // dx
  _BYTE *v33; // rax
  __int16 v34; // r9
  unsigned __int16 v35; // r10
  unsigned __int16 v36; // cx
  __int64 v37; // rcx
  int v38; // edx
  unsigned __int16 v39; // cx
  __int16 v40; // dx
  _BYTE *v41; // rax
  bool v42; // zf
  int v43; // r9d
  __int16 v44; // di
  __int16 v45; // dx
  _BYTE *v46; // rcx
  __int16 v47; // bp
  __int64 v48; // r13
  _BYTE *v49; // rdx
  unsigned __int16 v50; // r10
  __int16 v51; // di
  unsigned __int16 v52; // r10
  unsigned __int16 v53; // ax
  _BYTE *v54; // [rsp+38h] [rbp-40h] BYREF
  __int64 v55; // [rsp+40h] [rbp-38h]
  unsigned __int16 v57; // [rsp+C8h] [rbp+50h]
  unsigned __int16 v58; // [rsp+F0h] [rbp+78h]

  v17 = a16;
  v19 = a4;
  v20 = a16 + a15;
  result = sfac_GetDataPtr(a1, a3, a4, 16, 1, (__int64 *)&v54);
  v22 = 0;
  if ( !(_DWORD)result )
  {
    v23 = v54;
    v24 = (unsigned __int64)&v54[v19];
    *a17 = 0;
    v25 = a16 + a13 * a12;
    LODWORD(v26) = (a14 * a11) >> 3;
    v27 = (a14 * a11) & 7;
    if ( a2 != 1 )
    {
      if ( a2 == 2 || a2 == 5 )
        goto LABEL_13;
      if ( a2 != 6 )
      {
        if ( a2 != 7 )
        {
          if ( (unsigned int)a2 - 8 <= 1 )
          {
            if ( (unsigned __int64)(v23 + 2) <= v24 )
              *a17 = __ROR2__(*(_WORD *)v23, 8);
            else
              *a17 = 0;
          }
          goto LABEL_10;
        }
LABEL_13:
        v28 = a9;
        v29 = 0;
        v30 = a9 + a5;
        if ( a9 + a5 )
        {
          v31 = a14 * a6;
          v32 = a14 * a7;
          v26 = (unsigned __int16)v26;
          v55 = (unsigned __int16)v26;
          while ( 1 )
          {
            v33 = (_BYTE *)(v26 + v25);
            v34 = v29 - v32;
            v35 = v31;
            v54 = v33;
            v36 = (a14 * a11) & 7;
            v57 = 8;
            v58 = v36;
            if ( v35 )
              break;
LABEL_28:
            v29 = v34 - a14 * a8;
            if ( v28 )
              --v28;
            else
              v25 += a13;
            v31 = a14 * a6;
            v26 = v55;
            if ( !--v30 )
              goto LABEL_10;
          }
          while ( 1 )
          {
            if ( v34 < 8 )
            {
              v37 = (unsigned __int16)(((unsigned __int16)(7 - v34) >> 3) + 1);
              v34 += 8 * (((unsigned __int16)(7 - v34) >> 3) + 1);
              do
              {
                v22 <<= 8;
                if ( (_DWORD)v19 )
                {
                  v22 |= (unsigned __int8)*v23++;
                  LODWORD(v19) = v19 - 1;
                }
                --v37;
              }
              while ( v37 );
              v36 = v58;
            }
            v38 = v36;
            v39 = v35 + v36;
            if ( v57 <= (unsigned int)v35 + v38 )
              v39 = v57;
            v57 = v39;
            if ( (unsigned __int64)v54 >= v20 || (unsigned __int64)v54 < v17 )
              break;
            v40 = v22 >> (v34 + v58 - 8);
            v34 += v58 - v39;
            v41 = v54;
            v17 = a16;
            *v54 |= byte_1C02EA3F0[v58] & byte_1C02EA3F8[v39] & v40;
            v54 = v41 + 1;
            v42 = v58 - v39 + v35 == 0;
            v35 += v58 - v39;
            v36 = 0;
            v58 = 0;
            if ( v42 )
            {
              v32 = a14 * a7;
              goto LABEL_28;
            }
          }
LABEL_56:
          InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
          return 6656LL;
        }
        goto LABEL_10;
      }
    }
    v43 = (a14 * a6 + 7) / 8;
    if ( v27 )
    {
      v47 = a5;
      if ( a5 )
      {
        v48 = (unsigned __int16)v26;
        while ( 1 )
        {
          v49 = (_BYTE *)(v25 + v48);
          v50 = 0;
          if ( (unsigned __int64)&v23[(unsigned __int16)v43] > v24 )
            LOWORD(v43) = v24 - (_WORD)v23;
          v51 = 0;
          if ( (_WORD)v43 )
            break;
LABEL_52:
          if ( (unsigned __int64)v49 >= v20 || (unsigned __int64)v49 < a16 )
            goto LABEL_56;
          v25 += a13;
          *v49 |= v50 >> v27;
          if ( !--v47 )
            goto LABEL_10;
        }
        while ( (unsigned __int64)v49 < v20 && (unsigned __int64)v49 >= a16 )
        {
          v52 = (unsigned __int8)*v23++ | v50;
          v53 = v52;
          v50 = v52 << 8;
          *v49++ |= v53 >> v27;
          if ( (unsigned __int16)++v51 >= (unsigned __int16)v43 )
            goto LABEL_52;
        }
        goto LABEL_56;
      }
    }
    else
    {
      v44 = a5;
      if ( a5 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)&v23[(unsigned __int16)v43] > v24 )
            LOWORD(v43) = v24 - (_WORD)v23;
          v45 = 0;
          if ( (_WORD)v43 )
            break;
LABEL_42:
          v25 += a13;
          if ( !--v44 )
            goto LABEL_10;
        }
        v46 = (_BYTE *)(v25 + (unsigned __int16)v26);
        while ( (unsigned __int64)v46 < v20 && (unsigned __int64)v46 >= a16 )
        {
          *v46++ |= *v23++;
          if ( (unsigned __int16)++v45 >= (unsigned __int16)v43 )
            goto LABEL_42;
        }
        goto LABEL_56;
      }
    }
LABEL_10:
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return 0LL;
  }
  return result;
}
