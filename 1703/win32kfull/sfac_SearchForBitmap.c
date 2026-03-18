/*
 * XREFs of sfac_SearchForBitmap @ 0x1C02CB378
 * Callers:
 *     GetSbitComponent @ 0x1C02C1E60 (GetSbitComponent.c)
 *     sbit_SearchForBitmap @ 0x1C02C4D34 (sbit_SearchForBitmap.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_SearchForBitmap(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        unsigned __int32 *a7,
        unsigned __int16 *a8,
        unsigned __int32 *a9,
        unsigned __int32 *a10)
{
  unsigned __int64 v10; // rsi
  _DWORD *v11; // r14
  __int64 v12; // rbp
  __int64 result; // rax
  __int64 v16; // r8
  unsigned int v17; // r13d
  unsigned int v18; // r11d
  unsigned int v19; // r12d
  unsigned int v20; // edx
  unsigned __int16 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int16 v24; // cx
  unsigned __int16 v25; // r15
  unsigned __int32 v26; // r10d
  __int64 v27; // r14
  unsigned int v28; // r11d
  unsigned int v29; // r9d
  unsigned int v30; // ebp
  unsigned __int32 v31; // r9d
  unsigned int v32; // edx
  unsigned int v33; // r15d
  __int64 j; // rax
  unsigned __int16 v35; // ax
  unsigned __int32 *v36; // rbp
  unsigned __int32 v37; // r10d
  __int64 v38; // rdx
  __int64 k; // r11
  unsigned int v40; // ecx
  unsigned int v41; // ebp
  unsigned int v42; // r14d
  unsigned int v43; // r9d
  unsigned __int16 v44; // cx
  unsigned __int32 v45; // edx
  __int64 v46; // r9
  unsigned __int32 v47; // r9d
  unsigned int v48; // r9d
  int v49; // eax
  _WORD *v50; // r11
  __int64 v51; // r9
  unsigned int v52; // edx
  int v53; // edx
  unsigned __int32 v54; // eax
  unsigned int i; // [rsp+30h] [rbp-48h]
  unsigned int v56; // [rsp+34h] [rbp-44h]
  __int64 v57[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 v58; // [rsp+80h] [rbp+8h]

  v10 = *(unsigned int *)(a1 + 164);
  *a4 = 0;
  v11 = a4;
  v12 = a3;
  result = sfac_GetDataPtr(a1, 0, v10, 17, 1, v57);
  if ( !(_DWORD)result )
  {
    v16 = v57[0];
    if ( __ROR2__(*(_WORD *)((unsigned int)(v12 + 40) + v57[0]), 8) <= a2
      && __ROR2__(*(_WORD *)((unsigned int)(v12 + 42) + v57[0]), 8) >= a2 )
    {
      v17 = _byteswap_ulong(*(_DWORD *)(v12 + v57[0]));
      v56 = v17;
      v18 = v17;
      v19 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v12 + 8) + v57[0]));
      if ( v17 <= (unsigned int)v10 && v19 <= ((unsigned int)v10 - v17) >> 3 && v19 )
      {
        v20 = v17 + 4;
        for ( i = v17 + 4; ; v20 = i )
        {
          if ( *v11 )
            goto LABEL_70;
          v21 = __ROR2__(*(_WORD *)(v18 + v16), 8);
          if ( v21 > a2 || __ROR2__(*(_WORD *)(v20 - 2 + v16), 8) < a2 )
            goto LABEL_68;
          v22 = v17 + _byteswap_ulong(*(_DWORD *)(v20 + v16));
          v23 = (unsigned int)(v22 + 8);
          if ( (unsigned int)v23 > (unsigned int)v10 || (unsigned int)v22 > (unsigned int)v10 || (unsigned int)v10 < 8 )
            goto LABEL_70;
          v24 = __ROR2__(*(_WORD *)(v22 + v16), 8);
          v25 = __ROR2__(*(_WORD *)((unsigned int)(v22 + 2) + v16), 8);
          v58 = v25;
          v26 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v22 + 4) + v16));
          if ( v24 == 1 )
            break;
          if ( v24 == 2 )
          {
            if ( v23 + 4 > v10 )
              goto LABEL_70;
            v48 = *(_DWORD *)(v23 + v16);
            v36 = a9;
            v49 = v21;
            v50 = a5;
            v31 = _byteswap_ulong(v48);
            v37 = v31 * (a2 - v49) + v26;
            *a9 = v37;
            *a7 = v22 + 12;
            *a6 = 1;
            *a5 = 3;
            goto LABEL_50;
          }
          if ( v24 == 3 )
          {
            v46 = (unsigned int)v22 + 2 * (a2 - v21 + 4);
            if ( v46 + 4 > v10 )
              goto LABEL_70;
            v45 = (unsigned __int16)__ROR2__(*(_WORD *)(v46 + v16), 8);
            v47 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(v46 + 2) + v16), 8);
            goto LABEL_47;
          }
          if ( v24 != 4 )
          {
            if ( v24 != 5 )
              goto LABEL_70;
            v27 = (unsigned int)(v22 + 24);
            if ( (unsigned int)v27 > (unsigned int)v10 )
              goto LABEL_70;
            _mm_lfence();
            v16 = v57[0];
            v28 = 0;
            v29 = *(_DWORD *)(v23 + v57[0]);
            v30 = 0;
            *a7 = v22 + 12;
            v31 = _byteswap_ulong(v29);
            *a6 = 1;
            *a5 = 3;
            v32 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v22 + 20) + v16));
            v33 = v32 - 1;
            if ( v32 > (unsigned int)(v10 - v27) >> 1 )
              goto LABEL_70;
            if ( __ROR2__(*(_WORD *)(v27 + v16), 8) != a2 )
            {
              v28 = v32 - 1;
              for ( j = (unsigned int)v27 + 2 * v33; ; j = (unsigned int)v27 + 2 * v28 )
              {
                v35 = __ROR2__(*(_WORD *)(j + v16), 8);
                if ( v35 == a2 )
                  break;
                if ( v35 >= a2 )
                  v33 = v28;
                else
                  v30 = v28;
                if ( v33 - v30 < 2 )
                  goto LABEL_70;
                v28 = (v33 + v30) >> 1;
              }
            }
            v36 = a9;
            v11 = a4;
            v25 = v58;
            v37 = v31 * v28 + v26;
            *a9 = v37;
            goto LABEL_49;
          }
          if ( v23 + 4 > v10 )
            goto LABEL_70;
          _mm_lfence();
          v16 = v57[0];
          v38 = (unsigned int)(v22 + 12);
          LODWORD(k) = v38;
          v40 = _byteswap_ulong(*(_DWORD *)(v23 + v57[0]));
          v41 = 0;
          v42 = v40 - 1;
          if ( v40 > ((unsigned int)(v10 - v38) >> 2) - 1 )
            goto LABEL_70;
          if ( __ROR2__(*(_WORD *)(v38 + v57[0]), 8) != a2 )
          {
            v43 = v40 - 1;
            for ( k = (unsigned int)v38 + 4 * v42; ; k = (unsigned int)v38 + 4 * v43 )
            {
              v44 = __ROR2__(*(_WORD *)(k + v57[0]), 8);
              if ( v44 == a2 )
                break;
              if ( v44 >= a2 )
                v42 = v43;
              else
                v41 = v43;
              if ( v42 - v41 < 2 )
                goto LABEL_70;
              v43 = (v42 + v41) >> 1;
            }
          }
          v11 = a4;
          v45 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(k + 2) + v57[0]), 8);
          v31 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(k + 6) + v57[0]), 8) - v45;
LABEL_48:
          v37 = v45 + v26;
          v36 = a9;
          *a7 = v37;
          *a6 = 2;
LABEL_49:
          v50 = a5;
LABEL_50:
          *a10 = v31;
          *a8 = v25;
          v53 = *(unsigned __int8 *)(a3 + 47 + v16);
          if ( !v25 )
            goto LABEL_68;
          if ( v25 <= 2u )
          {
            if ( v53 == 1 )
              *v50 = 1;
            else
              *v50 = 2;
            v54 = v37 + 5;
          }
          else
          {
            if ( v25 == 5 )
              goto LABEL_58;
            if ( v25 <= 5u )
              goto LABEL_68;
            if ( v25 <= 7u )
              goto LABEL_57;
            if ( v25 != 8 )
            {
              if ( v25 != 9 )
                goto LABEL_68;
LABEL_57:
              *v50 = 3;
              *v36 = v37 + 8;
LABEL_58:
              *v11 = 1;
              goto LABEL_68;
            }
            if ( v53 == 1 )
              *v50 = 1;
            else
              *v50 = 2;
            v54 = v37 + 6;
          }
          *v36 = v54;
          *v11 = 1;
LABEL_68:
          i += 8;
          v18 = v56 + 8;
          v56 += 8;
          if ( !--v19 )
            goto LABEL_70;
        }
        v51 = (unsigned int)v22 + 4 * (a2 - v21 + 2);
        if ( v51 + 8 > v10 )
          goto LABEL_70;
        v52 = *(_DWORD *)(v51 + v16);
        v47 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v51 + 4) + v16));
        v45 = _byteswap_ulong(v52);
LABEL_47:
        v31 = v47 - v45;
        if ( !v31 )
          goto LABEL_70;
        goto LABEL_48;
      }
    }
LABEL_70:
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return 0LL;
  }
  return result;
}
