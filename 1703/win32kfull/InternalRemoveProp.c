/*
 * XREFs of InternalRemoveProp @ 0x1C005F3F8
 * Callers:
 *     NtUserShutdownBlockReasonCreate @ 0x1C0015BE0 (NtUserShutdownBlockReasonCreate.c)
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C001A160 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C001A1E0 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0026020 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     DestroyWindowSmIcon @ 0x1C00C1AA4 (DestroyWindowSmIcon.c)
 *     _SetTargetingWindowValue @ 0x1C010612C (_SetTargetingWindowValue.c)
 *     NtUserModifyWindowTouchCapability @ 0x1C0116AC0 (NtUserModifyWindowTouchCapability.c)
 *     _SetTouchWindowFlags @ 0x1C0116B50 (_SetTouchWindowFlags.c)
 *     NtUserShutdownReasonDestroy @ 0x1C011AD30 (NtUserShutdownReasonDestroy.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0132100 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01322D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0132440 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C01398BC (xxxHandleDestroyGhostWindow.c)
 *     _SetWindowContextHelpId @ 0x1C0139B90 (_SetWindowContextHelpId.c)
 *     UserAssociateHwnd @ 0x1C01C2C28 (UserAssociateHwnd.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D3460 (xxxRegisterSiblingFrostWindow.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01D5B90 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E47A8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     UserRemoveWindowedSwapChain @ 0x1C02098D0 (UserRemoveWindowedSwapChain.c)
 *     SetDisplayAffinity @ 0x1C0211780 (SetDisplayAffinity.c)
 * Callees:
 *     _FindProp @ 0x1C0062530 (_FindProp.c)
 */

_QWORD *__fastcall InternalRemoveProp(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // r10
  _OWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = (_QWORD *)FindProp(a1, a2, a3);
  v6 = result;
  if ( result )
  {
    result = (_QWORD *)*result;
    --*(_DWORD *)(*(_QWORD *)(v4 + 184) + 4LL);
    v7 = *(_QWORD *)(v5 + 184);
    v8 = 2LL * *(unsigned int *)(v7 + 4);
    *v6 = *(_OWORD *)(v7 + 16LL * *(unsigned int *)(v7 + 4) + 8);
    *(_QWORD *)(v7 + 8 * v8 + 8) = 0LL;
    *(_QWORD *)(v7 + 8 * v8 + 16) = 0LL;
  }
  return result;
}
