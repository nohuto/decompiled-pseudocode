/*
 * XREFs of sfac_ShaveSbitMetrics @ 0x1C02CBA74
 * Callers:
 *     GetSbitComponent @ 0x1C02C1E60 (GetSbitComponent.c)
 *     GetSbitMetrics @ 0x1C02C22E0 (GetSbitMetrics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
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
  __int16 v28; // dx
  __int16 v29; // r9
  unsigned __int16 v30; // r14
  unsigned __int8 *v31; // r13
  int v32; // edi
  unsigned __int16 v33; // r12
  unsigned __int16 v34; // r15
  __int16 v35; // ax
  __int16 v36; // dx
  __int64 v37; // rcx
  char v38; // al
  __int16 v39; // ax
  __int16 v40; // r15
  __int16 v41; // si
  _BYTE *v42; // r10
  char v43; // r9
  unsigned __int8 v44; // dl
  __int16 v45; // r8
  _BYTE *v46; // r10
  unsigned __int8 v47; // dl
  _WORD *v48; // rcx
  char v49; // [rsp+30h] [rbp-89h]
  __int16 v50; // [rsp+32h] [rbp-87h]
  __int16 v51; // [rsp+34h] [rbp-85h]
  __int16 v52; // [rsp+36h] [rbp-83h]
  unsigned __int8 *v53; // [rsp+38h] [rbp-81h] BYREF
  int v54; // [rsp+40h] [rbp-79h]
  unsigned __int16 *v55; // [rsp+48h] [rbp-71h]
  __int64 v56; // [rsp+50h] [rbp-69h]
  _WORD *v57; // [rsp+58h] [rbp-61h]
  _WORD *v58; // [rsp+60h] [rbp-59h]
  _WORD *v59; // [rsp+68h] [rbp-51h]
  _WORD *v60; // [rsp+70h] [rbp-49h]
  _WORD *v61; // [rsp+78h] [rbp-41h]
  _WORD *v62; // [rsp+80h] [rbp-39h]
  _WORD *v63; // [rsp+88h] [rbp-31h]
  _WORD *v64; // [rsp+90h] [rbp-29h]
  _WORD *v65; // [rsp+98h] [rbp-21h]
  _QWORD v66[2]; // [rsp+A0h] [rbp-19h] BYREF

  v15 = 0;
  v17 = a4;
  v18 = a7;
  *a8 = 0;
  v56 = a1;
  *a9 = 0;
  v59 = a12;
  v64 = a13;
  *a10 = 0;
  *a11 = 0;
  v63 = a6;
  v55 = a7;
  v57 = a8;
  v58 = a9;
  v61 = a10;
  v62 = a11;
  v60 = a14;
  v65 = a15;
  if ( a2 == 5 )
  {
    v19 = *a7;
    v20 = 0x80;
    v21 = a5;
    if ( a5 * *a7 <= 128 )
    {
      v22 = 0;
      v66[0] = 0LL;
      v66[1] = 0LL;
      if ( a4 )
      {
        if ( v19 && *a6 )
        {
          result = sfac_GetDataPtr(a1, a3, a4, 16, 1, (__int64 *)&v53);
          if ( (_DWORD)result )
            return result;
          v24 = *a6;
          v25 = 0;
          v51 = 0;
          v26 = 0;
          v50 = 0;
          v27 = 0;
          v52 = *a6;
          v28 = 0;
          v29 = *a6;
          if ( *a6 )
          {
            v30 = 8;
            v31 = v53;
            v32 = 0;
            v33 = a5 * *a7;
            v54 = a5 * *a7;
            do
            {
              v49 = 0;
              v53 = (unsigned __int8 *)v66;
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
                  if ( v30 > v34 )
                    v30 = v34;
                  v36 = v25 >> (v26 - 8);
                  v26 -= v30;
                  LOBYTE(v36) = byte_1C02EA3F8[v30] & v36;
                  v37 = (__int64)v53;
                  v38 = v36 | v49;
                  v49 |= v36;
                  *v53 |= v36;
                  v53 = (unsigned __int8 *)(v37 + 1);
                  v34 -= v30;
                }
                while ( v34 );
                v27 = v51;
                v33 = v54;
                if ( v38 )
                {
                  v28 = v29 - 1;
                  v32 = 1;
                  v50 = v29 - 1;
                }
                else
                {
                  v28 = v50;
                }
              }
              v30 = 8;
              --v29;
              v39 = v27 + 1;
              if ( v32 )
                v39 = v27;
              v51 = v39;
              v27 = v39;
            }
            while ( v29 );
            v22 = v66[0];
            v20 = 0x80;
            v21 = a5;
            v18 = v55;
            v24 = v52;
          }
          v40 = 0;
          v41 = 0;
          if ( v27 != v24 )
          {
            v40 = v28;
            v41 = v27;
          }
          InvokeReleaseSfntFrag(*(_DWORD *)(v56 + 12));
          v42 = v66;
          switch ( v21 )
          {
            case 1u:
              v43 = 1;
              break;
            case 2u:
              v20 = -64;
              v43 = 3;
              break;
            case 4u:
              v20 = -16;
              v43 = 15;
              break;
            default:
              v43 = -1;
              v20 = -1;
              break;
          }
          v44 = v20;
          v45 = 0;
          if ( (v22 & v20) != 0 )
          {
LABEL_38:
            v46 = (char *)v66 + ((unsigned __int64)(unsigned __int16)(v21 * (*v18 - 1)) >> 3);
            v47 = v20 >> ((v21 * (*(_BYTE *)v18 - 1)) & 7);
            while ( (v47 & *v46) == 0 )
            {
              ++v15;
              if ( v47 == v20 )
              {
                v47 = v43;
                --v46;
              }
              else
              {
                v47 <<= v21;
              }
            }
            v48 = v63;
            *v57 = v45;
            *v58 = v15;
            *v18 -= v45 + v15;
            *v59 += v45;
            *v60 += v45;
            *v61 = v41;
            *v62 = v40;
            *v48 -= v40 + v41;
            *v64 -= v41;
            *v65 -= v41;
          }
          else
          {
            while ( ++v45 != *v18 )
            {
              v44 >>= v21;
              if ( !v44 )
              {
                v44 = v20;
                ++v42;
              }
              if ( (v44 & *v42) != 0 )
                goto LABEL_38;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
