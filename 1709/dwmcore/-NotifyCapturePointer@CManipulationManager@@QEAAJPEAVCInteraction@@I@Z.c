/*
 * XREFs of ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x180196678
 * Callers:
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x180169958 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOIN.c)
 * Callees:
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18000A33C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800B9D7C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppq @ 0x180198DF0 (McTemplateU0ppq.c)
 */

__int64 __fastcall CManipulationManager::NotifyCapturePointer(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed int v13; // eax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v5 = *((_QWORD *)a2 + 17);
    LODWORD(v6) = 0;
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 8);
    McTemplateU0ppq((_DWORD)this, (_DWORD)a2, (_DWORD)a2, v6, a3);
  }
  v7 = operator new(0x48uLL);
  v8 = (__int64)v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x48uLL);
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    *(_DWORD *)v8 = 5;
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
    {
      *(_QWORD *)(v8 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)(v8 + 16), a2);
    *(_DWORD *)(v8 + 28) = 0;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_DWORD *)(v8 + 24) = a3;
    v13 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v12, v11, v8);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x156u);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v8);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x146u);
  }
  return v9;
}
