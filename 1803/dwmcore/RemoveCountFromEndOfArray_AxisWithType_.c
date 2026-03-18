/*
 * XREFs of RemoveCountFromEndOfArray_AxisWithType_ @ 0x1801DCD7C
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801DD674 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall RemoveCountFromEndOfArray_AxisWithType_(int a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(_DWORD *)(a2 + 24);
      if ( v4 )
        *(_DWORD *)(a2 + 24) = v4 - 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
      --v3;
    }
    while ( v3 );
  }
}
