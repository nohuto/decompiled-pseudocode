/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x1800B35FC
 * Callers:
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800B3598 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x1800B36B8 (-Initialize@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18018CB48 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + a3;
  v6 = v4 + a3;
  if ( (unsigned int)v4 + a3 < (unsigned int)v4 )
    v6 = v10;
  v7 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 <= *(_DWORD *)(a1 + 20) )
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 12 * v4), a2, 12LL * a3);
    *(_DWORD *)(a1 + 24) = v6;
  }
  else
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xCu, a3, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  return v7;
}
