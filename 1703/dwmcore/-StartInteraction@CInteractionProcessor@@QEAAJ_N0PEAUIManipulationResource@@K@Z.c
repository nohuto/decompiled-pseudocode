/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z @ 0x180134F84
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1800B2B30 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 *     ?StartInteraction@CInteraction@@UEAAJ_N0K@Z @ 0x180167560 (-StartInteraction@CInteraction@@UEAAJ_N0K@Z.c)
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0K@Z @ 0x180194ED0 (-StartInteraction@CInteractionRoot@@UEAAJ_N0K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x18018FD24 (-StartInteraction@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(
        CInteractionProcessor *this,
        char a2,
        char a3,
        struct IManipulationResource *a4,
        unsigned int a5)
{
  int started; // esi
  int v7; // ecx
  struct IManipulationResource *v8; // r12
  char v10; // r14
  bool v11; // di
  int v12; // ebp
  int v13; // eax

  started = 0;
  v7 = *((_DWORD *)this + 100);
  v8 = a4;
  v10 = a2;
  if ( a2 || (unsigned int)(v7 - 2) <= 2 )
  {
    if ( (unsigned int)(v7 - 2) > 2 )
      *((_DWORD *)this + 100) = 3;
    v10 = 1;
  }
  else
  {
    *((_DWORD *)this + 100) = 1;
  }
  *((_DWORD *)this + 219) = 0;
  v11 = (*((_BYTE *)this + 872) & 8) != 0 && !v7 && *((_DWORD *)this + 100);
  v12 = 0;
  if ( a4 && (*(unsigned __int8 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a4 + 24LL))(a4) )
    v12 = (*(__int64 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)v8 + 40LL))(v8);
  switch ( a5 )
  {
    case 1u:
      LOBYTE(a4) = v11;
      started = CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                  (_DWORD)this,
                  v10,
                  a3,
                  (_DWORD)a4,
                  v12);
      if ( started >= 0 )
        goto LABEL_17;
      break;
    case 2u:
      LOBYTE(a4) = v11;
      v13 = CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
              (_DWORD)this,
              v10,
              a3,
              (_DWORD)a4,
              v12);
      goto LABEL_22;
    case 5u:
LABEL_17:
      LOBYTE(a4) = v11;
      v13 = CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
              (int)this + 160,
              v10,
              a3,
              (_DWORD)a4,
              v12);
LABEL_22:
      started = v13;
      break;
  }
  return (unsigned int)started;
}
