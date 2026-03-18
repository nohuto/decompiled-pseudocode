/*
 * XREFs of ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CE680
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CFA98 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180025834 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801CEAB8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1801CEAE8 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1801DD490 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1801DD9B4 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 */

void __fastcall CManipulationManager::CalculateFrameTargets(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int v4; // ebp
  bool IsMousewheelFrame; // r15
  __int64 v6; // rdx
  __int64 v7; // r14
  struct IManipulationContext *v8; // rbx
  int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  struct IManipulationContext *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v6 + 16) )
  {
    do
    {
      v7 = 232LL * v4;
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (char *)this + 120,
        &v15,
        (char *)a2 + v7 + 100);
      v8 = v15;
      if ( v15 && ((*(_DWORD *)((_BYTE *)a2 + v7 + 108) & 0x40004) != 0 || IsMousewheelFrame) )
      {
        if ( (int)CGestureTargetingManager::ProcessInput(v15, (struct CManipulationFrame *)((char *)a2 + v7 + 96)) < 0 )
        {
          *((_DWORD *)v8 + 6) = 1;
        }
        else if ( *((_DWORD *)v8 + 6) != 1 )
        {
          *((_DWORD *)v8 + 6) = 2;
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a2 + 4) );
  }
  v9 = 0;
  if ( *((int *)this + 38) > 0 )
  {
    v10 = 0LL;
    do
    {
      v11 = *((_QWORD *)this + 18);
      if ( *(_DWORD *)(*(_QWORD *)(v10 + v11) + 24LL) == 2 )
      {
        v12 = ConvertToInputType(*((_DWORD *)a2 + 24), *((_DWORD *)a2 + 27));
        CGestureTargetingManager::ProcessInteractions(v13, v12);
        v11 = *((_QWORD *)this + 18);
      }
      v14 = *(_QWORD *)(v10 + v11);
      ++v9;
      v10 += 8LL;
      *(_DWORD *)(v14 + 24) = 0;
    }
    while ( v9 < *((_DWORD *)this + 38) );
  }
}
