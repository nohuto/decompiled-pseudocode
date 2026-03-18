/*
 * XREFs of ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18004E994
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x18004B768 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18004EB10 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18004EBEC (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateConfiguration(
        __int64 a1,
        CArrayBasedCoverageSet *a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        unsigned int Size)
{
  void *v7; // rsi
  void *v11; // rax
  void *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rax
  int v17; // eax
  unsigned int v18; // edi
  unsigned int v20; // edx

  v7 = 0LL;
  v11 = operator new(0x48uLL);
  v12 = v11;
  if ( v11 )
  {
    memset_0(v11, 0, 0x48uLL);
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1AAu);
    return v18;
  }
  *(_DWORD *)v12 = 7;
  v13 = *((_QWORD *)v12 + 1);
  if ( v13 )
  {
    *((_QWORD *)v12 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)v12 + 2, a2);
  *((_QWORD *)v12 + 7) = 0LL;
  *((_DWORD *)v12 + 12) = a5;
  *((_DWORD *)v12 + 10) = a3;
  *((_DWORD *)v12 + 11) = a4;
  if ( Size )
  {
    v16 = operator new(Size);
    v7 = v16;
    if ( !v16 )
    {
      v18 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1B7u);
      goto LABEL_15;
    }
    memcpy_0(v16, Src, Size);
    *((_QWORD *)v12 + 7) = v7;
  }
  v17 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v15, v14, v12);
  v18 = v17;
  if ( v17 >= 0 )
    return v18;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1C3u);
LABEL_15:
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
    (CManipulationManager::InteractionUpdate *)v12,
    v20);
  if ( v7 )
    WPF::ProcessHeapImpl::Free(v7);
  return v18;
}
