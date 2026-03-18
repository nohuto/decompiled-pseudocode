/*
 * XREFs of ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x18004B218
 * Callers:
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x18004B960 (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@.c)
 *     ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180167370 (-SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x18004D920 (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::SetRailsEnabled_RenderThread(__int64 a1, char a2, unsigned int a3)
{
  int ManipulationManager; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  int updated; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct CManipulationManager *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v14);
  ManipulationManager = CComposition::GetManipulationManager(*(CComposition **)(a1 + 24), &v14);
  v9 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x393u);
  }
  else
  {
    LOBYTE(v8) = a2;
    updated = CManipulationManager::NotifyUpdateRails(v7, a1, v8, a3);
    v9 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x395u);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 280);
      if ( v12 )
      {
        LOBYTE(v11) = a2;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v11, a3);
      }
    }
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v14);
  return v9;
}
