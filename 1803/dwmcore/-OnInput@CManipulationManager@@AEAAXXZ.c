/*
 * XREFs of ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801CF1C4
 * Callers:
 *     _lambda_1e2b6ca0fa40af4229692291bbc0b04e_::_lambda_invoker_cdecl_ @ 0x1801CE0A0 (_lambda_1e2b6ca0fa40af4229692291bbc0b04e_--_lambda_invoker_cdecl_.c)
 *     _lambda_d2b5a6ed0b58bba383995fb75711c660_::_lambda_invoker_cdecl_ @ 0x1801CE110 (_lambda_d2b5a6ed0b58bba383995fb75711c660_--_lambda_invoker_cdecl_.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801CFC38 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CFA98 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1801D02D8 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 */

void __fastcall CManipulationManager::OnInput(unsigned __int64 this, __int64 a2, __int64 a3)
{
  CManipulationManager *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rbx
  int *v6; // rdi
  int *v7; // [rsp+48h] [rbp+10h] BYREF
  struct CManipulationFrame *v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = (CManipulationManager *)this;
  v4 = (__int64 *)&v7;
  v5 = 0LL;
  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(this, &v8, a3, v4);
    v6 = (int *)v8;
    v8 = 0LL;
    v9 = v5;
    v5 = (__int64)v6;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v8);
    v4 = 0LL;
    if ( v6 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_FRAME_DEQUEUED, v6[6], v6[4]);
      CManipulationManager::ProcessManipulationInfo(v3, (struct CManipulationFrame *)v6);
    }
    this = (unsigned int)v7;
    LODWORD(v7) = (_DWORD)v7 - 1;
  }
  while ( (_DWORD)this );
  v7 = v6;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v7);
}
