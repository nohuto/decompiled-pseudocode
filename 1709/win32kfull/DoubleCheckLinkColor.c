/*
 * XREFs of DoubleCheckLinkColor @ 0x1C02C8F20
 * Callers:
 *     itrp_MIRP @ 0x1C02CFC80 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02D05B0 (itrp_MSIRP.c)
 * Callees:
 *     ContNum @ 0x1C02C8EE4 (ContNum.c)
 */

__int64 __fastcall DoubleCheckLinkColor(_QWORD *a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // r11
  __int64 v11; // r14
  int v12; // r15d
  int v13; // edx
  int v14; // r12d
  int v15; // ecx
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r10
  int v19; // ebx
  int v20; // esi
  int v21; // r13d
  int v22; // r8d
  int v23; // ecx
  bool v24; // sf
  bool v25; // of
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // ebx
  int v30; // esi
  int v31; // ebx
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+24h] [rbp-34h]

  v4 = a2;
  v6 = a3;
  if ( (int)ContNum((__int64)a1, a2) < 0 )
    return 0LL;
  v8 = ContNum((__int64)a1, v6);
  if ( v8 < 0 )
    return 0LL;
  if ( (_DWORD)v9 != v8 )
    return a4;
  _mm_lfence();
  v11 = v9;
  v12 = *(__int16 *)(a1[7] + 2 * v9);
  v13 = v12;
  v14 = *(__int16 *)(a1[8] + 2 * v9);
  v15 = v14;
  if ( (_DWORD)v4 != v14 )
    v13 = v4 + 1;
  if ( (_DWORD)v4 != v12 )
    v15 = v4 - 1;
  if ( (_DWORD)v6 != v13 && (_DWORD)v6 != v15 )
    return a4;
  v16 = a1[4];
  v17 = v4;
  v18 = a1[5];
  v19 = *(_DWORD *)(v16 + 4 * v4);
  v20 = *(_DWORD *)(v18 + 4 * v17);
  v21 = *(_DWORD *)(v16 + 4 * v6);
  v22 = (*(_DWORD *)(v18 + 4LL * v13) - v20) * (v19 - *(_DWORD *)(v16 + 4LL * v15));
  v23 = (*(_DWORD *)(v16 + 4LL * v13) - v19) * (v20 - *(_DWORD *)(v18 + 4LL * v15));
  v25 = __OFSUB__(v22, v23);
  v24 = v22 - v23 < 0;
  v32 = *(_DWORD *)(v18 + 4 * v6);
  v26 = v14;
  if ( (_DWORD)v6 != v12 )
    v26 = v6 - 1;
  if ( (_DWORD)v6 != v14 )
    v12 = v6 + 1;
  v33 = v24 ^ v25;
  if ( v33 != (*(_DWORD *)(v18 + 4LL * v12) - v32) * (*(_DWORD *)(v16 + 4 * v6) - *(_DWORD *)(v16 + 4LL * v26)) < (*(_DWORD *)(v16 + 4LL * v12) - v21) * (v32 - *(_DWORD *)(v18 + 4LL * v26)) )
    return 0LL;
  v27 = v21 - v19;
  v28 = v32 - v20;
  v29 = v19 - v21;
  if ( v27 >= 0 )
    v29 = v27;
  v30 = v20 - v32;
  v31 = 2 * v29;
  if ( v28 >= 0 )
    v30 = v28;
  if ( v31 >= v30 )
    return (v33 ^ (unsigned int)((*(_BYTE *)(a1[11] + v11) & 1) == 0)) + 1;
  else
    return 0LL;
}
