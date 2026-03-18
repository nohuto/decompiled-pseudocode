/*
 * XREFs of ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1C01BAD0C
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01BAB6C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01C6554 (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 */

struct tagWND *__fastcall GetPwndFromPointerMsgId(unsigned __int64 a1)
{
  int PointerMessageInfo; // eax
  HWND v3; // [rsp+58h] [rbp+10h] BYREF

  if ( (gdwMitConfig & 4) != 0 )
    PointerMessageInfo = CTouchProcessor::GetPointerMessageInfo(gpTouchProcessor, a1, 0, &v3, 0LL, 0LL, 0LL, 0LL);
  else
    PointerMessageInfo = GetPointerMessageInfo(a1, 0, &v3, 0LL, 0LL, 0LL, 0LL);
  if ( PointerMessageInfo )
    return (struct tagWND *)ValidateHwnd(v3);
  else
    return 0LL;
}
