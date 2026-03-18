/*
 * XREFs of ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18004EB10
 * Callers:
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x18004D920 (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18004E994 (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z @ 0x18018A378 (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18018A4B0 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18018A5B8 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18018AF70 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&stru_18023E7E8);
  if ( byte_18023E7E4 )
  {
    v8 = -2147023781;
    v9 = 152;
LABEL_11:
    v4 = v8;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
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
  v6 = (_QWORD *)qword_18023E7D8;
  if ( *(void ***)qword_18023E7D8 != &CManipulationManager::s_InteractionUpdateQueue )
    __fastfail(3u);
  *v5 = &CManipulationManager::s_InteractionUpdateQueue;
  v5[1] = v6;
  *v6 = v5;
  ++dword_18023E7E0;
  qword_18023E7D8 = (__int64)v5;
LABEL_7:
  LeaveCriticalSection(&stru_18023E7E8);
  return v4;
}
