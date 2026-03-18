/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C010CD70 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C010E18C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01128F8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0119238 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DFA0 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E2D0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C011E3A0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C011EEEC (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0111ED0 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01121B4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C011FACC (WPP_RECORDER_SF_Lq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  int v6; // eax
  char v7; // al
  int v8; // [rsp+20h] [rbp-28h]

  _InterlockedDecrement((volatile signed __int32 *)(a2 + 24));
  v4 = a3;
  if ( a3 == 1 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    if ( (v6 & 0x20) == 0 )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a1 + 8),
        2u,
        0xBu,
        0x129u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v6 = *(_DWORD *)(a2 + 36);
    }
    *(_DWORD *)(a2 + 36) = v6 & 0xFFFFFFDF;
  }
  if ( (int)v4 > 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v7 = *(_BYTE *)(a2 + v4 + 48);
  if ( !v7 )
  {
    WPP_RECORDER_SF_Lq(*(_QWORD *)(a1 + 8), a2, a3, 298, v8, v4, a2);
    v7 = *(_BYTE *)(a2 + v4 + 48);
  }
  *(_BYTE *)(a2 + v4 + 48) = v7 - 1;
  if ( !*(_DWORD *)(a2 + 24) )
  {
    if ( (*(_DWORD *)(a2 + 36) & 0x10) == 0 )
      CTouchProcessor::FreePointerInfoNode((struct _KTHREAD **)a1, a2, *(_DWORD *)(a2 + 28), *(_DWORD *)(a2 + 32));
    CTouchProcessor::FreeMsgData((struct _KTHREAD **)a1, a2);
  }
}
