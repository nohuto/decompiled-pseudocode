/*
 * XREFs of ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005C1A8
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18004C0C0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1800F91C8 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x18012EEA0 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180132104 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?IsPresentationReady@CTaskWindow@@UEAA_NXZ @ 0x180047510 (-IsPresentationReady@CTaskWindow@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SdL @ 0x1801327F0 (WPP_SF_SdL.c)
 *     WPP_SF_Sdq @ 0x1801329A8 (WPP_SF_Sdq.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(
        CImmersiveApp::CImmersiveWindowCollection *this,
        int a2,
        int a3)
{
  char v4; // si
  CTaskWindow *v5; // rcx
  char (__fastcall *v6)(CTaskWindow *); // rax
  char v7; // al
  __int64 v9; // rbx
  char v10; // al
  int v11; // r8d

  v4 = 1;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SdL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      a2,
      a3,
      *(_QWORD *)(*((_QWORD *)this + 18) + 544LL),
      *(_DWORD *)(*((_QWORD *)this + 18) + 552LL),
      *((_DWORD *)this + 49));
    if ( *((_QWORD *)this + 20) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 19) + 240LL))(**((_QWORD **)this + 19))
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v9 = *((_QWORD *)this + 18);
        v10 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 19) + 32LL))(**((_QWORD **)this + 19));
        WPP_SF_Sdq(*((_QWORD *)WPP_GLOBAL_Control + 2), 29, v11, *(_QWORD *)(v9 + 544), *(_DWORD *)(v9 + 552), v10);
      }
    }
  }
  if ( *((_DWORD *)this + 49) || !*((_QWORD *)this + 20) )
    return 0;
  v5 = (CTaskWindow *)**((_QWORD **)this + 19);
  v6 = *(char (__fastcall **)(CTaskWindow *))(*(_QWORD *)v5 + 240LL);
  v7 = v6 == CTaskWindow::IsPresentationReady ? CTaskWindow::IsPresentationReady(v5) : ((__int64 (*)(void))v6)();
  if ( !v7 || *(_DWORD *)(*((_QWORD *)this + 29) + 152LL) == 1 )
    return 0;
  return v4;
}
