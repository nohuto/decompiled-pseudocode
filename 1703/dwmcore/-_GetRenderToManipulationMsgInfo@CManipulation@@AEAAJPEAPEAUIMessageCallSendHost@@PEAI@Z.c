/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEAI@Z @ 0x180168BDC
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x180167FF8 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801680CC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CComposition **this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3)
{
  int ManipulationManager; // eax
  unsigned int v7; // ebx
  struct CManipulationManager *v8; // rbx
  struct IMessageCallSendHost **v9; // rdi
  unsigned int v10; // edx
  struct CManipulationManager *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v12);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v12);
  v7 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x2E9u);
  }
  else
  {
    v8 = v12;
    *a2 = 0LL;
    v9 = (struct IMessageCallSendHost **)((char *)v8 + 360);
    if ( *((_QWORD *)v8 + 45)
      && (Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v8 + 45), (*a2 = *v9) != 0LL) )
    {
      v10 = *((_DWORD *)v8 + 82);
      *a3 = v10;
      v7 = v10 != 0 ? 0 : 0x80004005;
      if ( !v10 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x2EDu);
    }
    else
    {
      v7 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x2EBu);
    }
  }
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v12);
  return v7;
}
