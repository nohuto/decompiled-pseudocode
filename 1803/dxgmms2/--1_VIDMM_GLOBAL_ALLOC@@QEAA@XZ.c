/*
 * XREFs of ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C0056210
 * Callers:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00228B8 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0067090 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A3FE4 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(PVOID *this)
{
  struct _MDL *v2; // rcx

  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    UnlockParavirtualizedAllocationOnHost((struct _VIDMM_GLOBAL_ALLOC *)this);
    v2 = (struct _MDL *)this[64];
    if ( v2 )
    {
      MmFreePagesFromMdl(v2);
      ExFreePoolWithTag(this[64], 0);
      this[64] = 0LL;
    }
  }
}
