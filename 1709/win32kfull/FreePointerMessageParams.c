/*
 * XREFs of FreePointerMessageParams @ 0x1C01BF114
 * Callers:
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00A8320 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C00CD688 (FreeQEntry.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC234 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall FreePointerMessageParams(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) != 595 )
  {
    if ( *(_DWORD *)(a1 + 96) )
    {
      if ( (gdwMitConfig & 4) != 0 )
      {
        v2 = *(_QWORD *)(a1 + 40);
        v3 = 3LL;
        return CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, v2, v3, a1);
      }
      v4 = *(_QWORD *)(a1 + 40);
      v5 = 3LL;
    }
    else
    {
      if ( (gdwMitConfig & 4) != 0 )
      {
        v2 = *(_QWORD *)(a1 + 40);
        v3 = 2LL;
        return CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, v2, v3, a1);
      }
      v4 = *(_QWORD *)(a1 + 40);
      v5 = 2LL;
    }
    return UnreferenceMsgData(v4, v5, a1);
  }
  return result;
}
