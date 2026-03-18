/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z @ 0x18019D854
 * Callers:
 *     ?StartInteraction@CInteraction@@UEAAJ_N0K@Z @ 0x18016A1D0 (-StartInteraction@CInteraction@@UEAAJ_N0K@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18019CA78 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0K@Z @ 0x1801A3DE0 (-StartInteraction@CInteractionRoot@@UEAAJ_N0K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x18019D7C8 (-StartInteraction@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(
        CInteractionProcessor *this,
        __int64 a2,
        char a3,
        struct IManipulationResource *a4,
        unsigned int a5)
{
  int started; // edi
  int v7; // ecx
  char v10; // r14
  char v11; // si
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rdx

  started = 0;
  v7 = *((_DWORD *)this + 148);
  v10 = a2;
  if ( (_BYTE)a2 || (unsigned int)(v7 - 2) <= 2 )
  {
    if ( (unsigned int)(v7 - 2) > 2 )
      *((_DWORD *)this + 148) = 3;
    v10 = 1;
  }
  else
  {
    *((_DWORD *)this + 148) = 1;
  }
  *((_DWORD *)this + 267) = 0;
  v11 = (*((_BYTE *)this + 1064) & 8) != 0 && !v7 && *((_DWORD *)this + 148);
  v12 = 0;
  if ( a4 && (*(unsigned __int8 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a4 + 24LL))(a4) )
    v12 = (*(__int64 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a4 + 40LL))(a4);
  switch ( a5 )
  {
    case 1u:
      LOBYTE(a2) = v10;
      started = CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                  this,
                  a2,
                  a3,
                  v11,
                  v12);
      if ( started < 0 )
        return (unsigned int)started;
      LOBYTE(v13) = v10;
      started = CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                  (_QWORD *)this + 20,
                  v13,
                  a3,
                  v11,
                  v12);
      if ( started < 0 )
        return (unsigned int)started;
      goto LABEL_18;
    case 2u:
      LOBYTE(a2) = v10;
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                             this,
                             a2,
                             a3,
                             v11,
                             v12);
    case 3u:
LABEL_18:
      if ( CInteractionProcessor::AllowPenGestureDetection(this) )
      {
        LOBYTE(v14) = v10;
        return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                               (_QWORD *)this + 40,
                               v14,
                               a3,
                               v11,
                               v12);
      }
      return (unsigned int)started;
    case 5u:
      LOBYTE(a2) = v10;
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                             (_QWORD *)this + 20,
                             a2,
                             a3,
                             v11,
                             v12);
  }
  return (unsigned int)started;
}
