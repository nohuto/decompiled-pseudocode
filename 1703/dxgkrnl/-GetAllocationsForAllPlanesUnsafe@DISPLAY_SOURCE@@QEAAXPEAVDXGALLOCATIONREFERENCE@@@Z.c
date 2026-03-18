/*
 * XREFs of ?GetAllocationsForAllPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAVDXGALLOCATIONREFERENCE@@@Z @ 0x1C01711DC
 * Callers:
 *     ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@@Z @ 0x1C0171170 (-GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@@Z.c)
 * Callees:
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::GetAllocationsForAllPlanesUnsafe(
        DISPLAY_SOURCE *this,
        struct DXGALLOCATION **a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  struct DXGALLOCATION **v5; // rbp
  __int64 v7; // rax
  unsigned int i; // ebx
  struct _EX_RUNDOWN_REF *v9; // rsi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _EX_RUNDOWN_REF *v14; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, CurrentThread, a4);
    *(_QWORD *)(v7 + 24) = 7608LL;
    WdLogEvent5_WdAssertion(v7);
  }
  for ( i = 0; i < 8; ++i )
  {
    v9 = 0LL;
    if ( i < *((_DWORD *)this + 798) )
    {
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i, (__int64)CurrentThread, a4);
      if ( LatestPlaneConfigInternal )
      {
        if ( *((_BYTE *)LatestPlaneConfigInternal + 12) )
          v9 = *(struct _EX_RUNDOWN_REF **)LatestPlaneConfigInternal;
      }
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v14, v9);
    DXGALLOCATIONREFERENCE::MoveAssign(v5, (struct DXGALLOCATION **)&v14);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v14, v11, v12, v13);
    ++v5;
  }
}
