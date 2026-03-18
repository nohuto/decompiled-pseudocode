/*
 * XREFs of ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0030D14
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0030470 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchCreateHwQueue @ 0x1C0032270 (VidSchCreateHwQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementHwContextReference(struct VIDSCH_HW_CONTEXT *a1)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)a1 + 8) == 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL));
}
