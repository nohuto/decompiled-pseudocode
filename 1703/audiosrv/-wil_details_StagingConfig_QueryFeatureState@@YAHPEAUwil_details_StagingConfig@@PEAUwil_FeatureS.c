/*
 * XREFs of ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x180046E5C
 * Callers:
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x180046D2C (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x1800ADC6C (-wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z.c)
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
  int v11; // edx
  unsigned int v12; // r9d
  unsigned int i; // ebx
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  __int64 result; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r8d
  int v25; // eax
  int v26; // r8d
  __int64 v27; // [rsp+20h] [rbp-10h] BYREF
  int v28; // [rsp+28h] [rbp-8h]

  v4 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 4);
  v11 = 0;
  v12 = *(unsigned __int16 *)(v4 + 4);
  for ( i = 0; i < v12; ++i )
  {
    if ( *(_DWORD *)(v6 + 12LL * i) == a3 )
    {
      if ( a4 && *((_DWORD *)a1 + 12) )
      {
        if ( (*(_BYTE *)(v6 + 12LL * i + 4) & 1) == 0 )
        {
          v18 = *(_DWORD *)(v6 + 12LL * i + 8);
          v27 = *(_QWORD *)(v6 + 12LL * i);
          v28 = v18;
          goto LABEL_10;
        }
      }
      else
      {
        v11 = 1;
        if ( (*(_BYTE *)(v6 + 12LL * i + 4) & 1) != 0 )
        {
          v23 = *(_DWORD *)(v6 + 12LL * i + 8);
          v27 = *(_QWORD *)(v6 + 12LL * i);
          v28 = v23;
          break;
        }
        v22 = *(_DWORD *)(v6 + 12LL * i + 8);
        v27 = *(_QWORD *)(v6 + 12LL * i);
        v28 = v22;
      }
    }
  }
  v14 = 0;
  if ( v11 )
  {
LABEL_10:
    if ( !a4 || (v19 = 12LL, !*((_DWORD *)a1 + 12)) )
      v19 = 8LL;
    v20 = *(_DWORD *)(v19 + v4);
    if ( (v20 & 4) != 0 )
    {
      v21 = HIDWORD(v27) & 0xFFFFCFFF;
      HIDWORD(v27) &= 0xFFFFCFFF;
    }
    else
    {
      v21 = HIDWORD(v27);
    }
    if ( (v20 & 2) != 0 )
    {
      v21 &= 0xFFFFF3FF;
      HIDWORD(v27) = v21;
    }
    if ( (v20 & 1) != 0 )
    {
      v21 &= 0xFFFFFCFF;
      HIDWORD(v27) = v21;
    }
    if ( (v20 & 8) != 0 )
    {
      v28 = 0;
      HIDWORD(v27) = v21 & 0xC0FFFFFF;
    }
    if ( (unsigned int)wil_details_StagingConfigFeature_HasUniqueState((const struct wil_details_StagingConfigFeature *)&v27) )
    {
      *((_DWORD *)a2 + 3) = v28;
      *((_DWORD *)a2 + 2) = v24 >> 30;
      *((_BYTE *)a2 + 4) = HIBYTE(v24) & 0x3F;
      v25 = (v24 >> 12) & 3;
      if ( v25 || (v25 = (v24 >> 10) & 3) != 0 )
      {
        *(_DWORD *)a2 = v25;
      }
      else
      {
        v26 = (v24 >> 8) & 3;
        if ( v26 )
          *(_DWORD *)a2 = v26;
      }
      v14 = 1;
    }
  }
  v15 = v5;
  v16 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v16 != a3 )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_4;
    }
    v5 = 1;
  }
LABEL_4:
  result = v14;
  *((_DWORD *)a2 + 4) = v5;
  return result;
}
