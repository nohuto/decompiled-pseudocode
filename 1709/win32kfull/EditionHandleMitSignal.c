/*
 * XREFs of EditionHandleMitSignal @ 0x1C00F9D40
 * Callers:
 *     <none>
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0009CC4 (xxxComputeInputSinkInfo.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01DFEC0 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020D430 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

void __fastcall EditionHandleMitSignal(_QWORD *a1)
{
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  PalmRejection *v4; // rcx

  if ( a1[1] == 2LL && *a1 == *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
  {
    IOCPDispatcher::ReassociateNonSenserHandleForIOCP(
      gpIOCPDispatcher,
      *(void **)&WPP_MAIN_CB.ActiveThreadCount,
      *(&WPP_MAIN_CB.Reserved + 1));
    while ( 1 )
    {
      while ( 1 )
      {
        v1 = gdwDITWakeReason & ~(gdwDITWakeReason - 1);
        if ( !v1 )
          return;
        _InterlockedAnd(&gdwDITWakeReason, ~v1);
        if ( v1 != 16 )
          break;
        EnterCrit(0LL, 1LL);
LABEL_11:
        UserSessionSwitchLeaveCrit(v3, v2);
      }
      switch ( v1 )
      {
        case 64:
          ProcessMouseEvent();
          break;
        case 128:
          EnterCrit(0LL, 1LL);
          xxxComputeInputSinkInfo();
          goto LABEL_11;
        case 256:
          if ( (gInertiaMTInfo & 1) != 0 )
            xxxRouteSyntheticTouchpadToMT(dword_1C0330AF4, stru_1C0330AF8, stru_1C0330B00, qword_1C0330B08);
          break;
        case 512:
          EnterCrit(0LL, 1LL);
          PalmRejection::DispatchBufferedInputFrames(v4);
          goto LABEL_11;
        case 1024:
        case 2048:
          ExecuteMarshaledPnpRequest();
          break;
        case 4096:
          ExecuteMarshaledInterceptRequest();
          break;
      }
    }
  }
}
