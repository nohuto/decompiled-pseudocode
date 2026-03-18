/*
 * XREFs of bDeletePalette @ 0x1C0059240
 * Callers:
 *     GdiThreadCallout @ 0x1C0028480 (GdiThreadCallout.c)
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C005A1CC (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v4; // ebx
  HSEMAPHORE v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v6 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  v4 = XEPALOBJ::bDeletePalette(&v7, a2);
  if ( v7 )
    HmgDecrementShareReferenceCount(v7);
  SEMOBJ::vUnlock((PERESOURCE *)&v6);
  return v4;
}
