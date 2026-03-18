/*
 * XREFs of ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013070
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C0014798 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0014800 (VidSchiProcessFlipPendingContextList.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C0011080 (VidSchiUnwaitContext.c)
 */

__int64 __fastcall VidSchiUpdateFlipContextStatus(struct _VIDSCH_CONTEXT *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 46) & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 46) &= ~0x10u;
    return VidSchiUnwaitContext((__int64)a1, 0x4E67u);
  }
  return v1;
}
