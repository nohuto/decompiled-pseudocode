/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C00A1008 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C011AAC0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C011BD68 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011F0D4 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0124108 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01282EC (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128530 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0128610 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C011E924 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011EAAC (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0129A18 (WPP_RECORDER_SF_Lq.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  int v6; // [rsp+20h] [rbp-28h]

  _InterlockedDecrement((volatile signed __int32 *)(a2 + 24));
  v4 = a3;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 36) & 0x20) == 0 )
      WPP_RECORDER_SF_q(a1[1], 2u, 0xBu, 0x116u, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    *(_DWORD *)(a2 + 36) &= ~0x20u;
  }
  if ( !*(_BYTE *)(v4 + a2 + 48) )
    WPP_RECORDER_SF_Lq(a1[1], a2, a3, 279, v6, v4, a2);
  --*(_BYTE *)(v4 + a2 + 48);
  if ( !*(_DWORD *)(a2 + 24) )
  {
    if ( (*(_DWORD *)(a2 + 36) & 0x10) == 0 )
      CTouchProcessor::FreePointerInfoNode((CTouchProcessor *)a1, a2, *(_DWORD *)(a2 + 28), *(_DWORD *)(a2 + 32));
    CTouchProcessor::FreeMsgData((CTouchProcessor *)a1, (_QWORD *)a2);
  }
}
