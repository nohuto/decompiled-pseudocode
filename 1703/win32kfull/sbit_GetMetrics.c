/*
 * XREFs of sbit_GetMetrics @ 0x1C02C4708
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02BAEC8 (fs_FindBitMapSize.c)
 * Callees:
 *     GetSbitMetrics @ 0x1C02C22E0 (GetSbitMetrics.c)
 *     RowBytesAlign32 @ 0x1C02C2504 (RowBytesAlign32.c)
 *     SScaleX @ 0x1C02C2570 (SScaleX.c)
 *     SScaleY @ 0x1C02C25A4 (SScaleY.c)
 *     UScaleX @ 0x1C02C2D20 (UScaleX.c)
 *     UScaleY @ 0x1C02C2D68 (UScaleY.c)
 *     sbit_ValidateScaleX @ 0x1C02C4E6C (sbit_ValidateScaleX.c)
 */

__int64 __fastcall sbit_GetMetrics(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        int *a7,
        int *a8,
        _WORD *a9,
        _WORD *a10,
        _DWORD *a11,
        _DWORD *a12)
{
  unsigned __int16 v15; // di
  __int64 result; // rax
  _WORD *v17; // rcx
  __int16 v18; // ax
  unsigned __int16 v19; // dx
  _WORD *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rdx
  int v23; // esi
  __int16 v24; // ax
  int v25; // ebp
  __int16 v26; // r10
  _WORD *v27; // rcx
  _WORD *v28; // rcx
  int v29; // ebp
  int v30; // r13d
  __int64 v31; // rcx
  int v32; // esi
  unsigned __int16 v33; // dx
  int v34; // r10d
  unsigned __int16 *v35; // r11
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned __int64 v38; // r8
  unsigned __int16 v39; // ax
  unsigned __int64 v40; // r9
  int v41; // ecx
  int *v42; // rax
  int v43; // eax
  unsigned int v44; // ecx
  bool v45; // zf
  int v46; // r15d
  int v47; // eax
  unsigned int v48; // eax
  int v49; // esi
  int v50; // edx
  unsigned int v51; // eax
  __int16 v52; // [rsp+20h] [rbp-48h]
  __int16 v53; // [rsp+22h] [rbp-46h]
  __int16 v54; // [rsp+24h] [rbp-44h]
  int v55; // [rsp+28h] [rbp-40h]
  int v56; // [rsp+2Ch] [rbp-3Ch]
  unsigned int v57; // [rsp+30h] [rbp-38h]
  int v58; // [rsp+34h] [rbp-34h]

  v15 = 1;
  if ( *(_WORD *)(a1 + 94) != 1 )
    v15 = 8;
  result = GetSbitMetrics(a1, a2);
  if ( !(_DWORD)result )
  {
    result = sbit_ValidateScaleX(a1);
    if ( !(_DWORD)result )
    {
      if ( *(_WORD *)(a1 + 28) == 3 && !*(_WORD *)(a1 + 36) )
        return 7168LL;
      v18 = UScaleX(v17, *(_WORD *)(a1 + 48));
      v19 = *(_WORD *)(a1 + 46);
      *(_WORD *)(a1 + 60) = v18;
      v21 = UScaleY(v20, v19);
      v22 = *(unsigned __int16 *)(a1 + 76);
      *(_WORD *)(a1 + 58) = v21;
      v23 = SScaleY(a1, v22);
      v24 = SScaleX(a1, *(unsigned __int16 *)(a1 + 74));
      v25 = v24;
      v52 = v24;
      v53 = v23 - v26;
      v54 = *(_WORD *)(a1 + 60) + v24;
      v55 = (unsigned __int16)UScaleX(v27, *(_WORD *)(a1 + 50)) << 6;
      v57 = (unsigned __int16)UScaleY(v28, *(_WORD *)(a1 + 52)) << 6;
      v58 = v25;
      v56 = v23 << 6;
      v29 = v25 << 6;
      v30 = SScaleX(a1, *(unsigned __int16 *)(a1 + 78)) << 6;
      v32 = SScaleY(v31, *(unsigned __int16 *)(a1 + 80)) << 6;
      result = RowBytesAlign32(*(_WORD *)(a1 + 48), *(_WORD *)(a1 + 94), (_WORD *)(a1 + 54));
      if ( !(_DWORD)result )
      {
        result = RowBytesAlign32(*(_WORD *)(a1 + 48), v15, (_WORD *)(a1 + 56));
        if ( !(_DWORD)result )
        {
          result = RowBytesAlign32(*(_WORD *)(a1 + 60), v33, (_WORD *)(a1 + 62));
          if ( !(_DWORD)result )
          {
            v36 = *(unsigned __int16 *)(a1 + 54);
            v37 = *(unsigned __int16 *)(a1 + 46);
            *(_DWORD *)(a1 + 24) = 0;
            v38 = v36 * v37;
            if ( v38 <= 0xFFFFFFFF )
            {
              v39 = *(_WORD *)(a1 + 56);
              if ( *v35 > v39 )
                v39 = *v35;
              if ( *(_WORD *)(a1 + 58) > (unsigned __int16)v37 )
                LOWORD(v37) = *(_WORD *)(a1 + 58);
              v40 = v39 * (unsigned __int64)(unsigned __int16)v37;
              if ( v40 <= 0xFFFFFFFF )
              {
                if ( *(_WORD *)(a1 + 38) )
                {
                  switch ( *(_WORD *)(a1 + 38) )
                  {
                    case 1:
                      a9[3] = -v53;
                      v49 = -v32;
                      *a9 = v54;
                      a9[1] = -(__int16)v34;
                      a9[2] = v52;
                      a3[1] = v55;
                      v50 = (v54 - v58) << 6;
                      *a4 = -v56;
                      *a3 = 0;
                      a4[1] = v50 + v29;
                      a5[1] = (v54 << 6) - v29;
                      *a5 = 0;
                      *a7 = v49;
                      *(_QWORD *)a6 = -v57;
                      a7[1] = v50 + v30;
                      v42 = a8;
                      *a8 = v49 - (v34 << 6);
                      break;
                    case 2:
                      a3[1] = 0;
                      a9[2] = -(__int16)v34;
                      *a9 = -v53;
                      a9[3] = -v52;
                      a9[1] = -v54;
                      *a3 = -v55;
                      v46 = (v58 - v54) << 6;
                      *a4 = v46 - v29;
                      v47 = (v34 - v53) << 6;
                      a4[1] = v47 - v56;
                      a5[1] = -64 * v53;
                      *a5 = -v29;
                      *(_DWORD *)a6 = 0;
                      *(_DWORD *)(a6 + 4) = -v57;
                      *a7 = v46 - v30;
                      a7[1] = v47 - v32;
                      *a8 = -64 * v54;
                      a8[1] = -v32;
                      v48 = (((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC)
                          * *(unsigned __int16 *)(a1 + 58);
                      *(_WORD *)(a1 + 64) = ((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                      *(_DWORD *)(a1 + 16) = v48;
                      goto LABEL_24;
                    case 3:
                      a9[1] = v53;
                      a9[2] = -v54;
                      *a9 = -v52;
                      a9[3] = v34;
                      v41 = (v53 - v34) << 6;
                      a3[1] = -v55;
                      *a4 = v41 + v56;
                      *a3 = 0;
                      a4[1] = -v29;
                      *a5 = 0;
                      a5[1] = v29 - (v58 << 6);
                      *(_QWORD *)a6 = v57;
                      *a7 = v41 + v32;
                      a7[1] = -v30;
                      v42 = a8;
                      *a8 = v32 + ((v53 - 2 * v34) << 6);
                      break;
                    default:
                      return 6146LL;
                  }
                  v42[1] = 0;
                  v43 = *(unsigned __int16 *)(a1 + 60);
                  v44 = ((*(unsigned __int16 *)(a1 + 58) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                  *(_WORD *)(a1 + 64) = v44;
                  *(_DWORD *)(a1 + 16) = v43 * v44;
                }
                else
                {
                  a9[2] = v53;
                  *a9 = v34;
                  a9[3] = v54;
                  a9[1] = v52;
                  *a3 = v55;
                  a4[1] = v56;
                  *a5 = v29;
                  a5[1] = v34 << 6;
                  a3[1] = 0;
                  *a4 = v29;
                  *(_DWORD *)a6 = 0;
                  *(_DWORD *)(a6 + 4) = v57;
                  *a7 = v30;
                  a7[1] = v32;
                  *a8 = v30;
                  a8[1] = v32;
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
                    *(_DWORD *)(a1 + 20) = v40;
                    if ( !v45 )
                    {
                      *(_DWORD *)(a1 + 24) = v38;
                      *(_DWORD *)(a1 + 20) = v40 + v38;
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
