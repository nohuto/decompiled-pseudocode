/*
 * XREFs of ??$UnRegisterNotifier@PEAVCHoverPointerSource@@@CResource@@QEAAXAEAPEAVCHoverPointerSource@@@Z @ 0x180034524
 * Callers:
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18004B390 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 *     ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x18012F678 (-ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPUL.c)
 *     ?ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETHOVERSOURCE@@@Z @ 0x18012F84C (-ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETHOVERSOU.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CHoverPointerSource *>(CResource *a1, struct CResource **a2)
{
  struct CResource *v3; // rdx

  v3 = *a2;
  if ( v3 )
    v3 = (struct CResource *)((char *)v3 + 8);
  CResource::UnRegisterNotifierInternal(a1, v3);
  *a2 = 0LL;
}
