/*
 * XREFs of ?ClearActiveManipulation@CInteractionTracker@@AEAAXXZ @ 0x18016B4E4
 * Callers:
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016B54C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18016CA44 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016ED74 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionTracker::ClearActiveManipulation(CInteractionTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 68) )
  {
    v2 = *((_QWORD *)this + 68);
    if ( v2 )
    {
      *((_QWORD *)this + 68) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  if ( *((_QWORD *)this + 69) )
  {
    v3 = *((_QWORD *)this + 69);
    if ( v3 )
    {
      *((_QWORD *)this + 69) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
}
