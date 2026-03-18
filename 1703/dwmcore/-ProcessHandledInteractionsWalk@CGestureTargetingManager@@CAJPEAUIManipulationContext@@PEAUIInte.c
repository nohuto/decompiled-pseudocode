/*
 * XREFs of ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180195304
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004E068 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180195304 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180195304 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessHandledInteractionsWalk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // ebx
  __int64 i; // rax
  int v10; // eax
  __int64 v11; // rdi

  v5 = 0;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 176LL))(a2, a3, 0LL);
    for ( i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2);
          ;
          i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v11) )
    {
      v11 = i;
      if ( !i )
        break;
      v10 = CGestureTargetingManager::ProcessHandledInteractionsWalk(a1, i, a3, a4, a5);
      if ( v5 >= 0 )
        v5 = v10;
    }
  }
  return (unsigned int)v5;
}
