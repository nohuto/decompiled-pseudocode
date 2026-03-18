/*
 * XREFs of ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18019856C
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801973EC (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197FA4 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180195874 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18019628C (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180197760 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?TargetBufferedFrames@CManipulationManager@@AEAAXIPEAX_KK@Z @ 0x180198498 (-TargetBufferedFrames@CManipulationManager@@AEAAXIPEAX_KK@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEA_K@Z @ 0x18019874C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x1801A488C (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 */

void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int v2; // esi
  unsigned __int64 i; // r15
  __int64 v6; // rbx
  char *v7; // r12
  unsigned __int64 v8; // rcx
  void *v9; // r8
  unsigned __int64 v10; // r9
  int v11; // r12d
  __int64 v12; // r13
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  struct CManipulationContext *v17; // [rsp+80h] [rbp+48h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+50h] BYREF
  void *v19; // [rsp+90h] [rbp+58h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp+60h] BYREF

  v2 = 0;
  for ( i = 0LL; v2 < *((_DWORD *)a2 + 4); ++v2 )
  {
    v6 = 224LL * v2;
    v7 = (char *)a2 + v6;
    if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                         (CManipulationManager *)((char *)this + 304),
                         *(_QWORD *)((char *)a2 + v6 + 176),
                         &v18) )
    {
      v8 = v18;
    }
    else
    {
      v8 = 1000LL * *(unsigned int *)((char *)a2 + v6 + 160);
      v18 = v8;
    }
    if ( i < v8 )
      i = v8;
    if ( (*((_BYTE *)a2 + 40) & 2) == 0 || *(_QWORD *)((char *)a2 + v6 + 120) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 120,
        (__int64 (__fastcall ****)(_QWORD))&v17,
        (__int64)(v7 + 100));
      if ( (((*(_DWORD *)((_BYTE *)a2 + v6 + 108) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 )
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
          (__int64 (__fastcall ****)(_QWORD))&v17,
          (_QWORD *)this + 33);
      v9 = 0LL;
      v10 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      if ( v17 )
      {
        CManipulationManager::TargetPointer(this, v17, a2, v2, &v19, &v20);
        v9 = v19;
        v10 = v20;
      }
      *(_QWORD *)((char *)a2 + v6 + 120) = v9;
      *(_QWORD *)((char *)a2 + v6 + 304) = v10;
      if ( v9 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 40) |= 1u;
        if ( (*((_BYTE *)a2 + 40) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, *((_DWORD *)v7 + 25), v9, v10, v2);
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v17);
    }
  }
  v11 = 0;
  if ( *((int *)this + 38) > 0 )
  {
    v12 = 0LL;
    do
    {
      v13 = 0;
      if ( *((_DWORD *)a2 + 4) == 1 && (*((_DWORD *)a2 + 27) & 0x800000) != 0 )
      {
        v14 = *((_DWORD *)a2 + 42);
        if ( v14 == 571 )
        {
          v13 = 1;
        }
        else if ( v14 == 572 )
        {
          v13 = 2;
        }
      }
      v15 = *(_QWORD *)(*((_QWORD *)this + 18) + v12);
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      CGestureTargetingManager::ProcessHandledInteractionsWalk(v15, v16, i, v13, (char *)a2 + 48);
      ++v11;
      v12 += 8LL;
    }
    while ( v11 < *((_DWORD *)this + 38) );
  }
}
