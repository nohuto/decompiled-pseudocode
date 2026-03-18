/*
 * XREFs of PhkNextValid @ 0x1C00D9418
 * Callers:
 *     GetJournallingQueue @ 0x1C001A990 (GetJournallingQueue.c)
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     PhkFirstGlobalValid @ 0x1C00CC1D8 (PhkFirstGlobalValid.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D9098 (zzzUnhookWindowsHookEx.c)
 *     xxxCallNextHookEx @ 0x1C00D93C4 (xxxCallNextHookEx.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01C14E0 (zzzUnhookWindowsHook.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C02105C0 (fnHkINLPCWPRETEXSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhkNextValid(__int64 a1)
{
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL * (*(_DWORD *)(a1 + 48) + 1) + 32);
LABEL_3:
    if ( !a1 || (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
