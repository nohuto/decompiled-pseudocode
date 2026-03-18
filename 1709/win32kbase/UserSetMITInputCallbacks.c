/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C00864E4
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C00863D0 (NtMITSetInputCallbacks.c)
 * Callees:
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0016974 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?CreateMitPort@@YAHXZ @ 0x1C00865A0 (-CreateMitPort@@YAHXZ.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(
        __int64 a1,
        int (__high *a2)(int, struct tagINPUTDEST, struct tagPOSTINPUTINFO *),
        __int64 a3,
        int (__high *a4)(unsigned __int64, struct tagQMSGENVELOPE))
{
  CInputThread *v7; // rcx
  unsigned int MitPort; // ebx
  unsigned __int16 v10; // r9

  v7 = (CInputThread *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x21u,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  if ( gMitPortHandle )
    MitPort = 1;
  else
    MitPort = CreateMitPort();
  if ( MitPort )
  {
    CBaseProcessor::_spfnNonMinUserCallback = a2;
    CBaseProcessor::_spfnQMsgCallback = a4;
    *(_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext = a1;
    if ( CInputThread::DeclareThreadAsInput(v7) )
    {
      MitPort = 1;
      goto LABEL_8;
    }
    MitPort = 0;
    v10 = 35;
  }
  else
  {
    v10 = 34;
  }
  WPP_RECORDER_SF_(gBaseLog, 2u, 2u, v10, (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
LABEL_8:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x24u,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  return MitPort;
}
