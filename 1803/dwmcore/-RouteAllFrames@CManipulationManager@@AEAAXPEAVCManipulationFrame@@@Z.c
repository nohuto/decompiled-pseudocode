/*
 * XREFs of ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801D05D0
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CFA98 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801D0228 (-Remove@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@V.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801D0678 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::RouteAllFrames(CManipulationManager *this, struct CManipulationFrame *a2)
{
  int v2; // edi
  __int64 v5; // rbp
  _QWORD *v6; // r15
  struct CManipulationFrame **v7; // rsi

  v2 = 0;
  if ( *((int *)this + 48) > 0 )
  {
    v5 = 0LL;
    v6 = (_QWORD *)((char *)this + 184);
    do
    {
      v7 = (struct CManipulationFrame **)(*v6 + 8 * v5);
      if ( *v7 == a2 )
        break;
      CManipulationManager::RouteFrameInput(this, *v7);
      if ( *((_DWORD *)*v7 + 5) == *((_DWORD *)*v7 + 4) )
      {
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
          (__int64)v6,
          v7);
      }
      else
      {
        ++v2;
        ++v5;
      }
    }
    while ( v2 < *((_DWORD *)this + 48) );
  }
  CManipulationManager::RouteFrameInput(this, a2);
}
