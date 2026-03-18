/*
 * XREFs of ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18007F61C
 * Callers:
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18005B24C (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800655D8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x18007E21C (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18007E2F4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18007F2A0 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180085CD4 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x180138AA4 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HANDLE_TABLE::ValidEntry(HANDLE_TABLE *this, unsigned int a2)
{
  return a2 && a2 < *((_DWORD *)this + 3) && *(_DWORD *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3));
}
