/*
 * XREFs of ValidateLpiState @ 0x1C00292B8
 * Callers:
 *     InitAcpiLpiStates @ 0x1C002BAAC (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002C0F4 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     IsValidAcpiGenericAddress @ 0x1C0027A04 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateLpiState(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  unsigned __int16 v3; // r9
  unsigned int v4; // r8d
  unsigned __int8 v5; // al
  int v6; // r10d

  v2 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v3 = 86;
    v4 = 1;
LABEL_3:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v4,
      v3,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids);
    return (unsigned int)-1073741823;
  }
  v5 = *(_BYTE *)(a1 + 24);
  if ( v5 != 127 )
  {
    v6 = 1;
    if ( v5 == 1 )
    {
      if ( !IsValidAcpiGenericAddress((char *)&dword_1C0011B7C) )
      {
        v3 = v6 + 86;
LABEL_8:
        v4 = v6;
        goto LABEL_3;
      }
    }
    else
    {
      if ( v5 != 126 )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x59u,
          (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
          v5);
        return (unsigned int)-1073741823;
      }
      if ( !a2 )
      {
        v3 = 88;
        goto LABEL_8;
      }
    }
  }
  return v2;
}
