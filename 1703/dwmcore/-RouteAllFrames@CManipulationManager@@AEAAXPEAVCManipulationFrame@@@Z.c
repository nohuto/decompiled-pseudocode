/*
 * XREFs of ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004DE38
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180130148 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800CFDF0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180135268 (-Remove@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@V.c)
 */

void __fastcall CManipulationManager::RouteAllFrames(CManipulationManager *this, struct CManipulationFrame *a2)
{
  int v2; // ebx
  struct CManipulationFrame **v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // r15

  v2 = 0;
  if ( *((int *)this + 48) > 0 )
  {
    v7 = (_QWORD *)((char *)this + 184);
    v6 = 0LL;
    do
    {
      v5 = (struct CManipulationFrame **)(v6 + *v7);
      if ( *v5 == a2 )
        break;
      CManipulationManager::RouteFrameInput(this, *v5);
      if ( *((_DWORD *)*v5 + 5) == *((_DWORD *)*v5 + 4) )
      {
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
          v7,
          v5);
      }
      else
      {
        ++v2;
        v6 += 8LL;
      }
    }
    while ( v2 < *((_DWORD *)this + 48) );
  }
  CManipulationManager::RouteFrameInput(this, a2);
}
