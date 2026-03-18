/*
 * XREFs of ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00929F4
 * Callers:
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00733C4 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00920D8 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroySyncObject @ 0x1C006B960 (VidSchDestroySyncObject.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyPagingFenceObjects(VIDMM_GLOBAL *this, __int64 a2)
{
  __int64 i; // rbx
  int *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
  {
    v4 = (int *)*((_QWORD *)this + i + 738);
    if ( v4 )
    {
      VidSchDestroySyncObject(v4, a2);
      *((_QWORD *)this + i + 738) = 0LL;
    }
  }
}
