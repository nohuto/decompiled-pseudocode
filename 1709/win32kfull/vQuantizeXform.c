/*
 * XREFs of vQuantizeXform @ 0x1C0233DF8
 * Callers:
 *     bComputeMaxGlyph @ 0x1C023168C (bComputeMaxGlyph.c)
 * Callees:
 *     bSearchVdmxTable @ 0x1C0233C04 (bSearchVdmxTable.c)
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall vQuantizeXform(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // r13d
  unsigned int *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rdi
  int v11; // r14d
  __int64 v12; // rdx
  int fixed; // esi
  __int64 v14; // r8
  int v15; // r14d
  int v16; // edi
  unsigned int v17; // r10d
  unsigned int v18; // eax
  __int16 v19; // r15
  unsigned int v20; // edx
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r8
  int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // r11
  int v27; // [rsp+30h] [rbp-28h]
  int v28; // [rsp+34h] [rbp-24h]
  unsigned int v29; // [rsp+38h] [rbp-20h]
  _BYTE v30[6]; // [rsp+40h] [rbp-18h] BYREF
  int v31; // [rsp+48h] [rbp-10h]
  __int16 v32; // [rsp+A0h] [rbp+48h]
  unsigned int v33; // [rsp+A8h] [rbp+50h]
  unsigned int v34; // [rsp+B0h] [rbp+58h]
  int v35; // [rsp+B8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 96);
  v4 = *(unsigned int **)(a1 + 192);
  result = *(_QWORD *)(v1 + 64);
  v6 = v4[20];
  v7 = result + v6;
  if ( !(_DWORD)v6 )
    v7 = 0LL;
  v8 = v4[16];
  v9 = result + v4[4];
  v10 = result + v8;
  if ( !(_DWORD)v8 )
    v10 = 0LL;
  v11 = *(_DWORD *)(a1 + 116);
  v34 = *(__int16 *)(v1 + 408);
  if ( (v11 & 1) == 0 || (int)v3 <= 0 || !v7 )
    return result;
  if ( (*(_DWORD *)(a1 + 40) & 0x8000) != 0 )
    v12 = (unsigned int)-*(__int16 *)(v1 + 408);
  else
    v12 = (unsigned int)(*(__int16 *)(v1 + 412) + *(__int16 *)(v1 + 414));
  fixed = FixMul(v3, v12, v1);
  if ( (unsigned int)bSearchVdmxTable(
                       v7,
                       *(_DWORD *)(a1 + 44),
                       *(_DWORD *)(a1 + 48),
                       fixed,
                       (unsigned __int16 *)v30,
                       a1) )
  {
    *(_DWORD *)(a1 + 164) = -*(__int16 *)&v30[4];
    *(_DWORD *)(a1 + 160) = -*(__int16 *)&v30[2];
    *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v30;
    *(_DWORD *)(a1 + 116) = v11 | 4;
    goto LABEL_39;
  }
  if ( v10 )
    v15 = (__int16)__ROR2__(*(_WORD *)(v10 + 74), 8) + (__int16)__ROR2__(*(_WORD *)(v10 + 76), 8);
  else
    v15 = (__int16)__ROR2__(*(_WORD *)(v9 + 42), 8) - (__int16)__ROR2__(*(_WORD *)(v9 + 38), 8);
  if ( fixed < 0 )
  {
    *(_DWORD *)(a1 + 124) = -fixed;
    goto LABEL_39;
  }
  v16 = FixMul(v3, v34, v14);
  *(_DWORD *)&v30[2] = v17;
  LODWORD(result) = -v16;
  *(_WORD *)v30 = v17;
  v28 = -v16;
  v27 = v17;
  v35 = v17;
  v29 = v17;
  v31 = *(_DWORD *)v30;
  v32 = v17;
  v33 = v17;
  while ( 1 )
  {
    v18 = bSearchVdmxTable(v7, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 48), result, (unsigned __int16 *)v30, a1);
    v19 = *(_WORD *)&v30[2];
    v20 = v18;
    if ( v18 )
    {
      result = (unsigned int)(*(__int16 *)&v30[2] - *(__int16 *)&v30[4]);
      if ( (_DWORD)result == fixed )
      {
        *(_DWORD *)(a1 + 164) = -*(__int16 *)&v30[4];
        *(_DWORD *)(a1 + 160) = -v19;
        result = *(unsigned __int16 *)v30;
        *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v30;
        goto LABEL_36;
      }
    }
    else
    {
      result = CompDiv(v34, v15 * (__int64)v16);
      if ( (_DWORD)result == fixed )
        goto LABEL_37;
      v20 = 0;
    }
    if ( (int)result >= fixed )
      break;
    if ( v27 )
    {
      if ( !v20 )
        goto LABEL_37;
      *(_DWORD *)(a1 + 164) = -*(__int16 *)&v30[4];
      v22 = v19;
      goto LABEL_35;
    }
    ++v16;
    v35 = 1;
    v21 = -1;
LABEL_29:
    ++v33;
    v31 = *(_DWORD *)v30;
    v32 = *(_WORD *)&v30[4];
    result = (unsigned int)(v21 + v28);
    v29 = v20;
    v28 += v21;
    if ( v33 >= 0x100 )
      goto LABEL_37;
  }
  --v16;
  if ( !v35 )
  {
    v27 = 1;
    v21 = 1;
    goto LABEL_29;
  }
  result = v29;
  if ( !v29 )
    goto LABEL_37;
  *(_DWORD *)(a1 + 164) = -v32;
  v22 = SHIWORD(v31);
LABEL_35:
  result = (unsigned int)-v22;
  *(_DWORD *)(a1 + 160) = result;
LABEL_36:
  *(_DWORD *)(a1 + 116) |= 4u;
LABEL_37:
  if ( v33 < 0x100 )
  {
    *(_DWORD *)(a1 + 124) = v16;
LABEL_39:
    result = CompDiv(v34, __PAIR64__(*(int *)(a1 + 124) >> 16, *(_DWORD *)(a1 + 124) << 16));
    v24 = *(_DWORD *)(a1 + 80);
    LODWORD(v25) = result;
    *(_DWORD *)(a1 + 96) = result;
    if ( v24 == v3
      || (result = FixMul((unsigned int)(v24 - result), (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL), v23),
          !(_DWORD)result) )
    {
      *(_DWORD *)(a1 + 80) = v25;
    }
    else
    {
      result = CompDiv(v3, v25 * v26);
      *(_DWORD *)(a1 + 80) = result;
    }
  }
  return result;
}
