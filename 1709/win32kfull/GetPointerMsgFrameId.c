/*
 * XREFs of GetPointerMsgFrameId @ 0x1C01CE464
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0137DC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01BEE4C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerMsgFrameId(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 28);
  else
    return 0LL;
}
