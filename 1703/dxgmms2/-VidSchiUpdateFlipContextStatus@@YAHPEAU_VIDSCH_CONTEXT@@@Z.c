/*
 * XREFs of ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00106A4
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0013868 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C00138D0 (VidSchiProcessFlipPendingContextList.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C000DA38 (VidSchiUnwaitContext.c)
 */

__int64 __fastcall VidSchiUpdateFlipContextStatus(struct _VIDSCH_CONTEXT *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 44) & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 44) &= ~0x10u;
    return VidSchiUnwaitContext((__int64)a1, 0x4C96u);
  }
  return v1;
}
