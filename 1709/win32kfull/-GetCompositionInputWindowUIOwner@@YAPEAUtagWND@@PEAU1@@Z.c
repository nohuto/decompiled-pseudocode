/*
 * XREFs of ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C000C700 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01B5070 (xxxSetForegroundCheckNoActivate.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C6D78 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01CCC7C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     EditionGetCompositionInputWindowUIOwner @ 0x1C01D2E00 (EditionGetCompositionInputWindowUIOwner.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

struct tagWND *__fastcall GetCompositionInputWindowUIOwner(struct tagWND *a1)
{
  __int64 Prop; // rax
  __int64 v2; // r11

  Prop = GetProp(a1, CInputQueueProp::s_atom, 1LL);
  if ( Prop && *(_DWORD *)(Prop + 24) > (unsigned int)v2 )
    return *(struct tagWND **)(Prop + 32);
  return (struct tagWND *)v2;
}
