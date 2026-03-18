/*
 * XREFs of ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x180026254
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x180028910 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180025878 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180026488 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x180140408 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        unsigned int Size)
{
  void *v7; // rsi
  void *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rax
  unsigned int v17; // edi
  unsigned int v19; // eax
  unsigned int v20; // edx

  v7 = 0LL;
  v11 = operator new(0x48uLL);
  v12 = (__int64)v11;
  if ( v11 )
  {
    memset_0(v11, 0, 0x48uLL);
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1AAu);
    return v17;
  }
  *(_DWORD *)v12 = 7;
  v13 = *(_QWORD *)(v12 + 8);
  if ( v13 )
  {
    *(_QWORD *)(v12 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(v12 + 16, a2);
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_DWORD *)(v12 + 48) = a5;
  *(_DWORD *)(v12 + 40) = a3;
  *(_DWORD *)(v12 + 44) = a4;
  if ( Size )
  {
    v16 = operator new(Size);
    v7 = v16;
    if ( !v16 )
    {
      v17 = -2147024882;
      v19 = 439;
      goto LABEL_15;
    }
    memcpy_0(v16, Src, Size);
    *(_QWORD *)(v12 + 56) = v7;
  }
  v17 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v15, v14, v12);
  if ( (v17 & 0x80000000) == 0 )
    return v17;
  v19 = 451;
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v19);
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
    (CManipulationManager::InteractionUpdate *)v12,
    v20);
  if ( v7 )
    operator delete(v7);
  return v17;
}
