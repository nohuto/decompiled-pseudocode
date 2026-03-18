/*
 * XREFs of ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180195AA0
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801973EC (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18019628C (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1801A4968 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x1801A4E64 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z.c)
 */

void __fastcall CManipulationManager::CalculateFrameTargets(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int i; // ebp
  __int64 v5; // r14
  struct IManipulationContext *v6; // rbx
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct IManipulationContext *v11; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v5 = 224LL * i;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
      (char *)this + 120,
      &v11,
      (char *)a2 + v5 + 100);
    v6 = v11;
    if ( v11 && (*(_DWORD *)((_BYTE *)a2 + v5 + 108) & 0x40004) != 0 )
    {
      if ( (int)CGestureTargetingManager::ProcessInput(v11, (struct CManipulationFrame *)((char *)a2 + v5 + 96)) < 0 )
      {
        *((_DWORD *)v6 + 6) = 1;
      }
      else if ( *((_DWORD *)v6 + 6) != 1 )
      {
        *((_DWORD *)v6 + 6) = 2;
      }
    }
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v11);
  }
  v7 = 0;
  if ( *((int *)this + 38) > 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)(v8 + *((_QWORD *)this + 18));
      if ( *(_DWORD *)(v9 + 24) == 2 )
        CGestureTargetingManager::ProcessInteractions((struct IManipulationContext *)v9, *((_DWORD *)a2 + 24));
      ++v7;
      v10 = *(_QWORD *)(v8 + *((_QWORD *)this + 18));
      v8 += 8LL;
      *(_DWORD *)(v10 + 24) = 0;
    }
    while ( v7 < *((_DWORD *)this + 38) );
  }
}
