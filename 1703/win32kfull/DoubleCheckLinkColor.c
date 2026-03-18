/*
 * XREFs of DoubleCheckLinkColor @ 0x1C02CF16C
 * Callers:
 *     itrp_MIRP @ 0x1C02D5EC0 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02D6800 (itrp_MSIRP.c)
 * Callees:
 *     ContNum @ 0x1C02CF130 (ContNum.c)
 */

__int64 __fastcall DoubleCheckLinkColor(_QWORD *a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v6; // r14
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r11
  __int64 v12; // r15
  int v13; // r12d
  int v14; // edx
  int v15; // r13d
  int v16; // ecx
  __int64 v17; // r11
  __int64 v18; // r10
  int v19; // esi
  int v20; // edi
  int v21; // r8d
  int v22; // ecx
  bool v23; // sf
  bool v24; // of
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // r12d
  int v28; // esi
  int v29; // edi
  int v30; // [rsp+20h] [rbp-38h]
  int v31; // [rsp+24h] [rbp-34h]

  v4 = a2;
  v6 = a3;
  v8 = 0;
  if ( (int)ContNum((__int64)a1, a2) < 0 )
    return 0LL;
  v9 = ContNum((__int64)a1, v6);
  if ( v9 < 0 )
    return 0LL;
  if ( (_DWORD)v10 != v9 )
    return a4;
  _mm_lfence();
  v12 = v10;
  v13 = *(__int16 *)(a1[7] + 2 * v10);
  v14 = v13;
  v15 = *(__int16 *)(a1[8] + 2 * v10);
  v16 = v15;
  if ( (_DWORD)v4 != v15 )
    v14 = v4 + 1;
  if ( (_DWORD)v4 != v13 )
    v16 = v4 - 1;
  if ( (_DWORD)v6 != v14 && (_DWORD)v6 != v16 )
    return a4;
  v17 = a1[4];
  v18 = a1[5];
  v19 = *(_DWORD *)(v17 + 4 * v4);
  v20 = *(_DWORD *)(v18 + 4 * v4);
  v21 = (*(_DWORD *)(v18 + 4LL * v14) - v20) * (v19 - *(_DWORD *)(v17 + 4LL * v16));
  v22 = (*(_DWORD *)(v17 + 4LL * v14) - v19) * (v20 - *(_DWORD *)(v18 + 4LL * v16));
  v24 = __OFSUB__(v21, v22);
  v23 = v21 - v22 < 0;
  v25 = v15;
  v31 = v23 ^ v24;
  if ( (_DWORD)v6 != v13 )
    v25 = v6 - 1;
  v30 = *(_DWORD *)(v17 + 4 * v6);
  if ( (_DWORD)v6 != v15 )
    v13 = v6 + 1;
  v26 = v13;
  v27 = *(_DWORD *)(v18 + 4 * v6);
  if ( v31 != (*(_DWORD *)(v18 + 4 * v26) - v27) * (v30 - *(_DWORD *)(v17 + 4LL * v25)) < (*(_DWORD *)(v17 + 4 * v26)
                                                                                         - v30)
                                                                                        * (v27
                                                                                         - *(_DWORD *)(v18 + 4LL * v25)) )
    return 0LL;
  v28 = v30 - v19 >= 0 ? v30 - v19 : v19 - v30;
  v29 = v27 - v20 >= 0 ? v27 - v20 : v20 - v27;
  if ( 2 * v28 < v29 )
    return 0LL;
  LOBYTE(v8) = ((*(_BYTE *)(a1[11] + v12) & 1) == 0) != v31;
  return (unsigned int)(v8 + 1);
}
