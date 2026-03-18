/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140270D24
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14026F9F8 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400C1A50 (RtlFindNextForwardRunClearCapped.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14026892C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

_WORD *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // esi
  __int64 v6; // r12
  _WORD *v7; // rdi
  _WORD *v8; // r14
  unsigned int v9; // r10d
  int NextForwardRunClearCapped; // eax
  unsigned int v11; // ebp
  _WORD *v12; // r9
  int v13; // r11d
  int v14; // eax
  unsigned int v15; // r10d
  int v16; // r11d
  unsigned int v17; // ecx
  unsigned __int16 v18; // dx
  _WORD *result; // rax
  int v20; // edx
  _WORD v21[28]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6552LL) )
  {
    v4 = 0;
    v5 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 1092);
    v4 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  }
  v6 = *(unsigned int *)(a1 + 856);
  v7 = v21;
  v8 = *(_WORD **)(a1 + 1032);
  v21[0] ^= (v21[0] ^ (*(_WORD *)(a1 + 816) - *(_WORD *)(a1 + 820) + 1)) & 0x1FFF;
  if ( *(_DWORD *)(a1 + 1088) && v4 )
  {
    v9 = 0;
    v22 = 0;
LABEL_7:
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(a1 + 1072, v9, 0xFFFFFFFF, &v22);
      if ( !NextForwardRunClearCapped )
        break;
      v9 = v22;
      v11 = NextForwardRunClearCapped + v22;
      v12 = &v8[v22];
      if ( v22 < NextForwardRunClearCapped + v22 )
      {
        v13 = *(_DWORD *)(a1 + 776);
        while ( 1 )
        {
          if ( (v13 & 0x40000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v9) )
          {
            v14 = (_BYTE)v13 ? 0 : (unsigned __int16)*v12 >> 13;
            if ( v14 == a2 )
              break;
          }
          ++v9;
          ++v12;
          v22 = v9;
          if ( v9 >= v11 )
            goto LABEL_7;
        }
LABEL_18:
        v7 = v12;
        goto LABEL_36;
      }
    }
  }
  v15 = 0;
  v12 = &v8[v5];
  if ( !(_DWORD)v6 )
    return 0LL;
  v16 = *(_DWORD *)(a1 + 776);
  do
  {
    if ( v12 >= &v8[v6] )
    {
      v12 = v8;
      v5 = 0;
    }
    if ( (v16 & 0x40000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v5) )
    {
      v17 = (_BYTE)v16 ? 0 : (unsigned __int16)*v12 >> 13;
      v18 = *v12 & 0x1FFF;
      if ( v18 < (unsigned __int16)(*v7 & 0x1FFF) )
      {
        if ( v17 == a2 )
        {
          v7 = v12;
          if ( !v18 )
            goto LABEL_36;
        }
        else if ( !v18 && v12 != &v8[*(unsigned int *)(a1 + 16 * (v17 + 78LL))] )
        {
          goto LABEL_18;
        }
      }
    }
    ++v12;
    ++v15;
    ++v5;
  }
  while ( v15 < (unsigned int)v6 );
  if ( v7 == v21 )
    return 0LL;
LABEL_36:
  result = v7;
  v20 = v7 - v8 + 1;
  if ( v20 == *(_DWORD *)(a1 + 856) )
    v20 = 0;
  *(_DWORD *)(a1 + 1092) = v20;
  return result;
}
