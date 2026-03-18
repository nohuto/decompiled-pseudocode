/*
 * XREFs of ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01EA270
 * Callers:
 *     DelegateReleasePointerMessage @ 0x1C01BAD90 (DelegateReleasePointerMessage.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01C51E0 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C8968 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?SetDelegateActionInt@@YAXPEAUtagPOINTERCAPTUREDATA@@W4tagDCPACTION@@@Z @ 0x1C01EA290 (-SetDelegateActionInt@@YAXPEAUtagPOINTERCAPTUREDATA@@W4tagDCPACTION@@@Z.c)
 */

__int64 __fastcall PointerList::SetDelegateAction(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 40) )
    return SetDelegateActionInt();
  return result;
}
