/*
 * XREFs of sbit_GetMetrics @ 0x1C02BE560
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02B4CD4 (fs_FindBitMapSize.c)
 * Callees:
 *     GetSbitMetrics @ 0x1C02BC100 (GetSbitMetrics.c)
 *     RowBytesAlign32 @ 0x1C02BC328 (RowBytesAlign32.c)
 *     SScaleX @ 0x1C02BC3A4 (SScaleX.c)
 *     SScaleY @ 0x1C02BC3D8 (SScaleY.c)
 *     UScaleX @ 0x1C02BCB58 (UScaleX.c)
 *     UScaleY @ 0x1C02BCBA0 (UScaleY.c)
 *     sbit_ValidateScaleX @ 0x1C02BECBC (sbit_ValidateScaleX.c)
 */

__int64 __fastcall sbit_GetMetrics(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _WORD *a9,
        _WORD *a10,
        _DWORD *a11,
        _DWORD *a12)
{
  unsigned __int16 v15; // di
  __int64 result; // rax
  __int16 v17; // dx
  _WORD *v18; // rcx
  __int16 v19; // ax
  unsigned __int16 v20; // dx
  _WORD *v21; // rcx
  __int16 v22; // ax
  __int64 v23; // rdx
  int v24; // esi
  __int16 v25; // ax
  int v26; // ebp
  __int16 v27; // r10
  __int16 v28; // r13
  _WORD *v29; // rcx
  _WORD *v30; // rcx
  int v31; // ebp
  int v32; // r12d
  __int64 v33; // rcx
  int v34; // esi
  unsigned __int16 v35; // r11
  int v36; // r10d
  unsigned __int16 v37; // r9
  int v38; // r8d
  unsigned __int16 v39; // cx
  unsigned __int64 v40; // rcx
  int v41; // r9d
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  bool v45; // zf
  int v46; // r11d
  int v47; // r10d
  unsigned int v48; // eax
  int v49; // esi
  int v50; // edx
  unsigned int v51; // eax
  __int16 v52; // [rsp+20h] [rbp-48h]
  __int16 v53; // [rsp+22h] [rbp-46h]
  int v54; // [rsp+24h] [rbp-44h]
  int v55; // [rsp+28h] [rbp-40h]
  unsigned int v56; // [rsp+2Ch] [rbp-3Ch]
  int v57; // [rsp+30h] [rbp-38h]

  v15 = 1;
  if ( *(_WORD *)(a1 + 94) != 1 )
    v15 = 8;
  result = GetSbitMetrics(a1, a2);
  if ( !(_DWORD)result )
  {
    result = sbit_ValidateScaleX(a1);
    if ( !(_DWORD)result )
    {
      if ( *(_WORD *)(a1 + 28) == 3 && *(_WORD *)(a1 + 36) == v17 )
        return 7168LL;
      v19 = UScaleX(v18, *(_WORD *)(a1 + 48));
      v20 = *(_WORD *)(a1 + 46);
      *(_WORD *)(a1 + 60) = v19;
      v22 = UScaleY(v21, v20);
      v23 = *(unsigned __int16 *)(a1 + 76);
      *(_WORD *)(a1 + 58) = v22;
      v24 = SScaleY(a1, v23);
      v25 = SScaleX(a1, *(unsigned __int16 *)(a1 + 74));
      v26 = v25;
      v28 = v24 - v27;
      v52 = v25;
      v53 = *(_WORD *)(a1 + 60) + v25;
      v54 = (unsigned __int16)UScaleX(v29, *(_WORD *)(a1 + 50)) << 6;
      v56 = (unsigned __int16)UScaleY(v30, *(_WORD *)(a1 + 52)) << 6;
      v57 = v26;
      v55 = v24 << 6;
      v31 = v26 << 6;
      v32 = SScaleX(a1, *(unsigned __int16 *)(a1 + 78)) << 6;
      v34 = SScaleY(v33, *(unsigned __int16 *)(a1 + 80)) << 6;
      result = RowBytesAlign32(v35, *(_WORD *)(a1 + 94), (_WORD *)(a1 + 54));
      if ( !(_DWORD)result )
      {
        result = RowBytesAlign32(*(_WORD *)(a1 + 48), v15, (_WORD *)(a1 + 56));
        if ( !(_DWORD)result )
        {
          result = RowBytesAlign32(*(_WORD *)(a1 + 60), v15, (_WORD *)(a1 + 62));
          if ( !(_DWORD)result )
          {
            *(_DWORD *)(a1 + 24) = 0;
            v37 = *(_WORD *)(a1 + 46);
            if ( *(unsigned __int16 *)(a1 + 54) * (unsigned __int64)v37 <= 0xFFFFFFFF )
            {
              v38 = *(unsigned __int16 *)(a1 + 54) * v37;
              v39 = *(_WORD *)(a1 + 56);
              if ( *(_WORD *)(a1 + 62) > v39 )
                v39 = *(_WORD *)(a1 + 62);
              if ( *(_WORD *)(a1 + 58) > v37 )
                v37 = *(_WORD *)(a1 + 58);
              v40 = v39 * (unsigned __int64)v37;
              if ( v40 <= 0xFFFFFFFF )
              {
                v41 = v40;
                if ( *(_WORD *)(a1 + 38) )
                {
                  switch ( *(_WORD *)(a1 + 38) )
                  {
                    case 1:
                      *a9 = v53;
                      v49 = -v34;
                      a9[1] = -(__int16)v36;
                      a9[3] = -v28;
                      a9[2] = v52;
                      a3[1] = v54;
                      v50 = (v53 - v57) << 6;
                      *a3 = 0;
                      *a4 = -v55;
                      a4[1] = v50 + v31;
                      a5[1] = (v53 << 6) - v31;
                      *a5 = 0;
                      *a7 = v49;
                      *(_QWORD *)a6 = -v56;
                      a7[1] = v50 + v32;
                      *(_QWORD *)a8 = (unsigned int)(v49 - (v36 << 6));
                      break;
                    case 2:
                      a3[1] = 0;
                      *a9 = -v28;
                      a9[2] = -(__int16)v36;
                      a9[1] = -v53;
                      a9[3] = -v52;
                      *a3 = -v54;
                      v46 = (v57 - v53) << 6;
                      *a4 = v46 - v31;
                      v47 = (v36 - v28) << 6;
                      a4[1] = v47 - v55;
                      a5[1] = -64 * v28;
                      *a5 = -v31;
                      *(_DWORD *)a6 = 0;
                      *(_DWORD *)(a6 + 4) = -v56;
                      *a7 = v46 - v32;
                      a7[1] = v47 - v34;
                      *(_DWORD *)a8 = -64 * v53;
                      *(_DWORD *)(a8 + 4) = -v34;
                      v48 = (((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC)
                          * *(unsigned __int16 *)(a1 + 58);
                      *(_WORD *)(a1 + 64) = ((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                      *(_DWORD *)(a1 + 16) = v48;
                      goto LABEL_24;
                    case 3:
                      *a3 = 0;
                      a9[2] = -v53;
                      *a9 = -v52;
                      a9[1] = v28;
                      a9[3] = v36;
                      a3[1] = -v54;
                      v42 = (v28 - v36) << 6;
                      *a4 = v42 + v55;
                      a4[1] = -v31;
                      a5[1] = v31 - (v57 << 6);
                      *a5 = 0;
                      *(_QWORD *)a6 = v56;
                      *a7 = v42 + v34;
                      a7[1] = -v32;
                      *(_QWORD *)a8 = (unsigned int)(v34 + ((v28 - 2 * v36) << 6));
                      break;
                    default:
                      return 6146LL;
                  }
                  v43 = *(unsigned __int16 *)(a1 + 60);
                  v44 = ((*(unsigned __int16 *)(a1 + 58) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                  *(_WORD *)(a1 + 64) = v44;
                  *(_DWORD *)(a1 + 16) = v43 * v44;
                }
                else
                {
                  *a4 = v31;
                  *a9 = v36;
                  a9[3] = v53;
                  a9[1] = v52;
                  a9[2] = v28;
                  *a3 = v54;
                  a3[1] = 0;
                  *a5 = v31;
                  a5[1] = v36 << 6;
                  a4[1] = v55;
                  *(_DWORD *)a6 = 0;
                  *(_DWORD *)(a6 + 4) = v56;
                  *a7 = v32;
                  a7[1] = v34;
                  *(_DWORD *)a8 = v32;
                  *(_DWORD *)(a8 + 4) = v34;
                  v51 = (((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC)
                      * *(unsigned __int16 *)(a1 + 58);
                  v45 = *(_WORD *)(a1 + 28) == 3;
                  *(_WORD *)(a1 + 64) = ((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                  *(_DWORD *)(a1 + 16) = v51;
                  if ( !v45 )
                  {
                    v45 = *(_WORD *)(a1 + 94) == 1;
                    if ( *(_WORD *)(a1 + 94) == 1 )
                    {
                      *(_DWORD *)(a1 + 20) = 0;
LABEL_27:
                      *a10 = *(_WORD *)(a1 + 64);
                      *a11 = *(_DWORD *)(a1 + 16);
                      *a12 = *(_DWORD *)(a1 + 20);
                      return 0LL;
                    }
LABEL_25:
                    *(_DWORD *)(a1 + 20) = v41;
                    if ( !v45 )
                    {
                      *(_DWORD *)(a1 + 24) = v38;
                      *(_DWORD *)(a1 + 20) = v41 + v38;
                    }
                    goto LABEL_27;
                  }
                }
LABEL_24:
                v45 = *(_WORD *)(a1 + 94) == 1;
                goto LABEL_25;
              }
            }
            return 6149LL;
          }
        }
      }
    }
  }
  return result;
}
