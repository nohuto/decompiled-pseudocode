/*
 * XREFs of ?GetAllocationsForAllPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0174D8C
 * Callers:
 *     ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0174D10 (-GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0079478 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::GetAllocationsForAllPlanesUnsafe(
        DISPLAY_SOURCE *this,
        struct DXGALLOCATION **a2,
        unsigned int a3)
{
  __int64 v6; // rax
  unsigned int i; // esi
  struct _EX_RUNDOWN_REF *v8; // rbp
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _EX_RUNDOWN_REF *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 8367LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 934) < a3 )
    a3 = *((_DWORD *)this + 934);
  for ( i = 0; i < a3; ++a2 )
  {
    v8 = 0LL;
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
    if ( LatestPlaneConfigInternal )
    {
      if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        v8 = *(struct _EX_RUNDOWN_REF **)LatestPlaneConfigInternal;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v10, v8);
    DXGALLOCATIONREFERENCE::MoveAssign(a2, (struct DXGALLOCATION **)&v10);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v10);
    ++i;
  }
}
