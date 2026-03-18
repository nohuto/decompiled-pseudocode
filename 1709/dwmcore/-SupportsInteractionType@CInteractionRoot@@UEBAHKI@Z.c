/*
 * XREFs of ?SupportsInteractionType@CInteractionRoot@@UEBAHKI@Z @ 0x1801A3E00
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x1800921C4 (_anonymous_namespace_--ConvertToInputType.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800921F0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x18019B0A8 (-ConfigurationListContainsType@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$.c)
 */

__int64 __fastcall CInteractionRoot::SupportsInteractionType(CInteractionRoot *this, __int64 a2, int a3)
{
  char *v3; // rbx
  int v5; // r11d
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = (char *)this + 32;
  anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1104, &v11, &v10);
  v6 = anonymous_namespace_::ConvertToInputType(v5) - 1;
  if ( !v6 )
    return CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             (__int64)v3,
             a3,
             v11,
             v10);
  v7 = v6 - 1;
  if ( !v7 )
    return CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             (__int64)(v3 + 160),
             a3,
             v11,
             v10);
  v8 = v7 - 1;
  if ( !v8 )
    return CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             (__int64)(v3 + 320),
             a3,
             v11,
             v10);
  if ( v8 == 1 )
    return (a3 & *((_DWORD *)v3 + 120)) != 0;
  return 0LL;
}
