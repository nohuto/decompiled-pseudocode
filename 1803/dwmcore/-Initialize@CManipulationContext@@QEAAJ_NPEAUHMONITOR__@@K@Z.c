/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x1801DA90C
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CF874 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801DB920 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x180028D2C (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180191E7C (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, char a2, HMONITOR a3, int a4)
{
  CInteractionRoot *v8; // rax
  CInteractionRoot *v9; // rbx
  CInteractionRoot *v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 28) = 0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 32) = 0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  *((_BYTE *)this + 28) &= ~1u;
  *((_BYTE *)this + 28) |= a2;
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 10) = a4;
  v8 = (CInteractionRoot *)WPF::ProcessHeapImpl::AllocClear(0x570uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v8, 0, 0x570uLL);
  *((_QWORD *)v9 + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)v9 + 4) = 0;
  *(_QWORD *)v9 = &CInteractionRoot::`vftable'{for `IInteractionResource'};
  *((_QWORD *)v9 + 1) = &CInteractionRoot::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)v9 + 3) = 0LL;
  CInteractionProcessor::CInteractionProcessor((CInteractionRoot *)((char *)v9 + 32));
  v10 = (CInteractionRoot *)*((_QWORD *)this + 18);
  if ( v10 != v9 )
  {
    (**(void (__fastcall ***)(void *))v9)(v9);
    v11 = *((_QWORD *)this + 18);
    v10 = v9;
    *((_QWORD *)this + 18) = v9;
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v10 = (CInteractionRoot *)*((_QWORD *)this + 18);
    }
  }
  result = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
    return CInteractionRoot::Initialize(v10, this, a2);
  return result;
}
