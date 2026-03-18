/*
 * XREFs of VidMmCreateProcess @ 0x1C0001D80
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C001E63C (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C004D9E4 (--0VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C004DA40 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

VIDMM_PROCESS *__fastcall VidMmCreateProcess(struct DXGPROCESS *a1)
{
  VIDMM_PROCESS *PoolWithTag; // rax
  VIDMM_PROCESS *v3; // rbx
  unsigned int v4; // edx

  PoolWithTag = (VIDMM_PROCESS *)ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x39306956u);
  if ( PoolWithTag )
    v3 = VIDMM_PROCESS::VIDMM_PROCESS(PoolWithTag);
  else
    v3 = 0LL;
  if ( v3 && (int)VIDMM_PROCESS::Init(v3, a1) < 0 )
  {
    VIDMM_PROCESS::`scalar deleting destructor'(v3, v4);
    return 0LL;
  }
  return v3;
}
