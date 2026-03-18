/*
 * XREFs of sfac_ShaveSbitMetrics @ 0x1C02C5888
 * Callers:
 *     GetSbitComponent @ 0x1C02BBC74 (GetSbitComponent.c)
 *     GetSbitMetrics @ 0x1C02BC100 (GetSbitMetrics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     InvokeReleaseSfntFrag @ 0x1C02C2D94 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C378C (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ShaveSbitMetrics(
        __int64 a1,
        __int16 a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        _WORD *a6,
        unsigned __int16 *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        _WORD *a12,
        _WORD *a13,
        _WORD *a14,
        _WORD *a15)
{
  __int16 v15; // bx
  int v17; // esi
  _WORD *v18; // r13
  __int16 v19; // cx
  unsigned __int8 v20; // di
  unsigned __int16 v21; // r12
  unsigned __int8 v22; // r14
  __int64 result; // rax
  __int16 v24; // ax
  unsigned __int16 v25; // r10
  unsigned __int16 v26; // r11
  __int16 v27; // r8
  __int16 v28; // cx
  __int16 v29; // r9
  unsigned __int16 v30; // r14
  unsigned __int8 *v31; // r12
  int v32; // r13d
  unsigned __int16 v33; // dx
  unsigned __int16 v34; // r15
  __int16 v35; // ax
  char v36; // cl
  char v37; // dl
  __int64 v38; // rcx
  char v39; // al
  __int16 v40; // ax
  __int16 v41; // r15
  __int16 v42; // si
  _BYTE *v43; // r10
  char v44; // r9
  unsigned __int8 v45; // dl
  __int16 v46; // r8
  _BYTE *v47; // r10
  unsigned __int8 v48; // dl
  _WORD *v49; // rcx
  char v50; // [rsp+30h] [rbp-89h]
  __int16 v51; // [rsp+32h] [rbp-87h]
  __int16 v52; // [rsp+34h] [rbp-85h]
  __int16 v53; // [rsp+36h] [rbp-83h]
  unsigned __int16 v54; // [rsp+38h] [rbp-81h]
  unsigned __int8 *v55; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 *v56; // [rsp+48h] [rbp-71h]
  __int64 v57; // [rsp+50h] [rbp-69h]
  _WORD *v58; // [rsp+58h] [rbp-61h]
  _WORD *v59; // [rsp+60h] [rbp-59h]
  _WORD *v60; // [rsp+68h] [rbp-51h]
  _WORD *v61; // [rsp+70h] [rbp-49h]
  _WORD *v62; // [rsp+78h] [rbp-41h]
  _WORD *v63; // [rsp+80h] [rbp-39h]
  _WORD *v64; // [rsp+88h] [rbp-31h]
  _WORD *v65; // [rsp+90h] [rbp-29h]
  _WORD *v66; // [rsp+98h] [rbp-21h]
  _QWORD v67[2]; // [rsp+A0h] [rbp-19h] BYREF

  v15 = 0;
  v17 = a4;
  v18 = a7;
  *a8 = 0;
  v57 = a1;
  *a9 = 0;
  v60 = a12;
  v65 = a13;
  *a10 = 0;
  *a11 = 0;
  v64 = a6;
  v56 = a7;
  v58 = a8;
  v59 = a9;
  v62 = a10;
  v63 = a11;
  v61 = a14;
  v66 = a15;
  if ( a2 == 5 )
  {
    v19 = *a7;
    v20 = 0x80;
    v21 = a5;
    if ( a5 * *a7 <= 128 )
    {
      v22 = 0;
      v67[0] = 0LL;
      v67[1] = 0LL;
      if ( a4 )
      {
        if ( v19 && *a6 )
        {
          result = sfac_GetDataPtr(a1, a3, a4, 16, 1, (__int64 *)&v55);
          if ( (_DWORD)result )
            return result;
          v24 = *a6;
          v25 = 0;
          v52 = 0;
          v26 = 0;
          v51 = 0;
          v27 = 0;
          v53 = *a6;
          v28 = 0;
          v29 = *a6;
          if ( *a6 )
          {
            v30 = 8;
            v31 = v55;
            v32 = 0;
            v33 = a5 * *a7;
            v54 = v33;
            do
            {
              v50 = 0;
              v55 = (unsigned __int8 *)v67;
              v34 = v33;
              if ( v33 )
              {
                do
                {
                  if ( v26 < 8u )
                  {
                    v25 <<= 8;
                    if ( v17 )
                    {
                      v35 = *v31++;
                      v25 |= v35;
                      --v17;
                    }
                    v26 += 8;
                  }
                  v36 = v26;
                  if ( v30 > v34 )
                    v30 = v34;
                  v26 -= v30;
                  v37 = byte_1C02E6F18[v30] & (v25 >> (v36 - 8));
                  v38 = (__int64)v55;
                  v39 = v37 | v50;
                  v50 |= v37;
                  *v55 |= v37;
                  v55 = (unsigned __int8 *)(v38 + 1);
                  v34 -= v30;
                }
                while ( v34 );
                v27 = v52;
                if ( v39 )
                {
                  v32 = 1;
                  v28 = v29 - 1;
                  v51 = v29 - 1;
                }
                else
                {
                  v28 = v51;
                }
                v33 = v54;
              }
              v30 = 8;
              --v29;
              v40 = v27 + 1;
              if ( v32 )
                v40 = v27;
              v52 = v40;
              v27 = v40;
            }
            while ( v29 );
            v22 = v67[0];
            v20 = 0x80;
            v21 = a5;
            v18 = v56;
            v24 = v53;
          }
          v41 = 0;
          v42 = 0;
          if ( v27 != v24 )
          {
            v41 = v28;
            v42 = v27;
          }
          InvokeReleaseSfntFrag(*(_DWORD *)(v57 + 12));
          v43 = v67;
          switch ( v21 )
          {
            case 1u:
              v44 = 1;
              break;
            case 2u:
              v20 = -64;
              v44 = 3;
              break;
            case 4u:
              v20 = -16;
              v44 = 15;
              break;
            default:
              v44 = -1;
              v20 = -1;
              break;
          }
          v45 = v20;
          v46 = 0;
          if ( (v22 & v20) != 0 )
          {
LABEL_39:
            v47 = (char *)v67 + ((unsigned __int64)(unsigned __int16)(v21 * (*v18 - 1)) >> 3);
            v48 = v20 >> ((v21 * (*(_BYTE *)v18 - 1)) & 7);
            while ( (v48 & *v47) == 0 )
            {
              ++v15;
              if ( v48 == v20 )
              {
                v48 = v44;
                --v47;
              }
              else
              {
                v48 <<= v21;
              }
            }
            v49 = v64;
            *v58 = v46;
            *v59 = v15;
            *v18 -= v46 + v15;
            *v60 += v46;
            *v61 += v46;
            *v62 = v42;
            *v63 = v41;
            *v49 -= v41 + v42;
            *v65 -= v42;
            *v66 -= v42;
          }
          else
          {
            while ( ++v46 != *v18 )
            {
              v45 >>= v21;
              if ( !v45 )
              {
                v45 = v20;
                ++v43;
              }
              if ( (v45 & *v43) != 0 )
                goto LABEL_39;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
