/*
 * XREFs of RemoveCountFromEndOfArrayAndFree @ 0x18019571C
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1801953E0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x18018CA00 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 */

void __fastcall RemoveCountFromEndOfArrayAndFree(int a1, __int64 a2)
{
  int v3; // ebx
  int v4; // r8d
  __int64 v5; // rcx
  void **v6; // rsi

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(_DWORD *)(a2 + 24);
      v5 = (unsigned int)(v4 - 1);
      v6 = *(void ***)(*(_QWORD *)a2 + 8 * v5);
      if ( v4 )
        *(_DWORD *)(a2 + 24) = v5;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
      --v3;
      if ( v6 )
        InteractionConfigurationGroup::`scalar deleting destructor'(v6);
    }
    while ( v3 );
  }
}
