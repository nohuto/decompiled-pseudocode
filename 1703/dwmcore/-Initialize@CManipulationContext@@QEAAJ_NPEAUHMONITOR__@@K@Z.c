/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x18019309C
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18018AA0C (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18018AD60 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180193EC4 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800B29C0 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180166AFC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, char a2, HMONITOR a3, int a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  CInteractionRoot *v11; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 28) = 0;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 32) = 0;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 17);
  *((_BYTE *)this + 28) &= ~1u;
  *((_BYTE *)this + 28) |= a2;
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 10) = a4;
  v8 = WPF::ProcessHeapImpl::AllocClear(0x3E0uLL);
  v9 = v8;
  if ( !v8 )
  {
    ModuleFailFastForHRESULT(-2147024882, retaddr);
    __debugbreak();
  }
  memset_0(v8, 0, 0x3E0uLL);
  v9[1] = &CMILRefCountBase::`vftable';
  *((_DWORD *)v9 + 4) = 0;
  *v9 = &CInteractionRoot::`vftable'{for `IInteractionResource'};
  v9[1] = &CInteractionRoot::`vftable'{for `CMILRefCountBase'};
  v9[3] = 0LL;
  CInteractionProcessor::CInteractionProcessor((CInteractionProcessor *)(v9 + 4));
  if ( *((_QWORD **)this + 18) != v9 )
  {
    (*(void (__fastcall **)(_QWORD *))*v9)(v9);
    v10 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v11 = (CInteractionRoot *)*((_QWORD *)this + 18);
  if ( v11 )
    return CInteractionRoot::Initialize(v11, this, a2);
  else
    return 2147942414LL;
}
