/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x180171694
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180170AC8 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x180170B9C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CComposition **this,
        struct IMessageCallSendHost **a2,
        unsigned __int64 *a3)
{
  int ManipulationManager; // eax
  unsigned int v7; // edi
  struct CManipulationManager *v8; // rbx
  struct IMessageCallSendHost **v9; // rsi
  unsigned __int64 v10; // rcx
  DWORD v11; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]
  struct CManipulationManager *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v14);
  ManipulationManager = CComposition::GetManipulationManager(this[2], &v14);
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v13 = 850;
    v11 = ManipulationManager;
    goto LABEL_10;
  }
  v8 = v14;
  *a2 = 0LL;
  v9 = (struct IMessageCallSendHost **)((char *)v8 + 360);
  if ( *((_QWORD *)v8 + 45) )
  {
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v8 + 45);
    *a2 = *v9;
  }
  v7 = *v9 == 0LL ? 0x80004005 : 0;
  if ( !*v9 )
  {
    v13 = 852;
    goto LABEL_7;
  }
  v10 = *((_QWORD *)v8 + 41);
  *a3 = v10;
  v7 = v10 == 0 ? 0x80004005 : 0;
  if ( !v10 )
  {
    v13 = 854;
LABEL_7:
    v11 = v7;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v13);
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v14);
  return v7;
}
