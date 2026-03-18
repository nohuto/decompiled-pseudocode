/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059360
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
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
