/*
 * XREFs of ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x1801698BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z @ 0x18019653C (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z.c)
 */

__int64 __fastcall CInteraction::ProcessCaptureManipulationInCompositor(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR *a3)
{
  signed int ManipulationManager; // eax
  CManipulationManager *v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  struct CManipulationManager *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v10);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v10);
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ManipulationManager, 0x1ABu);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1ADu);
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v10);
  return v7;
}
