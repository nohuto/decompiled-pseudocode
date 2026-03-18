/*
 * XREFs of ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z @ 0x18019653C
 * Callers:
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x1801698BC (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERA.c)
 * Callees:
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18000A33C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800B9D7C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppqqx @ 0x180198E6C (McTemplateU0ppqqx.c)
 */

__int64 __fastcall CManipulationManager::NotifyCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r9
  void *v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed int v16; // eax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v8 = *((_QWORD *)a2 + 17);
    LODWORD(v9) = 0;
    if ( v8 )
      v9 = *(_QWORD *)(v8 + 8);
    McTemplateU0ppqqx((_DWORD)a2 + 8, (_DWORD)a2, a2 != 0LL ? (_DWORD)a2 + 8 : 0, v9, a3, a4, a5);
  }
  v10 = operator new(0x48uLL);
  v11 = (__int64)v10;
  if ( v10 )
  {
    memset_0(v10, 0, 0x48uLL);
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *(_DWORD *)v11 = 6;
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)(v11 + 16), a2);
    *(_DWORD *)(v11 + 24) = a3;
    *(_DWORD *)(v11 + 28) = a4;
    *(_QWORD *)(v11 + 32) = a5;
    v16 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v15, v14, v11);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x18Bu);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v11);
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x17Bu);
  }
  return v12;
}
