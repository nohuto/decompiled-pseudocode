/*
 * XREFs of RIMComputeSpecificHighMetricValue @ 0x1C00902B4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C01075C4 (RIMPopulatePointerDevice.c)
 *     RIMExtractCustomPTPSetting @ 0x1C0116898 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     RIMComputePower @ 0x1C0090380 (RIMComputePower.c)
 */

__int64 __fastcall RIMComputeSpecificHighMetricValue(int a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // r10d
  unsigned __int16 *v5; // rax
  __int64 v6; // rax
  int v7; // edx
  unsigned __int16 v8; // bx
  unsigned int v9; // eax
  int v10; // r11d
  __int16 v11; // r9
  __int64 result; // rax
  bool v13; // di

  v3 = 0;
  v4 = 0;
  v13 = a1 < 0;
  v5 = word_1C0164440;
  do
  {
    if ( *(_BYTE *)v5 == (*(_BYTE *)(a2 + 32) & 0xF) )
      break;
    ++v3;
    v5 += 2;
  }
  while ( v3 < 0xB );
  v6 = *(_DWORD *)(a2 + 36) & 0xF;
  if ( (unsigned int)v6 < 5 )
  {
    v7 = dword_1C0164470[v6];
    if ( (unsigned int)(v7 - 1) <= 1 )
    {
      v8 = 2540;
      if ( v7 != 1 )
        v8 = 1000;
      if ( v3 < 0xB )
      {
        v9 = RIMComputePower(word_1C0164440[2 * v3 + 1]);
        if ( v11 >= 0 )
        {
          v4 = v10 * v9 * v8;
        }
        else if ( v9 )
        {
          v4 = v10 * (unsigned int)v8 / v9;
        }
      }
    }
  }
  result = -v4;
  if ( !v13 )
    return v4;
  return result;
}
