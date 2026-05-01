/*
 * XREFs of ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18010106C
 * Callers:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x1801006E4 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x180100AE8 (-wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z.c)
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(
        struct wil_details_StagingConfig *a1,
        struct wil_FeatureState *a2,
        int a3,
        int a4)
{
  __int64 v4; // r15
  int v5; // r10d
  __int64 v6; // r11
  int v11; // edi
  unsigned int v12; // r9d
  unsigned int v13; // edx
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // r8d
  unsigned int v24; // ecx
  _DWORD *v25; // rax
  __int64 result; // rax
  __int64 v27; // [rsp+20h] [rbp-10h] BYREF
  int v28; // [rsp+28h] [rbp-8h]

  v4 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 4);
  v11 = 0;
  v12 = *(unsigned __int16 *)(v4 + 4);
  v13 = 0;
  if ( !*(_WORD *)(v4 + 4) )
  {
LABEL_9:
    v17 = 0;
    if ( v11 )
      goto LABEL_10;
    goto LABEL_29;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v6 + 12LL * v13) == a3 )
    {
      if ( !a4 || !*((_DWORD *)a1 + 12) )
      {
        v11 = 1;
        v15 = (*(_BYTE *)(v6 + 12LL * v13 + 4) & 1) == 0;
        v16 = *(_DWORD *)(v6 + 12LL * v13 + 8);
        v27 = *(_QWORD *)(v6 + 12LL * v13);
        v28 = v16;
        if ( !v15 )
          goto LABEL_9;
        goto LABEL_8;
      }
      if ( (*(_BYTE *)(v6 + 12LL * v13 + 4) & 1) == 0 )
        break;
    }
LABEL_8:
    if ( ++v13 >= v12 )
      goto LABEL_9;
  }
  v14 = *(_DWORD *)(v6 + 12LL * v13 + 8);
  v27 = *(_QWORD *)(v6 + 12LL * v13);
  v28 = v14;
LABEL_10:
  if ( !a4 || (v18 = 12LL, !*((_DWORD *)a1 + 12)) )
    v18 = 8LL;
  v19 = *(_DWORD *)(v18 + v4);
  if ( (v19 & 4) != 0 )
  {
    v20 = HIDWORD(v27) & 0xFFFFCFFF;
    HIDWORD(v27) &= 0xFFFFCFFF;
  }
  else
  {
    v20 = HIDWORD(v27);
  }
  if ( (v19 & 2) != 0 )
  {
    v20 &= 0xFFFFF3FF;
    HIDWORD(v27) = v20;
  }
  if ( (v19 & 1) != 0 )
  {
    v20 &= 0xFFFFFCFF;
    HIDWORD(v27) = v20;
  }
  if ( (v19 & 8) != 0 )
  {
    v28 = 0;
    HIDWORD(v27) = v20 & 0xC0FFFFFF;
  }
  if ( wil_details_StagingConfigFeature_HasUniqueState((const struct wil_details_StagingConfigFeature *)&v27) )
  {
    *((_DWORD *)a2 + 3) = v28;
    *((_DWORD *)a2 + 2) = v21 >> 30;
    *((_BYTE *)a2 + 4) = HIBYTE(v21) & 0x3F;
    *((_DWORD *)a2 + 5) = (v21 >> 1) & 1;
    v22 = (v21 >> 12) & 3;
    if ( v22 || (v22 = (v21 >> 10) & 3) != 0 )
    {
      *(_DWORD *)a2 = v22;
    }
    else
    {
      v23 = (v21 >> 8) & 3;
      if ( v23 )
        *(_DWORD *)a2 = v23;
    }
    v17 = 1;
  }
LABEL_29:
  v24 = v5;
  v25 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v25 != a3 )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_34;
    }
    v5 = 1;
  }
LABEL_34:
  result = v17;
  *((_DWORD *)a2 + 4) = v5;
  return result;
}
