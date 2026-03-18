/*
 * XREFs of FreeObject @ 0x1C0054E50
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C001C9A0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001D210 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C001E430 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001E50C (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0043550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00565B0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C006EFA0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0085788 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     HmgFree @ 0x1C00A26F0 (HmgFree.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00A9750 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     EngDeleteDriverObj @ 0x1C00FCED0 (EngDeleteDriverObj.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall FreeObject(__int64 a1, int a2)
{
  void * near *v3; // rdi
  __int64 result; // rax

  if ( *(__int16 *)(a1 + 14) >= 0 )
    return Win32FreePool(a1);
  v3 = (&pHmgLookAsideList)[a2];
  result = IsWin32FreeToPagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32FreeToPagedLookasideListImpl(v3, a1);
  return result;
}
