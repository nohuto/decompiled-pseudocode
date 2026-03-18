/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C5E8
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(
        VIDMM_GLOBAL ***this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL **v4; // rdx
  VIDMM_GLOBAL *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(v6);
    v7[3] = *((_QWORD *)a2 + 33);
    v7[4] = *((unsigned int *)a2 + 64);
    v7[5] = *((int *)a2 + 65);
  }
  v4 = this[472];
  v5 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 232);
  if ( *v4 != (VIDMM_GLOBAL *)(this + 471) )
    __fastfail(3u);
  *(_QWORD *)v5 = this + 471;
  *((_QWORD *)a2 + 30) = v4;
  *v4 = v5;
  this[472] = (VIDMM_GLOBAL **)v5;
}
