/*
 * XREFs of ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180196780
 * Callers:
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18016A040 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18000A33C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800B9D7C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateTemporaryConfiguration(
        __int64 a1,
        CArrayBasedCoverageSet *a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  void *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  signed int v16; // eax

  v9 = operator new(0x48uLL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x48uLL);
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *(_DWORD *)v10 = 8;
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
    {
      *(_QWORD *)(v10 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((CArrayBasedCoverageSet **)(v10 + 16), a2);
    *(_BYTE *)(v10 + 64) &= ~1u;
    *(_BYTE *)(v10 + 64) |= a5;
    *(_DWORD *)(v10 + 40) = a4;
    *(_DWORD *)(v10 + 44) = a3;
    *(_DWORD *)(v10 + 48) = 1;
    v15 = operator new(4uLL);
    if ( v15 )
    {
      *v15 = a6;
      *(_QWORD *)(v10 + 56) = v15;
      v16 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v14, v13, v10);
      v11 = v16;
      if ( v16 >= 0 )
        return v11;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x222u);
    }
    else
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x217u);
    }
    CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v10);
    if ( v15 )
      WPF::ProcessHeapImpl::Free(v15);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x20Bu);
  }
  return v11;
}
