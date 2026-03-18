/*
 * XREFs of ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x1801921DC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z @ 0x1801CEB28 (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z.c)
 */

__int64 __fastcall CInteraction::ProcessCaptureManipulationInCompositor(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR *a3)
{
  int ManipulationManager; // eax
  CManipulationManager *v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  struct CManipulationManager *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v10);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v10);
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ManipulationManager, 0x1BFu);
  }
  else
  {
    v8 = CManipulationManager::NotifyCaptureManipulation(
           v6,
           (struct CInteraction *)this,
           *((_DWORD *)a3 + 2),
           *((_DWORD *)a3 + 3),
           *((_QWORD *)a3 + 2));
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1C1u);
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v10);
  return v7;
}
