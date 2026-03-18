/*
 * XREFs of ?ConfigurationListContainsType@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x18019B0A8
 * Callers:
 *     ?SupportsInteractionType@CInteraction@@UEBAHKI@Z @ 0x1800917C0 (-SupportsInteractionType@CInteraction@@UEBAHKI@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?SupportsInteractionType@CInteractionRoot@@UEBAHKI@Z @ 0x1801A3E00 (-SupportsInteractionType@CInteractionRoot@@UEBAHKI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 v4; // r10
  int v5; // r8d

  v4 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    return 0LL;
  v5 = a4 & a3;
  while ( ((v5 | ~a4 & *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12 * v4 + 8)) & a2) == 0 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 112) )
      return 0LL;
  }
  return 1LL;
}
