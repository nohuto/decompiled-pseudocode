/*
 * XREFs of ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01F1040
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F0224 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01F1200 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct _MOVESIZEDATA *a1, int a2, struct tagMONITOR *a3, unsigned int *a4)
{
  struct tagCHECKPOINT *v4; // r10
  int v9; // edx
  int v10; // ecx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r11
  int v15; // r8d
  int v16; // esi
  signed int v17; // eax
  signed int v18; // r9d
  int v19; // r8d
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r11
  int v24; // ecx
  int v25; // r8d
  int v26; // edi
  int v27; // ecx
  signed int v28; // eax
  int v29; // r9d
  int v30; // r8d
  int v31; // ecx
  unsigned __int64 v32; // [rsp+40h] [rbp+8h]

  v4 = 0LL;
  if ( (*((_DWORD *)a1 + 45) & 0x400) != 0 )
  {
    v9 = (__int16)a2 - *((_DWORD *)a1 + 38);
    v10 = SHIWORD(a2) - *((_DWORD *)a1 + 39);
    v32 = __PAIR64__(v10, v9);
    if ( v9 == *((_DWORD *)a1 + 71) && v10 == *((_DWORD *)a1 + 72) )
      return 0LL;
    v4 = GetOrUpdateCheckPointIfNotPresent(a1);
    if ( !v4 )
      return 0LL;
    *(_QWORD *)((char *)a1 + 284) = v32;
  }
  v12 = *((int *)a1 + 40);
  v13 = dword_1C02EE728[v12];
  if ( (int)v13 >= 0 )
  {
    v14 = dword_1C02EE728[v12];
    *((_DWORD *)a1 + v13 + 6) = (__int16)a2;
    v15 = v13 ^ 2;
    v16 = *((_DWORD *)a1 + v15 + 6);
    v17 = *((_DWORD *)a1 + 22);
    v18 = v16 - (__int16)a2;
    v19 = v15 & 2;
    if ( !v19 )
      v18 = (__int16)a2 - v16;
    if ( v18 < v17
      || (v17 = *((_DWORD *)a1 + 24), v18 > v17)
      || (*(_BYTE *)(*(_QWORD *)a1 + 71LL) & 0x40) != 0 && (v17 = abs32(*((_DWORD *)a1 + v14 + 18) - v16), v18 > v17) )
    {
      v20 = -v17;
      if ( !v19 )
        v20 = v17;
      *((_DWORD *)a1 + v14 + 6) = v16 + v20;
    }
  }
  v21 = *((int *)a1 + 40);
  v22 = dword_1C02EE6F8[v21];
  if ( (int)v22 >= 0 )
  {
    v23 = dword_1C02EE6F8[v21];
    v24 = SHIWORD(a2);
    *((_DWORD *)a1 + v22 + 6) = SHIWORD(a2);
    v25 = v22 ^ 2;
    v26 = *((_DWORD *)a1 + v25 + 6);
    v27 = v24 - v26;
    v28 = *((_DWORD *)a1 + 23);
    v29 = -v27;
    v30 = v25 & 2;
    if ( !v30 )
      v29 = v27;
    if ( v29 < v28
      || (v28 = *((_DWORD *)a1 + 25), v29 > v28)
      || (*(_BYTE *)(*(_QWORD *)a1 + 71LL) & 0x40) != 0 && (v28 = abs32(*((_DWORD *)a1 + v23 + 18) - v26), v29 > v28) )
    {
      v31 = -v28;
      if ( !v30 )
        v31 = v28;
      *((_DWORD *)a1 + v23 + 6) = v26 + v31;
    }
  }
  if ( (*((_DWORD *)a1 + 45) & 0x400) != 0 )
    SnapSizeRect(a1, v4, a3, a4);
  return 1LL;
}
