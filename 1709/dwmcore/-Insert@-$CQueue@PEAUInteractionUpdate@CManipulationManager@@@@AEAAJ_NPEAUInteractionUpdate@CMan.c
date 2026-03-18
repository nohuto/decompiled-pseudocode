/*
 * XREFs of ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800B9D7C
 * Callers:
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18000A1A8 (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x18000A290 (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z @ 0x18019653C (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x180196678 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180196780 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  DWORD v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&stru_180272558);
  if ( byte_180272554 )
  {
    v8 = -2147023781;
    v9 = 152;
LABEL_11:
    v4 = v8;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v9);
    goto LABEL_7;
  }
  v5 = operator new(0x18uLL);
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v8 = -2147024882;
    v9 = 155;
    goto LABEL_11;
  }
  v5[2] = a3;
  v6 = (_QWORD *)qword_180272548;
  if ( *(void ***)qword_180272548 != &CManipulationManager::s_InteractionUpdateQueue )
    __fastfail(3u);
  *v5 = &CManipulationManager::s_InteractionUpdateQueue;
  v5[1] = v6;
  *v6 = v5;
  ++dword_180272550;
  qword_180272548 = (__int64)v5;
LABEL_7:
  LeaveCriticalSection(&stru_180272558);
  return v4;
}
