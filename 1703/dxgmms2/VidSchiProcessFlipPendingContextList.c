/*
 * XREFs of VidSchiProcessFlipPendingContextList @ 0x1C00138D0
 * Callers:
 *     VidSchiClearFlipDevice @ 0x1C00022EC (VidSchiClearFlipDevice.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0008F20 (VidSchiScheduleCommandToRun.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0013868 (VidSchiUpdateFlipDeviceStatus.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00106A4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiProcessFlipPendingContextList(__int64 a1)
{
  unsigned int v1; // edi
  __int64 **v2; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax
  struct _VIDSCH_CONTEXT *v6; // rcx

  v1 = 0;
  v2 = (__int64 **)(a1 + 3120);
  while ( *v2 != (__int64 *)v2 )
  {
    v4 = *v2;
    v5 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v2 = (__int64 *)v5;
    v6 = (struct _VIDSCH_CONTEXT *)(v4 - 5);
    *(_QWORD *)(v5 + 8) = v2;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    v1 |= VidSchiUpdateFlipContextStatus(v6);
  }
  return v1;
}
