/*
 * XREFs of ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0068C24
 * Callers:
 *     ?VidMmIsAllocationAccessPending@@YAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003D70 (-VidMmIsAllocationAccessPending@@YAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x1C000382C (VidSchIsDeviceBusy.c)
 */

char __fastcall VIDMM_GLOBAL::IsAllocationAccessPending(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL);
  if ( v2 )
    return VidSchIsDeviceBusy(*(_QWORD *)(v2 + 616));
  else
    return 0;
}
