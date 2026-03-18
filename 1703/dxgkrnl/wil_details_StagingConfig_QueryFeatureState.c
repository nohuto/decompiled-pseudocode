/*
 * XREFs of wil_details_StagingConfig_QueryFeatureState @ 0x1C00358E8
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C00125A0 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     wil_details_StagingConfigFeature_HasUniqueState @ 0x1C00358B0 (wil_details_StagingConfigFeature_HasUniqueState.c)
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  int v5; // r10d
  __int64 v6; // r8
  int v10; // edx
  unsigned int v11; // r11d
  unsigned int i; // r9d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  int v21; // eax
  int v22; // r8d
  unsigned int v23; // ecx
  _DWORD *v24; // rax
  __int64 result; // rax
  __int64 v26; // [rsp+20h] [rbp-10h] BYREF
  int v27; // [rsp+28h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v10 = 0;
  v11 = 0;
  for ( i = *(unsigned __int16 *)(v4 + 4); v11 < i; ++v11 )
  {
    if ( *(_DWORD *)(v6 + 12LL * v11) == 9011807 )
    {
      if ( a4 && *(_DWORD *)(a1 + 48) )
      {
        if ( (*(_DWORD *)(v6 + 12LL * v11 + 4) & 1) == 0 )
        {
          v13 = *(_DWORD *)(v6 + 12LL * v11 + 8);
          v26 = *(_QWORD *)(v6 + 12LL * v11);
          v27 = v13;
          goto LABEL_13;
        }
      }
      else
      {
        v10 = 1;
        if ( (*(_DWORD *)(v6 + 12LL * v11 + 4) & 1) != 0 )
        {
          v15 = *(_DWORD *)(v6 + 12LL * v11 + 8);
          v26 = *(_QWORD *)(v6 + 12LL * v11);
          v27 = v15;
          break;
        }
        v14 = *(_DWORD *)(v6 + 12LL * v11 + 8);
        v26 = *(_QWORD *)(v6 + 12LL * v11);
        v27 = v14;
      }
    }
  }
  v16 = 0;
  if ( v10 )
  {
LABEL_13:
    if ( !a4 || (v17 = 12LL, !*(_DWORD *)(a1 + 48)) )
      v17 = 8LL;
    v18 = *(_DWORD *)(v17 + v4);
    if ( (v18 & 4) != 0 )
    {
      v19 = HIDWORD(v26) & 0xFFFFCFFF;
      HIDWORD(v26) &= 0xFFFFCFFF;
    }
    else
    {
      v19 = HIDWORD(v26);
    }
    if ( (v18 & 2) != 0 )
    {
      v19 &= 0xFFFFF3FF;
      HIDWORD(v26) = v19;
    }
    if ( (v18 & 1) != 0 )
    {
      v19 &= 0xFFFFFCFF;
      HIDWORD(v26) = v19;
    }
    if ( (v18 & 8) != 0 )
    {
      v27 = 0;
      HIDWORD(v26) = v19 & 0xC0FFFFFF;
    }
    if ( wil_details_StagingConfigFeature_HasUniqueState(&v26) )
    {
      *(_DWORD *)(a2 + 12) = v27;
      *(_DWORD *)(a2 + 8) = v20 >> 30;
      *(_BYTE *)(a2 + 4) = HIBYTE(v20) & 0x3F;
      v21 = (v20 >> 12) & 3;
      if ( v21 || (v21 = (v20 >> 10) & 3) != 0 )
      {
        *(_DWORD *)a2 = v21;
      }
      else
      {
        v22 = (v20 >> 8) & 3;
        if ( v22 )
          *(_DWORD *)a2 = v22;
      }
      v16 = 1;
    }
  }
  v23 = v5;
  v24 = *(_DWORD **)(a1 + 40);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v24 != 9011807 )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_37;
    }
    v5 = 1;
  }
LABEL_37:
  result = v16;
  *(_DWORD *)(a2 + 16) = v5;
  return result;
}
