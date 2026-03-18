/*
 * XREFs of ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004E20C
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180130148 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x1800CAD04 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1800CB1F4 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180135308 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 */

void __fastcall CManipulationManager::CalculateFrameTargets(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int i; // ebp
  int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r14
  struct IManipulationContext *v10; // rbx
  struct IManipulationContext *v11; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v9 = 152LL * i;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
      (char *)this + 120,
      &v11,
      (char *)a2 + v9 + 100);
    v10 = v11;
    if ( v11 && (*(_DWORD *)((_BYTE *)a2 + v9 + 108) & 0x40004) != 0 )
    {
      if ( (int)CGestureTargetingManager::ProcessInput(v11, (struct CManipulationFrame *)((char *)a2 + v9 + 96)) >= 0 )
      {
        if ( *((_DWORD *)v10 + 6) != 1 )
          *((_DWORD *)v10 + 6) = 2;
      }
      else
      {
        *((_DWORD *)v10 + 6) = 1;
      }
    }
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v11);
  }
  v5 = 0;
  if ( *((int *)this + 38) > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v6 + *((_QWORD *)this + 18));
      if ( *(_DWORD *)(v7 + 24) == 2 )
        CGestureTargetingManager::ProcessInteractions((struct IManipulationContext *)v7, *((_DWORD *)a2 + 24));
      ++v5;
      v8 = *(_QWORD *)(*((_QWORD *)this + 18) + v6);
      v6 += 8LL;
      *(_DWORD *)(v8 + 24) = 0;
    }
    while ( v5 < *((_DWORD *)this + 38) );
  }
}
