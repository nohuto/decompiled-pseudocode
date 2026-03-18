/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C0069CA0
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C0069B30 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0048E9C (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?CreateMitPort@@YAHXZ @ 0x1C0069D70 (-CreateMitPort@@YAHXZ.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(
        __int64 a1,
        int (__high *a2)(struct tagINPUTDEST, unsigned int, unsigned int, int, int, struct tagPOSTINPUTINFO *),
        int (__high *a3)(int, struct tagINPUTDEST, struct tagPOSTINPUTINFO *),
        __int64 a4,
        int (*a5)(void *, void *, unsigned int, HMONITOR, struct tagPOINT),
        int (__high *a6)(unsigned int, struct tagQMSGENVELOPE))
{
  int (__high *v7)(struct tagINPUTDEST, unsigned int, unsigned int, int, int, struct tagPOSTINPUTINFO *); // rsi
  CInputThread *v9; // rcx
  unsigned int MitPort; // ebx
  int v12; // r9d

  v7 = a2;
  v9 = (CInputThread *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      33,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
  }
  if ( gMitPortHandle )
    MitPort = 1;
  else
    MitPort = CreateMitPort();
  if ( MitPort )
  {
    CBaseProcessor::_spfnPiCallback = v7;
    CBaseProcessor::_spfnNonMinUserCallback = a3;
    *(_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext = a1;
    CBaseProcessor::_spfnQMsgCallback = a6;
    CSpatialProcessor::_spfnFireViewHitTestCallback = a5;
    if ( CInputThread::DeclareThreadAsInput(v9) )
    {
      MitPort = 1;
      goto LABEL_8;
    }
    MitPort = 0;
    v12 = 35;
  }
  else
  {
    v12 = 34;
  }
  LOBYTE(a2) = 2;
  WPP_RECORDER_SF_(gBaseLog, (_DWORD)a2, 2, v12, (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
LABEL_8:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      36,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
  }
  return MitPort;
}
