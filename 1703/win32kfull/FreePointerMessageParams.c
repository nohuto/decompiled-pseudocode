/*
 * XREFs of FreePointerMessageParams @ 0x1C01BAE2C
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00527D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     FreeQEntry @ 0x1C00C9AFC (FreeQEntry.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D8BF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
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
