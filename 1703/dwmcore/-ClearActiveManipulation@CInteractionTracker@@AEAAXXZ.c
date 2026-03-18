/*
 * XREFs of ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18016C770
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18012C7B4 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016C7BC (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D244 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CInteractionTracker::ClearActiveManipulation(CInteractionTracker *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = (_QWORD *)((char *)this + 512);
  if ( *v2 )
    Microsoft::WRL::ComPtr<CManipulation>::InternalRelease(v2);
  if ( *((_QWORD *)this + 65) )
  {
    v3 = *((_QWORD *)this + 65);
    if ( v3 )
    {
      *((_QWORD *)this + 65) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
}
