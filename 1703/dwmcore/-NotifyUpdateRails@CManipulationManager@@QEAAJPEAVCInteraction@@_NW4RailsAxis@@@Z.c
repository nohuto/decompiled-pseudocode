/*
 * XREFs of ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x18004D920
 * Callers:
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x18004B218 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18004EB10 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18004EBEC (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateRails(__int64 a1, CArrayBasedCoverageSet *a2, char a3, int a4)
{
  void *v7; // rax
  void *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v15; // edx

  v7 = operator new(0x48uLL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x48uLL);
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    *(_DWORD *)v8 = 9;
    v9 = *((_QWORD *)v8 + 1);
    if ( v9 )
    {
      *((_QWORD *)v8 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)v8 + 2, a2);
    *((_BYTE *)v8 + 64) &= ~2u;
    *((_BYTE *)v8 + 64) |= 2 * a3;
    *((_DWORD *)v8 + 11) = a4;
    v12 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v11, v10, v8);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1F2u);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
        (CManipulationManager::InteractionUpdate *)v8,
        v15);
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1E3u);
  }
  return v13;
}
