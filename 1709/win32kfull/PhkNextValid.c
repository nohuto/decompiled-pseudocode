/*
 * XREFs of PhkNextValid @ 0x1C0055C18
 * Callers:
 *     xxxCallNextHookEx @ 0x1C0055BC8 (xxxCallNextHookEx.c)
 *     PhkFirstValid @ 0x1C0056078 (PhkFirstValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0056178 (zzzUnhookWindowsHookEx.c)
 *     GetJournallingQueue @ 0x1C008CAA0 (GetJournallingQueue.c)
 *     PhkFirstGlobalValid @ 0x1C009EB9C (PhkFirstGlobalValid.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01C4D00 (zzzUnhookWindowsHook.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C0211CF0 (fnHkINLPCWPRETEXSTRUCT.c)
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
    a1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL * (*(_DWORD *)(a1 + 48) + 1) + 32);
LABEL_3:
    if ( !a1 || (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
