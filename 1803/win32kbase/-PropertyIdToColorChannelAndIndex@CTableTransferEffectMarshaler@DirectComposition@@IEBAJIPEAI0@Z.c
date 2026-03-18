/*
 * XREFs of ?PropertyIdToColorChannelAndIndex@CTableTransferEffectMarshaler@DirectComposition@@IEBAJIPEAI0@Z @ 0x1C0153694
 * Callers:
 *     ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0153610 (-GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0153660 (-IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXP.c)
 *     ?SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0153800 (-SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(
        DirectComposition::CTableTransferEffectMarshaler *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  int v4; // r10d
  unsigned int v5; // r11d

  v4 = a2 & 0xF;
  v5 = v4 != 15 ? 0xC000000D : 0;
  if ( v4 == 15 )
  {
    if ( a2 >> 6 >= *((_DWORD *)this + 4 * ((a2 >> 4) & 3) + 24) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *a4 = a2 >> 6;
      *a3 = (a2 >> 4) & 3;
    }
  }
  return v5;
}
