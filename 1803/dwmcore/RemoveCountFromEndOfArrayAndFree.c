/*
 * XREFs of RemoveCountFromEndOfArrayAndFree @ 0x1801DDC1C
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801DD674 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1801D2688 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 */

void __fastcall RemoveCountFromEndOfArrayAndFree(int a1, __int64 a2)
{
  int v3; // ebx
  int v4; // r8d
  __int64 v5; // rdx
  InteractionConfigurationGroup *v6; // rsi

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(_DWORD *)(a2 + 24);
      v5 = (unsigned int)(v4 - 1);
      v6 = *(InteractionConfigurationGroup **)(*(_QWORD *)a2 + 8 * v5);
      if ( v4 )
        *(_DWORD *)(a2 + 24) = v5;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
      --v3;
      if ( v6 )
        InteractionConfigurationGroup::`scalar deleting destructor'(v6);
    }
    while ( v3 );
  }
}
