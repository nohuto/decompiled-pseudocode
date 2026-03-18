/*
 * XREFs of bVerifyTTF @ 0x1C0228EE8
 * Callers:
 *     bLoadTTF @ 0x1C0227B94 (bLoadTTF.c)
 * Callees:
 *     bCheckLocaTable @ 0x1C0226214 (bCheckLocaTable.c)
 *     bComputeIDs @ 0x1C02262C4 (bComputeIDs.c)
 *     bComputeIFISIZE @ 0x1C0226660 (bComputeIFISIZE.c)
 *     bGetTablePointers @ 0x1C0227298 (bGetTablePointers.c)
 *     ui16LangId @ 0x1C0229D38 (ui16LangId.c)
 */

__int64 __fastcall bVerifyTTF(
        unsigned __int64 a1,
        unsigned __int32 a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        unsigned int *a5,
        unsigned int *a6,
        _WORD *a7,
        __int16 *a8,
        _QWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        __int64 a12,
        _DWORD *a13,
        int *a14)
{
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rcx
  _WORD *v22; // rdx
  unsigned int v23; // ecx
  unsigned __int16 v24; // ax
  __int16 v25; // r8
  unsigned __int64 v26; // rdx

  if ( !(unsigned int)bGetTablePointers(a1, a2, a3, a5) )
    return 0LL;
  v17 = a5[18];
  v18 = a5[4];
  v19 = a5[12];
  v20 = a1 + v17;
  if ( !(_DWORD)v17 )
    v20 = 0LL;
  v21 = a5[16];
  v22 = (_WORD *)(a1 + v21);
  if ( !(_DWORD)v21 )
    v22 = 0LL;
  if ( a5[5] < 0x36
    || a5[7] < 0x24
    || a5[13] < 0x20
    || 4 * (unsigned __int64)(unsigned __int16)__ROR2__(*(_WORD *)(a5[6] + a1 + 34), 8) > a5[9] )
  {
    return 0LL;
  }
  if ( v22 )
  {
    v23 = a5[17];
    if ( v23 < 0x4E || __ROR2__(*v22, 8) && v23 < 0x56 )
      *((_QWORD *)a5 + 8) = 0LL;
  }
  if ( _byteswap_ulong(*(_DWORD *)(v18 + a1 + 12)) != 1594834165 )
    return 0LL;
  if ( !(unsigned int)bComputeIDs(a1, a5, a7, a8, a9, a10, a11, a12) )
    return 0LL;
  v24 = ui16LangId((unsigned __int16)*a7, a4);
  if ( !(unsigned int)bComputeIFISIZE(a1, (__int64)a5, v25, *a8, v24, a6, a13, a14)
    || !(unsigned int)bCheckLocaTable(
                        __ROR2__(*(_WORD *)(v18 + a1 + 50), 8),
                        a1,
                        (__int64)a5,
                        __ROR2__(*(_WORD *)(v19 + a1 + 4), 8)) )
  {
    return 0LL;
  }
  if ( v20 )
  {
    v26 = a5[19];
    if ( (unsigned int)v26 < 8
      || (unsigned __int64)(_byteswap_ulong(*(_DWORD *)(v20 + 4)) * (unsigned __int16)__ROR2__(*(_WORD *)(v20 + 2), 8))
       + 8 > v26 )
    {
      a5[19] = 0;
      a5[18] = 0;
    }
  }
  return 1LL;
}
