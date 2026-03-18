/*
 * XREFs of ?VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z @ 0x1C001EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001F314 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VidMmSetSegmentPowerState(struct VIDMM_GLOBAL *a1, unsigned int a2, int a3, int a4, char a5)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 464)
                 + 8LL * (unsigned int)(a3 + *(_DWORD *)(472LL * a2 + *((_QWORD *)a1 + 5021) + 20)));
  if ( a4 == *(_DWORD *)(v5 + 392) )
  {
    *(_BYTE *)(v5 + 396) = a5;
    if ( !a5 )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*(VIDMM_GLOBAL **)(v5 + 8), (struct VIDMM_SEGMENT *)v5);
  }
}
