/*
 * XREFs of ?GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x18027F9A0
 * Callers:
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x18027F7A8 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewConfigHelpers::GetDefaultConfig(int a1, _OWORD *a2)
{
  int v2; // ecx
  int v3; // ecx
  _OWORD *result; // rax
  __int64 v5; // r8
  __int128 v6; // xmm1
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int64 v11; // r8
  __int128 v12; // xmm1

  if ( !a1 )
  {
LABEL_14:
    result = &unk_1804361C0;
    v11 = 9LL;
    do
    {
      *a2 = *result;
      a2[1] = result[1];
      a2[2] = result[2];
      a2[3] = result[3];
      a2[4] = result[4];
      a2[5] = result[5];
      a2[6] = result[6];
      a2 += 8;
      v12 = result[7];
      result += 8;
      *(a2 - 1) = v12;
      --v11;
    }
    while ( v11 );
    goto LABEL_16;
  }
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        result = &unk_180436FA0;
        v5 = 9LL;
        do
        {
          *a2 = *result;
          a2[1] = result[1];
          a2[2] = result[2];
          a2[3] = result[3];
          a2[4] = result[4];
          a2[5] = result[5];
          a2[6] = result[6];
          a2 += 8;
          v6 = result[7];
          result += 8;
          *(a2 - 1) = v6;
          --v5;
        }
        while ( v5 );
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    result = &unk_180436660;
    v7 = 9LL;
    do
    {
      *a2 = *result;
      a2[1] = result[1];
      a2[2] = result[2];
      a2[3] = result[3];
      a2[4] = result[4];
      a2[5] = result[5];
      a2[6] = result[6];
      a2 += 8;
      v8 = result[7];
      result += 8;
      *(a2 - 1) = v8;
      --v7;
    }
    while ( v7 );
  }
  else
  {
    result = &unk_180436B00;
    v9 = 9LL;
    do
    {
      *a2 = *result;
      a2[1] = result[1];
      a2[2] = result[2];
      a2[3] = result[3];
      a2[4] = result[4];
      a2[5] = result[5];
      a2[6] = result[6];
      a2 += 8;
      v10 = result[7];
      result += 8;
      *(a2 - 1) = v10;
      --v9;
    }
    while ( v9 );
  }
LABEL_16:
  *a2 = *result;
  a2[1] = result[1];
  return result;
}
