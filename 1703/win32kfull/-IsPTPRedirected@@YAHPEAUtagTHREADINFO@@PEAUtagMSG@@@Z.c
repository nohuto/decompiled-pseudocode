/*
 * XREFs of ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01C6A38
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007878 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0007AAC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     GetPTPShellListener @ 0x1C01B0B78 (GetPTPShellListener.c)
 *     IsTouchpadPointerInputMessage @ 0x1C01BCACC (IsTouchpadPointerInputMessage.c)
 */

__int64 __fastcall IsPTPRedirected(struct tagTHREADINFO *a1, struct tagMSG *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rcx

  v4 = 0;
  if ( IsPointerMessageTouchpad(a1, 0LL, *((_WORD *)a2 + 8))
    && IsTouchpadPointerInputMessage(*((_DWORD *)a2 + 2))
    && FindThreadPointerData((struct _LIST_ENTRY *)((char *)a1 + 968), *((_WORD *)a2 + 8)) )
  {
    if ( GetPTPShellListener() )
      v6 = *(_QWORD *)GetPTPShellListener();
    else
      v6 = 0LL;
    if ( *(_QWORD *)(v5 + 40) == v6 )
      return 1;
  }
  return v4;
}
