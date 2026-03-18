/*
 * XREFs of ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011ABA4
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C010CD70 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C010D020 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C010F7B8 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C0117A10 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011AC70 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C011EEEC (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C011FACC (WPP_RECORDER_SF_Lq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CTouchProcessor::ReferenceMsgData(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v6; // eax
  char v7; // al
  bool v8; // zf
  char result; // al
  int v10; // [rsp+20h] [rbp-28h]

  v3 = a3;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 24));
  if ( a3 == 1 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    if ( (v6 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      v6 = *(_DWORD *)(a2 + 36);
      if ( (v6 & 0x20) != 0 )
      {
        WPP_RECORDER_SF_q(
          *(_QWORD *)(a1 + 8),
          2u,
          v3 + 10,
          0x127u,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        v6 = *(_DWORD *)(a2 + 36);
      }
    }
    *(_DWORD *)(a2 + 36) = v6 | 0x20;
  }
  if ( (int)v3 > 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v7 = *(_BYTE *)(v3 + a2 + 48);
  v8 = v7 == -1;
  result = v7 + 1;
  *(_BYTE *)(v3 + a2 + 48) = result;
  if ( v8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    result = *(_BYTE *)(v3 + a2 + 48);
  }
  if ( !result )
    return WPP_RECORDER_SF_Lq(*(_QWORD *)(a1 + 8), a2, a3, 296, v10, v3, a2);
  return result;
}
