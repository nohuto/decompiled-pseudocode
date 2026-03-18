/*
 * XREFs of ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0061530
 * Callers:
 *     ?VidMmIsAllocationAccessPending@@YAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0012B10 (-VidMmIsAllocationAccessPending@@YAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::IsAllocationAccessPending(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL);
  if ( v2 )
    return VidSchIsDeviceBusy(*(_QWORD *)(v2 + 600));
  else
    return 0;
}
