/*
 * XREFs of EditionHandleMitSignal @ 0x1C00FF5C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0005124 (xxxComputeInputSinkInfo.c)
 *     GetDITWakeReason @ 0x1C00FF668 (GetDITWakeReason.c)
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     DitClose @ 0x1C01B9FB8 (DitClose.c)
 *     DitOpen @ 0x1C01BA028 (DitOpen.c)
 *     DitStartRead @ 0x1C01BA0E8 (DitStartRead.c)
 *     DitStopRead @ 0x1C01BA158 (DitStopRead.c)
 *     DitTouchInject @ 0x1C01BA218 (DitTouchInject.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01D3B10 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     xxxRouteTouchpadInertiaToMT @ 0x1C020AA0C (xxxRouteTouchpadInertiaToMT.c)
 */

void __fastcall EditionHandleMitSignal(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  PalmRejection *v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 8) == 2LL && *(HANDLE *)a1 == ghDITEventWcp )
  {
    IOCPDispatcher::ReassociateNonSenserHandleForIOCP(gpIOCPDispatcher, ghDITEventWcp, ghDITEvent);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !(unsigned int)GetDITWakeReason(&v6) )
            return;
          if ( v6 > 0x40 )
            break;
          switch ( v6 )
          {
            case 0x40u:
              ProcessQueuedMouseEvents();
              break;
            case 1u:
              DitOpen();
              break;
            case 2u:
              DitClose();
              break;
            case 4u:
              DitStartRead();
              break;
            case 8u:
              DitStopRead();
              break;
            case 0x10u:
              EnterCrit(0LL, 1LL);
              goto LABEL_26;
            case 0x20u:
              DitTouchInject();
              break;
          }
        }
        if ( v6 != 128 )
          break;
        xxxComputeInputSinkInfo();
      }
      switch ( v6 )
      {
        case 0x800u:
LABEL_16:
          ExecuteMarshaledPnpRequest();
          break;
        case 0x100u:
          xxxRouteTouchpadInertiaToMT();
          break;
        case 0x200u:
          EnterCrit(0LL, 1LL);
          PalmRejection::DispatchBufferedInputFrames(v5);
LABEL_26:
          UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
          break;
        case 0x400u:
          ExecuteMarshaledInterceptRequest();
          break;
        case 0x1000u:
          goto LABEL_16;
      }
    }
  }
}
