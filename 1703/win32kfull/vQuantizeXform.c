/*
 * XREFs of vQuantizeXform @ 0x1C0232898
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0230120 (bComputeMaxGlyph.c)
 * Callees:
 *     bSearchVdmxTable @ 0x1C02326A4 (bSearchVdmxTable.c)
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
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
  int v16; // eax
  unsigned int v17; // r10d
  int v18; // r15d
  int v19; // edi
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // r8
  int v23; // r11d
  __int64 v24; // r10
  __int64 v25; // r11
  int v26; // [rsp+30h] [rbp-28h]
  unsigned int v27; // [rsp+34h] [rbp-24h]
  _BYTE v28[6]; // [rsp+3Ch] [rbp-1Ch] BYREF
  int v29; // [rsp+44h] [rbp-14h]
  __int16 v30; // [rsp+A0h] [rbp+48h]
  unsigned int v31; // [rsp+A8h] [rbp+50h]
  unsigned int v32; // [rsp+B0h] [rbp+58h]
  int v33; // [rsp+B8h] [rbp+60h]

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
  v32 = *(__int16 *)(v1 + 408);
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
                       (unsigned __int16 *)v28,
                       a1) )
  {
    *(_DWORD *)(a1 + 164) = -*(__int16 *)&v28[4];
    *(_DWORD *)(a1 + 160) = -*(__int16 *)&v28[2];
    *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v28;
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
  v16 = FixMul(v3, v32, v14);
  *(_DWORD *)&v28[2] = v17;
  *(_WORD *)v28 = v17;
  v18 = -v16;
  v19 = v16;
  v26 = v17;
  v33 = v17;
  v27 = v17;
  v29 = *(_DWORD *)v28;
  v30 = v17;
  v31 = v17;
  while ( 1 )
  {
    v20 = bSearchVdmxTable(v7, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 48), v18, (unsigned __int16 *)v28, a1);
    if ( v20 )
    {
      result = (unsigned int)(*(__int16 *)&v28[2] - *(__int16 *)&v28[4]);
      if ( (_DWORD)result == fixed )
      {
        *(_DWORD *)(a1 + 164) = -*(__int16 *)&v28[4];
        *(_DWORD *)(a1 + 160) = -*(__int16 *)&v28[2];
        result = *(unsigned __int16 *)v28;
        *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v28;
        goto LABEL_36;
      }
    }
    else
    {
      result = CompDiv(v32, v15 * (__int64)v19);
      if ( (_DWORD)result == fixed )
        goto LABEL_37;
      v20 = 0;
    }
    if ( (int)result >= fixed )
      break;
    if ( v26 )
    {
      if ( !v20 )
        goto LABEL_37;
      *(_DWORD *)(a1 + 164) = -*(__int16 *)&v28[4];
      v21 = *(__int16 *)&v28[2];
      goto LABEL_35;
    }
    ++v19;
    v33 = 1;
    --v18;
LABEL_29:
    ++v31;
    v29 = *(_DWORD *)v28;
    result = *(unsigned __int16 *)&v28[4];
    v30 = *(_WORD *)&v28[4];
    v27 = v20;
    if ( v31 >= 0x100 )
      goto LABEL_37;
  }
  --v19;
  ++v18;
  if ( !v33 )
  {
    v26 = 1;
    goto LABEL_29;
  }
  result = v27;
  if ( !v27 )
    goto LABEL_37;
  *(_DWORD *)(a1 + 164) = -v30;
  v21 = SHIWORD(v29);
LABEL_35:
  result = (unsigned int)-v21;
  *(_DWORD *)(a1 + 160) = result;
LABEL_36:
  *(_DWORD *)(a1 + 116) |= 4u;
LABEL_37:
  if ( v31 < 0x100 )
  {
    *(_DWORD *)(a1 + 124) = v19;
LABEL_39:
    result = CompDiv(v32, __PAIR64__(*(int *)(a1 + 124) >> 16, *(_DWORD *)(a1 + 124) << 16));
    v23 = *(_DWORD *)(a1 + 80);
    LODWORD(v24) = result;
    *(_DWORD *)(a1 + 96) = result;
    if ( v23 == v3
      || (result = FixMul((unsigned int)(v23 - result), (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL), v22),
          !(_DWORD)result) )
    {
      *(_DWORD *)(a1 + 80) = v24;
    }
    else
    {
      result = CompDiv(v3, v24 * v25);
      *(_DWORD *)(a1 + 80) = result;
    }
  }
  return result;
}
