/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x180028910
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x180026254 (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x180028378 (-TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42Inte.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        void *a4,
        unsigned int a5)
{
  int v6; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // esi
  int ManipulationManager; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = 0LL;
  v6 = *((_DWORD *)a3 + 4);
  if ( v6 == 1 || v6 == 2 || v6 == 3 )
  {
LABEL_4:
    v9 = 12LL;
    goto LABEL_5;
  }
  if ( v6 != 4 )
  {
    if ( v6 != 5 )
    {
      v15 = -2147024809;
      v18 = 340;
LABEL_15:
      v17 = v15;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v18);
      goto LABEL_9;
    }
    goto LABEL_4;
  }
  v9 = 4LL;
LABEL_5:
  v11 = v9;
  v10 = *((unsigned int *)a3 + 2) * v9;
  if ( !is_mul_ok(*((unsigned int *)a3 + 2), v11) )
  {
    v15 = -2147024362;
    v18 = 343;
    goto LABEL_15;
  }
  v12 = a5;
  if ( v10 != a5 )
  {
    v15 = -2003303421;
    v18 = 347;
    goto LABEL_15;
  }
  CInteraction::TraceUpdatedConfiguration((__int64)this, *((_DWORD *)a3 + 3), v6, *((_DWORD *)a3 + 2), (__int64)a4);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v19);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v19);
  v15 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v18 = 355;
    goto LABEL_19;
  }
  ManipulationManager = CManipulationManager::NotifyUpdateConfiguration(
                          v14,
                          (__int64)this,
                          *((_DWORD *)a3 + 3),
                          *((_DWORD *)a3 + 4),
                          *((_DWORD *)a3 + 2),
                          a4,
                          v12);
  v15 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v18 = 357;
LABEL_19:
    v17 = ManipulationManager;
    goto LABEL_20;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v19);
  return v15;
}
