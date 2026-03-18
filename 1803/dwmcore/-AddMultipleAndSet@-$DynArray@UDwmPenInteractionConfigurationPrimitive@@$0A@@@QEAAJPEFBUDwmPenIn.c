/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800C30D0
 * Callers:
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x1800241E8 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800C306C (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801D274C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + a3;
  v6 = (unsigned int)v4 + a3 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( (unsigned int)v4 + a3 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 <= *(_DWORD *)(a1 + 20) )
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 12 * v4), a2, 12LL * a3);
    *(_DWORD *)(a1 + 24) = v5;
  }
  else
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xCu, a3, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
  }
  return v6;
}
