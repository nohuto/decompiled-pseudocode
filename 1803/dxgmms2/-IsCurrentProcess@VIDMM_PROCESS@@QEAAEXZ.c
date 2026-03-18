/*
 * XREFs of ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0005AD0
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C00688C8 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_PROCESS::IsCurrentProcess(VIDMM_PROCESS *this)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)this;
  return v1 == PsGetCurrentProcess();
}
