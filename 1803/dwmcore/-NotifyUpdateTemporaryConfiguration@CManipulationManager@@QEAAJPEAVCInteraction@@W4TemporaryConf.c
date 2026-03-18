/*
 * XREFs of ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801CED68
 * Callers:
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180192940 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180025878 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180026488 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x180140408 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateTemporaryConfiguration(
        __int64 a1,
        Dwm3DRECompositorThunk *a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  void *v9; // rax
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  unsigned int v16; // eax

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
    Microsoft::WRL::ComPtr<CInteraction>::operator=((Dwm3DRECompositorThunk **)(v10 + 16), a2);
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
      v11 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v14, v13, v10);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      v16 = 550;
    }
    else
    {
      v11 = -2147024882;
      v16 = 539;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v16);
    CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v10);
    if ( v15 )
      operator delete(v15);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x20Fu);
  }
  return (unsigned int)v11;
}
