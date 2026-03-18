/*
 * XREFs of HmgRemoveObject @ 0x1C0042F70
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001D210 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00418C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00438D0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00565B0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0085788 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00FCED0 (EngDeleteDriverObj.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00A9BBC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void *__fastcall HmgRemoveObject(struct HOBJ__ *a1, int a2, int a3, int a4, char a5, unsigned int *a6)
{
  return HmgRemoveObjectImpl(a1, a2, a3, a4 != 0, a5, a6);
}
