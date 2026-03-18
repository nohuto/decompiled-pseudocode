/*
 * XREFs of VidSchiProcessFlipPendingContextList @ 0x1C0015B24
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009D80 (VidSchiScheduleCommandToRun.c)
 *     VidSchiClearFlipDevice @ 0x1C000EB1C (VidSchiClearFlipDevice.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0015ABC (VidSchiUpdateFlipDeviceStatus.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013ACC (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiProcessFlipPendingContextList(__int64 a1)
{
  unsigned int v1; // edi
  __int64 **v2; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rcx

  v1 = 0;
  v2 = (__int64 **)(a1 + 3136);
  while ( *v2 != (__int64 *)v2 )
  {
    v4 = *v2;
    if ( (__int64 **)(*v2)[1] != v2 || (v5 = (__int64 *)*v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v2 = v5;
    v6 = v4 - 5;
    v5[1] = (__int64)v2;
    v6[5] = 0LL;
    v6[6] = 0LL;
    v1 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)v6);
  }
  return v1;
}
