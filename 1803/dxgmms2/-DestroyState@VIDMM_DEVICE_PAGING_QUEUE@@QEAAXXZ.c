/*
 * XREFs of ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00562D8
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0075EA8 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroyDeviceSyncObject @ 0x1C0002F90 (VidSchDestroyDeviceSyncObject.c)
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C006B484 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     VidSchDestroySyncObject @ 0x1C00774D0 (VidSchDestroySyncObject.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::DestroyState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  void *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rdx

  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 17);
    v4 = *v3;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v3 + 16LL) + 528LL) + 54LL) )
    {
      v5 = 0;
      if ( *(_DWORD *)(v4 + 6992) )
      {
        do
        {
          VIDMM_GLOBAL::UnmapGpuVA(
            (VIDMM_GLOBAL *)v4,
            *(struct VIDMM_PROCESS **)(v4 + 40896),
            (struct VIDMM_MONITORED_FENCE_STORAGE *)(*((_QWORD *)this + 19) + 48LL));
          ++v5;
        }
        while ( v5 < *(_DWORD *)(v4 + 6992) );
        v3 = (_QWORD *)*((_QWORD *)this + 17);
        v2 = (void *)*((_QWORD *)this + 19);
      }
    }
    v6 = v3[4];
    if ( v6 )
    {
      VidSchDestroyDeviceSyncObject((__int64)v2, v6, 1, 0LL);
      v2 = (void *)*((_QWORD *)this + 19);
    }
    VidSchDestroySyncObject(v2);
  }
}
