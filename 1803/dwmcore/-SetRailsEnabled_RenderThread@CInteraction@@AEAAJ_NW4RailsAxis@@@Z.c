/*
 * XREFs of ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x18002820C
 * Callers:
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x180028AAC (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@.c)
 *     ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801928F0 (-SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x18002633C (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::SetRailsEnabled_RenderThread(__int64 a1, char a2, unsigned int a3)
{
  int ManipulationManager; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int updated; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct CManipulationManager *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v13);
  ManipulationManager = CComposition::GetManipulationManager(*(CComposition **)(a1 + 24), &v13);
  v8 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ManipulationManager, 0x39Eu);
  }
  else
  {
    updated = CManipulationManager::NotifyUpdateRails(v7, a1, a2, a3);
    v8 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x3A0u);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 264);
      if ( v11 )
      {
        LOBYTE(v10) = a2;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v11 + 64) + 48LL))(v11 + 64, v10, a3);
      }
    }
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v13);
  return v8;
}
