/*
 * XREFs of VidSchiUpdateFlipDeviceStatus @ 0x1C0013868
 * Callers:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00135E0 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C002A790 (VidSchUnreferenceDisplayingAllocationInternal.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00106A4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C00138D0 (VidSchiProcessFlipPendingContextList.c)
 */

__int64 __fastcall VidSchiUpdateFlipDeviceStatus(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // edi
  _QWORD *v3; // rbx
  int updated; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  v3 = *(_QWORD **)(v1 + 64);
  while ( v3 != (_QWORD *)(v1 + 64) )
  {
    updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v3 - 3));
    v3 = (_QWORD *)*v3;
    v2 |= updated;
  }
  return v2 | (unsigned int)VidSchiProcessFlipPendingContextList(*(_QWORD *)(v1 + 32));
}
