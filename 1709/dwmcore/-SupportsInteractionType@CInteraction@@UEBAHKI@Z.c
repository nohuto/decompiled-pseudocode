/*
 * XREFs of ?SupportsInteractionType@CInteraction@@UEBAHKI@Z @ 0x1800917C0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x1800921C4 (_anonymous_namespace_--ConvertToInputType.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800921F0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x18019B0A8 (-ConfigurationListContainsType@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$.c)
 */

__int64 __fastcall CInteraction::SupportsInteractionType(CInteraction *this, unsigned int a2, unsigned int a3)
{
  int v5; // eax
  __int64 v6; // r11
  int v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 == 6 )
    return 0LL;
  anonymous_namespace_::GetTemporaryConfigWithMask((char *)this + 1448, &v11, &v10);
  v5 = anonymous_namespace_::ConvertToInputType(a2) - 1;
  if ( !v5 )
    return CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             v6,
             a3,
             v11,
             v10);
  v7 = v5 - 1;
  if ( !v7 )
    return CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             v6 + 160,
             a3,
             v11,
             v10);
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
      return (a3 & *(_DWORD *)(v6 + 480)) != 0;
    return 0LL;
  }
  return CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
           v6 + 320,
           a3,
           v11,
           v10);
}
