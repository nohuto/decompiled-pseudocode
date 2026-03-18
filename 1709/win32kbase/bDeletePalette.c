/*
 * XREFs of bDeletePalette @ 0x1C006ECD0
 * Callers:
 *     GdiThreadCallout @ 0x1C001DCC0 (GdiThreadCallout.c)
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C006EEF8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  PERESOURCE v8; // [rsp+20h] [rbp-18h] BYREF
  struct OBJECT *v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = ghsemPalette;
  EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, a1);
  v6 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v9, a2, a3);
  if ( v9 )
    HmgDecrementShareReferenceCountEx(v9, 0LL);
  SEMOBJ::vUnlock(&v8);
  return v6;
}
