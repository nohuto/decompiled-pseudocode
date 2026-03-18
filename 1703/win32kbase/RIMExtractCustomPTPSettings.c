/*
 * XREFs of RIMExtractCustomPTPSettings @ 0x1C0117C94
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C0008310 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     RIMExtractCustomPTPSetting @ 0x1C011798C (RIMExtractCustomPTPSetting.c)
 */

__int64 __fastcall RIMExtractCustomPTPSettings(
        _DWORD *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        __int64 a3,
        char *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v8; // r14
  unsigned __int16 v10; // r15
  int v12; // ecx
  __int64 result; // rax
  int v14; // ecx
  int v15; // [rsp+80h] [rbp+8h] BYREF

  a1[62] = 0;
  a1[63] = 0;
  a1[64] = 0;
  a1[58] = 0;
  v8 = a6;
  v10 = a5;
  a1[59] = 1000;
  a1[60] = 50;
  a1[61] = 25;
  if ( (int)RIMExtractCustomPTPSetting(226LL, a2, a3, a4, v10, v8, 0xE2u, 1, &v15) >= 0 )
  {
    a1[58] = v15;
    a1[62] = 1;
  }
  if ( (int)RIMExtractCustomPTPSetting(227LL, a2, a3, a4, v10, v8, 0xE3u, 1, &v15) >= 0 )
  {
    a1[59] = v15;
    a1[62] = 1;
  }
  if ( (int)RIMExtractCustomPTPSetting(225LL, a2, a3, a4, v10, v8, 0xE1u, 2, &v15) >= 0 )
    a1[64] = v15 != 0;
  if ( (int)RIMExtractCustomPTPSetting(228LL, a2, a3, a4, v10, v8, 0xE4u, 0, &v15) >= 0 )
  {
    v12 = v15;
    if ( (unsigned int)(v15 - 1) <= 0x63 )
    {
      a1[63] = 1;
      a1[60] = v12;
    }
  }
  result = RIMExtractCustomPTPSetting(229LL, a2, a3, a4, v10, v8, 0xE5u, 0, &v15);
  if ( (int)result >= 0 )
  {
    v14 = v15;
    result = (unsigned int)(v15 - 1);
    if ( (unsigned int)result <= 0x63 )
    {
      a1[63] = 1;
      a1[61] = v14;
    }
  }
  return result;
}
