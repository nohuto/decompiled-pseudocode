/*
 * XREFs of ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18004E068
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800CFDF0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180130148 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z @ 0x18004E300 (-TargetBufferedFrames@CManipulationManager@@AEAAXIPEAXIK@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x1800CFA6C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180134F3C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180135308 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18018AF24 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180195304 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 */

void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int v2; // esi
  unsigned __int64 i; // r15
  int v6; // r12d
  __int64 v7; // r13
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  char *v13; // r12
  unsigned __int64 v14; // rcx
  void *v15; // r8
  unsigned int v16; // r9d
  unsigned int v17; // [rsp+80h] [rbp+48h] BYREF
  struct CManipulationContext *v18; // [rsp+88h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+58h] BYREF
  void *v20; // [rsp+98h] [rbp+60h] BYREF

  v2 = 0;
  for ( i = 0LL; v2 < *((_DWORD *)a2 + 4); ++v2 )
  {
    v12 = 152LL * v2;
    v13 = (char *)a2 + v12;
    if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                         (CManipulationManager *)((char *)this + 304),
                         *(_QWORD *)((char *)a2 + v12 + 176),
                         &v19) )
    {
      v14 = v19;
    }
    else
    {
      v14 = 1000LL * *(unsigned int *)((char *)a2 + v12 + 160);
      v19 = v14;
    }
    if ( i < v14 )
      i = v14;
    if ( (*((_BYTE *)a2 + 40) & 2) == 0 || *(_QWORD *)((char *)a2 + v12 + 120) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (char *)this + 120,
        &v18,
        v13 + 100);
      if ( (((*(_DWORD *)((_BYTE *)a2 + v12 + 108) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 )
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v18, (char *)this + 264);
      v15 = 0LL;
      v16 = 0;
      v20 = 0LL;
      v17 = 0;
      if ( v18 )
      {
        CManipulationManager::TargetPointer(this, v18, a2, v2, &v20, &v17);
        v15 = v20;
        v16 = v17;
      }
      *(_QWORD *)((char *)a2 + v12 + 120) = v15;
      *(_DWORD *)((char *)a2 + v12 + 240) = v16;
      if ( v15 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 40) |= 1u;
        if ( (*((_BYTE *)a2 + 40) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, *((_DWORD *)v13 + 25), v15, v16, v2);
      }
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v18);
    }
  }
  v6 = 0;
  if ( *((int *)this + 38) > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = 0;
      if ( *((_DWORD *)a2 + 4) == 1 && (*((_DWORD *)a2 + 27) & 0x800000) != 0 )
      {
        v9 = *((_DWORD *)a2 + 42);
        if ( v9 == 571 )
        {
          v8 = 1;
        }
        else if ( v9 == 572 )
        {
          v8 = 2;
        }
      }
      v10 = *(_QWORD *)(*((_QWORD *)this + 18) + v7);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      CGestureTargetingManager::ProcessHandledInteractionsWalk(v10, v11, i, v8, (char *)a2 + 48);
      ++v6;
      v7 += 8LL;
    }
    while ( v6 < *((_DWORD *)this + 38) );
  }
}
