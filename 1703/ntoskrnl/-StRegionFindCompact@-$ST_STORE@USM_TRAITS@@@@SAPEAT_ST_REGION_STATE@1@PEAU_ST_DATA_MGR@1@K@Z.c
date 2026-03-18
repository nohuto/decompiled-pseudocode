/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14003196C
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140059DEC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14001FEBC (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400AC7C0 (RtlFindNextForwardRunClearCapped.c)
 */

_WORD *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  int v2; // r12d
  unsigned int v4; // esi
  unsigned int v5; // r8d
  __int64 v6; // r13
  _WORD *v7; // rdi
  _WORD *v8; // r15
  unsigned int v9; // r11d
  _WORD *v10; // r9
  unsigned int v11; // ebp
  int v12; // r10d
  unsigned int v13; // ecx
  unsigned __int16 v14; // dx
  _WORD *result; // rax
  int v16; // edx
  unsigned int v17; // r10d
  int NextForwardRunClearCapped; // eax
  unsigned int v19; // ebp
  unsigned __int16 *v20; // r9
  unsigned int v21; // r14d
  int v22; // r11d
  int v23; // eax
  _WORD v24[36]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v2 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6520LL) )
  {
    v5 = 0;
    v4 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1076);
    v5 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  }
  v6 = *(unsigned int *)(a1 + 856);
  v7 = v24;
  v8 = *(_WORD **)(a1 + 1016);
  v24[0] ^= (v24[0] ^ (*(_WORD *)(a1 + 816) - *(_WORD *)(a1 + 820) + 1)) & 0x1FFF;
  if ( *(_DWORD *)(a1 + 1072) && v5 )
  {
    v17 = 0;
    v25 = 0;
    do
    {
LABEL_28:
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(a1 + 1056, v17, 0xFFFFFFFFLL, &v25);
      if ( !NextForwardRunClearCapped )
      {
        v2 = v26;
        goto LABEL_4;
      }
      v17 = v25;
      v19 = NextForwardRunClearCapped + v25;
      v20 = &v8[v25];
    }
    while ( v25 >= NextForwardRunClearCapped + v25 );
    v21 = *(_DWORD *)(a1 + 776);
    v22 = (v21 >> 18) & 1;
    while ( 1 )
    {
      if ( !v22 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v17) )
      {
        v23 = (_BYTE)v21 ? 0 : *v20 >> 13;
        if ( v23 == v26 )
          break;
      }
      ++v17;
      ++v20;
      v25 = v17;
      if ( v17 >= v19 )
        goto LABEL_28;
    }
    v7 = v20;
  }
  else
  {
LABEL_4:
    v9 = 0;
    v10 = &v8[v4];
    if ( !(_DWORD)v6 )
      return 0LL;
    v11 = *(_DWORD *)(a1 + 776);
    v12 = (v11 >> 18) & 1;
    do
    {
      if ( v10 >= &v8[v6] )
      {
        v10 = v8;
        v4 = 0;
      }
      if ( !v12 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v4) )
      {
        v13 = (_BYTE)v11 ? 0 : (unsigned __int16)*v10 >> 13;
        v14 = *v10 & 0x1FFF;
        if ( v14 < (unsigned __int16)(*v7 & 0x1FFF) )
        {
          if ( v13 == v2 )
          {
            v7 = v10;
            if ( !v14 )
              goto LABEL_19;
          }
          else if ( !v14 && v10 != &v8[*(unsigned int *)(a1 + 16 * (v13 + 77LL))] )
          {
            v7 = v10;
            goto LABEL_19;
          }
        }
      }
      ++v10;
      ++v9;
      ++v4;
    }
    while ( v9 < (unsigned int)v6 );
    if ( v7 == v24 )
      return 0LL;
  }
LABEL_19:
  result = v7;
  v16 = v7 - v8 + 1;
  if ( v16 == *(_DWORD *)(a1 + 856) )
    v16 = 0;
  *(_DWORD *)(a1 + 1076) = v16;
  return result;
}
