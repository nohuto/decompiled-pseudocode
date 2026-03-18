/*
 * XREFs of InternalRemoveProp @ 0x1C0062014
 * Callers:
 *     DestroyWindowSmIcon @ 0x1C005D7C8 (DestroyWindowSmIcon.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008A408 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C008A488 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     _SetTargetingWindowValue @ 0x1C011100C (_SetTargetingWindowValue.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0113800 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserModifyWindowTouchCapability @ 0x1C01206E0 (NtUserModifyWindowTouchCapability.c)
 *     _SetTouchWindowFlags @ 0x1C0120770 (_SetTouchWindowFlags.c)
 *     NtUserShutdownReasonDestroy @ 0x1C0123860 (NtUserShutdownReasonDestroy.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C013420C (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01343F0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0134590 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C013FA7C (xxxHandleDestroyGhostWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0140210 (UserRemoveWindowedSwapChain.c)
 *     _SetWindowContextHelpId @ 0x1C01408C0 (_SetWindowContextHelpId.c)
 *     UserAssociateHwnd @ 0x1C01C593C (UserAssociateHwnd.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D7730 (xxxRegisterSiblingFrostWindow.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01E2380 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F07D8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C0212C94 (SetDisplayAffinity.c)
 * Callees:
 *     _FindProp @ 0x1C0064018 (_FindProp.c)
 */

_QWORD *__fastcall InternalRemoveProp(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v4; // r10
  _OWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = (_QWORD *)FindProp(a1, a2, a3);
  v5 = result;
  if ( result )
  {
    result = (_QWORD *)*result;
    --*(_DWORD *)(*(_QWORD *)(v4 + 184) + 4LL);
    v6 = *(_QWORD *)(v4 + 184);
    v7 = 2LL * *(unsigned int *)(v6 + 4);
    *v5 = *(_OWORD *)(v6 + 16LL * *(unsigned int *)(v6 + 4) + 8);
    *(_QWORD *)(v6 + 8 * v7 + 8) = 0LL;
    *(_QWORD *)(v6 + 8 * v7 + 16) = 0LL;
  }
  return result;
}
