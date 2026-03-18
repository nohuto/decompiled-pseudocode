/*
 * XREFs of ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009FA40
 * Callers:
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007D3E0 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C009E970 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C006B484 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     VidSchDestroySyncObject @ 0x1C00774D0 (VidSchDestroySyncObject.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyPagingFenceObjects(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  int *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1748); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
    if ( *(_BYTE *)(v3 + 54) && *((_QWORD *)this + i + 810) )
      VIDMM_GLOBAL::UnmapGpuVA(
        this,
        *((struct VIDMM_PROCESS **)this + 5112),
        (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + i + 746) + 48LL));
    v4 = (int *)*((_QWORD *)this + i + 746);
    if ( v4 )
    {
      VidSchDestroySyncObject(v4, v3);
      *((_QWORD *)this + i + 746) = 0LL;
    }
  }
}
