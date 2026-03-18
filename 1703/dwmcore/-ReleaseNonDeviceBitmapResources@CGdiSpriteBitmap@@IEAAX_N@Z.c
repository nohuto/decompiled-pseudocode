/*
 * XREFs of ?ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z @ 0x180055890
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x180022CE0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 *     ?UpdateSectionHandle@CGdiSpriteBitmap@@IEAAJPEAX@Z @ 0x180055398 (-UpdateSectionHandle@CGdiSpriteBitmap@@IEAAJPEAX@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180055960 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::ReleaseNonDeviceBitmapResources(CGdiSpriteBitmap *this, char a2)
{
  void *v2; // rdi
  void *v5; // rcx
  HANDLE CurrentProcess; // rax

  v2 = (void *)*((_QWORD *)this + 44);
  if ( v2 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v2);
    *((_QWORD *)this + 44) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 43);
  if ( v5 )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( !a2 && !*((_QWORD *)this + 48) )
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
}
