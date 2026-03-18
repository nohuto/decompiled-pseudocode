/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x18019A51C
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180199938 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180199A0C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CComposition **this,
        struct IMessageCallSendHost **a2,
        unsigned __int64 *a3)
{
  int ManipulationManager; // eax
  unsigned int v7; // edi
  struct CManipulationManager *v8; // rbx
  struct IMessageCallSendHost **v9; // rdi
  struct IMessageCallSendHost *v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct CManipulationManager *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v15);
  ManipulationManager = CComposition::GetManipulationManager(this[2], &v15);
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v14 = 874;
    v12 = ManipulationManager;
    goto LABEL_10;
  }
  *a2 = 0LL;
  v8 = v15;
  v9 = (struct IMessageCallSendHost **)((char *)v15 + 360);
  v10 = (struct IMessageCallSendHost *)*((_QWORD *)v15 + 45);
  if ( v10 )
  {
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v15 + 45);
    *a2 = *v9;
    v10 = *v9;
  }
  v7 = v10 == 0LL ? 0x80004005 : 0;
  if ( !v10 )
  {
    v14 = 876;
    goto LABEL_7;
  }
  v11 = *((_QWORD *)v8 + 41);
  *a3 = v11;
  v7 = v11 == 0 ? 0x80004005 : 0;
  if ( !v11 )
  {
    v14 = 878;
LABEL_7:
    v12 = v7;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v14);
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v15);
  return v7;
}
