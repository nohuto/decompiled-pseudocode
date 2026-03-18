/*
 * XREFs of ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18004E3CC
 * Callers:
 *     _lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_ @ 0x180189D60 (_lambda_0342f3220c32cb7c81f8659183993432_--_lambda_invoker_cdecl_.c)
 *     _lambda_85f18509193cd6d47eaa6d1c8f3fb8df_::_lambda_invoker_cdecl_ @ 0x180189DD0 (_lambda_85f18509193cd6d47eaa6d1c8f3fb8df_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800CBC6C (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180130148 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

void __fastcall CManipulationManager::OnInput(unsigned __int64 this, __int64 a2, __int64 a3)
{
  CManipulationManager *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rbx
  unsigned int *v6; // rdi
  __int64 v7; // rcx
  unsigned int *v8; // [rsp+48h] [rbp+10h] BYREF
  struct CManipulationFrame *v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = (CManipulationManager *)this;
  v4 = (__int64 *)&v8;
  v5 = 0LL;
  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(this, &v9, a3, v4);
    v6 = (unsigned int *)v9;
    v9 = 0LL;
    v10 = v5;
    v5 = (__int64)v6;
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v9);
    v4 = 0LL;
    if ( v6 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v7, &MANIPULATION_FRAME_DEQUEUED, v6[6], v6[4]);
      CManipulationManager::ProcessManipulationInfo(v3, (struct CManipulationFrame *)v6);
    }
    this = (unsigned int)v8;
    LODWORD(v8) = (_DWORD)v8 - 1;
  }
  while ( (_DWORD)this );
  v8 = v6;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v8);
}
